
Debian
====================
This directory contains files used to package nsd/ns-qt
for Debian-based Linux systems. If you compile nsd/ns-qt yourself, there are some useful files here.

## pivx: URI support ##


ns-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install ns-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your ns-qt binary to `/usr/bin`
and the `../../share/pixmaps/pivx128.png` to `/usr/share/pixmaps`

ns-qt.protocol (KDE)

