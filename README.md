<p align="center">
  <img src="./data/images/eflete.ico" border="0"></
</p>

<br/>
<p align="center">
  <img alt="GitHub repo size" src="https://img.shields.io/github/repo-size/dimmus/eflete?style=for-the-badge">
  <img alt="GitHub commit activity" src="https://img.shields.io/github/commit-activity/w/dimmus/eflete?style=for-the-badge">
  <img alt="Maintenance" src="https://img.shields.io/maintenance/yes/2022?style=for-the-badge">
</p>
<br/>

Efl Edje Theme Editor is a rich graphical tool, that provide UI for edc markup.
It is aimed to simplify creation and editing widgets styles. No one, for sure,
want to learn EDC syntax. Eflete was designed with mind, that target users are
not just programmers but also designers. Besides styles Eflete is also able to
create and edit custom layouts. This is useful feature for developers which
creates applications layouts.

```
Note:
For comfortable work with Eflete it should have the HD (1366x768) resolution,
if resolution is less not all UI componenets is displayed.
```

## Requirements:

   * efl (>= 1.26.3 && < 1.26.99)

Please note that some features may not quite function correctly or
completely on EFL 1.26.99

## Compiling:

Once you have met requirements, compiling and installing is simple:
```sh
./autogen.sh
make
make install
```

To install program to specified directory use --prefix option on configure step:
```sh
./autogen.sh --prefix=/full/path/to/some/dir
```

## Applying themes

To apply created theme to elementary you should place exported .edj-file to
elementary themes dir (default: `/usr/local/share/elementary/themes)`. Note do not
forget to add read permissions to copied file.
After that theme will be available for selection from `elementary_config`.
