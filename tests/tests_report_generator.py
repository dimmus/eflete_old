#!/usr/bin/python
import os
import os.path
import argparse

def parse_doc(html_file):
	with open(html_file) as f:
		lines = list(f)
		for i in range(0, len(lines)):
			l = lines[i]
			if '<div class="summary">' in l:
				return
			if 'class="title"' in l:
				start = l.find('>') + 1
				FUNC_NAME = l[start:l.find('<', start)]
				start = l.find('.html">')
				TEST_MODULE_NAME = l[start + 7:l.find('<', start)] # start + len('.html">')
				break
		for i in range (i, len(lines)):
			l = lines[i]
			if '<p>' in l:
				MODULE_NAME = l.split("</p>")[0]
				MODULE_NAME = MODULE_NAME[3:-1]# len('<p>')
				break
		for i in range (i, len(lines)):
			if "<table" in lines[i]:
				break
		j = i + 1
		for j in range (i + 1, len(lines)):
			if '</table>' in lines[j]:
				break
		file_name = "./" + TEST_MODULE_NAME + ".tmp"
		new = not os.path.exists(file_name)
		try:
			with open(file_name, 'a') as out:
				if (new):
					out.write('<tr><td>Module name</td><td>' + MODULE_NAME + '</td>\n')
					out.write('<tr><td>Function Name</td><td>Test Case ID</td>' +
							  '<td>Test Case Description</td><td>Input</td>' +
							  '<td>Expected Result</td><td>Execution Result</td>' +
							  '<td>Pass/Fail</td></tr>\n')
				for i in range (i + 1, j):
					out.write(lines[i])
		except IOError:
			print "Incorrect test doc: \"" + html_file + "\""

def walk_dirs(prefix):
	htmls = []
	for d in os.listdir(prefix):
		if (os.path.isdir(prefix + d) and d != 'search'):
			for d1 in os.listdir(prefix + d):
				for h1 in os.listdir(os.path.join(prefix, d, d1)):
					html = os.path.join(prefix, d, d1, h1)
					if html.endswith('.html'):
						parse_doc(html)

def gen_report(logs_dir, output_file, ignorepassed, ignorenotfound):
	with open(output_file, 'w') as out:
		out.write('<html><body><table border="1">\n')
		for tmp_file in os.listdir('.'):
			if ((not os.path.isdir(tmp_file)) and (tmp_file.endswith('.tmp'))):
				try:
					with open(os.path.join(logs_dir, tmp_file[:-4].lower() + '.log')) as log:
						lines = list(log)
						if len(lines) == 1:
							continue
						for i in range(0, len(lines)):
							if ('Checks:' in lines[i]) and ('Failures:' in lines[i]) and ('Errors:' in lines[i]):
								log_start = i + 1
								break
						with open(tmp_file) as tmp:
							tmp_lines = list(tmp)
							out.write(tmp_lines[0])
							out.write(tmp_lines[1])
							i = 2
							try:
								while i < len(tmp_lines):
									passed_flag = False
									found_flag = False
									tmp_out = ""
									i = i + 1
									test_id = tmp_lines[i].split("</td><td>", 3)[1][:-1]
									tmp_out = tmp_out + "<tr>"
									tmp_out = tmp_out + tmp_lines[i]
									i = i + 1
									while not '</td><td>' in tmp_lines[i]:
										tmp_out = tmp_out + tmp_lines[i]
										i = i + 1
									tmp_split = tmp_lines[i].split("</tr>")[0]
									tmp_split = tmp_split.split("</td><td>", 3)
									for j in range(log_start, len(lines)):
										result = "UNKNOWN";
										passed = '<td bgcolor="#FFFF00">Result not found</td>'
										if test_id in lines[j]:
											log_split = lines[j].split(':', 7)
											found_flag = True;
											if log_split[2] == 'P':
												passed_flag = True
												result = tmp_split[2]
												passed = '<td bgcolor="#00FF00">Pass</td>'
											elif log_split[2] == 'F':
												result = log_split[6]
												passed = '<td bgcolor="#FF0000">Fail</td>'
											elif log_split[2] == 'E':
												if 'Segmentation fault' in log_split[6]:
													result = 'Segmentation fault'
												else:
													result = log_split[6]
												passed = '<td bgcolor="#FF0000">Fail</td>'
											break
									tmp_out = tmp_out + tmp_split[0] + '</td><td>'
									tmp_out = tmp_out + tmp_split[1] + '</td><td>'
									tmp_out = tmp_out + tmp_split[2] + '</td><td>'
									tmp_out = tmp_out + result + '</td>'
									tmp_out = tmp_out + passed + '</tr>'
									if (not passed_flag or not ignorepassed) and (found_flag or not ignorenotfound):
										out.write(tmp_out)
									while not '</tr>' in tmp_lines[i]:
										i = i + 1
									i = i + 1
							except IndexError:
								print "Incorrect doc structure in \"" + tmp_file + "\""
								print "  last test_id: " + test_id
							out.write('<tr><td> </td></tr>')
				except IOError:
					print "There is no test log for \"" + tmp_file + "\""
		out.write('</table></body></html>')
		print "Saved into \"" + output_file + "\""

def main():
	parser = argparse.ArgumentParser(description='Generate UTC report')
	parser.add_argument('html', help='path to the tests documentation directory')
	parser.add_argument('log', help='path to the tests log directory')
	parser.add_argument('-c', '--clean', action='store_true', help='removes all *.tmp files from current directory before processing')
	parser.add_argument('-i', '--ignorepassed', action='store_true', help='do not add passed test to output')
	parser.add_argument('-n', '--ignorenotfound', action='store_true', help='do not add not found test to output')
	parser.add_argument('-t', '--tmp', action='store_true', help='do not remove *.tmp files from current directory after processing')
	parser.add_argument('-o', '--output', default='report.html', help='output file name. Default name: report.html')
	args = parser.parse_args()
	
	for f in os.listdir('.'):
		if not os.path.isdir(f) and f.endswith('.tmp'):
			if args.clean:
				os.remove(f)
			else:
				print 'ERROR: *.tmp files found in current directory. Remove them manualy or add --clean flag'
				return
	if not os.path.isdir(args.html):
		print 'ERROR: "{}" is not directory'.format(args.html)
		return
	if not os.path.isdir(args.log):
		print 'ERROR: "{}" is not directory'.format(args.log)
		return
	walk_dirs(args.html)
	gen_report(args.log, args.output, args.ignorepassed, args.ignorenotfound)
	if not args.tmp:
		for f in os.listdir('.'):
			if not os.path.isdir(f) and f.endswith('.tmp'):
				os.remove(f)

if __name__ == '__main__':
	main()
