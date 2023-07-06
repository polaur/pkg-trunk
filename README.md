# POLAUR
# Stuff from Arch Linux Polish Community
# You install it at your own risk.
# You've been warned.

# linux-firmware-git

###### The zst version does NOT work properly with kernel 6.1 - if you are using the LTS kernel install the xz version.
###### If you want to use the version with zst compression - use kernel 6.4 and make sure you have the latest versions of dracut and booster installed (currently only booster-git).

# General:

Repository for upcomming packages like RC version or for version of packages
in Arch's testing or kde/gnome-unstable repository with fixes.
Pkgrel schema is:
"original, Arch's pkgrel"."our pkgrel" so new pkgrel of this packages in Arch repository
will upgrade our packages. Then if it will be still neccessary, we upgrade our packages.

# Download:

```
git clone https://github.com/polaur/pkg-trunk.git

```

or

```
git clone https://gitlab.com/polaur/pkg-trunk.git

```

# Install:


```
cd /some_path/pkg-trunk/package_name
makepkg -srci

```


# Contact


If you ever are in doubt about how something goes... you ask us.

[OUR SUPPORT](https://forum.archlinux.org.pl/viewtopic.php?id=614)



