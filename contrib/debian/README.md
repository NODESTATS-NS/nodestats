
Debian
====================
This directory contains files used to package nodestatsd/nodestats-qt
for Debian-based Linux systems. If you compile nodestatsd/nodestats-qt yourself, there are some useful files here.

## nodestats: URI support ##


nodestats-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install nodestats-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your nodestatsqt binary to `/usr/bin`
and the `../../share/pixmaps/nodestats128.png` to `/usr/share/pixmaps`

nodestats-qt.protocol (KDE)

