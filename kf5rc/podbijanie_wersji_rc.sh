#!/bin/bash
find -name PKGBUILD -exec sed -i 's/pkgver=5.53rc/pkgver=5.54rc/g' {} \;
find -name PKGBUILD -exec sed -i 's/v5.53.0-rc1/v5.54.0-rc1/g' {} \;
