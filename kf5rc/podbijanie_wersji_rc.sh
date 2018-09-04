#!/bin/bash
find -name PKGBUILD -exec sed -i 's/pkgver=5.48rc/pkgver=5.50rc/g' {} \;
find -name PKGBUILD -exec sed -i 's/v5.48.0-rc1/v5.50.0-rc1/g' {} \;
