#!/bin/bash
find -name PKGBUILD -exec sed -i 's/pkgver=5.52rc/pkgver=5.53rc/g' {} \;
find -name PKGBUILD -exec sed -i 's/v5.52.0-rc1/v5.53.0-rc1/g' {} \;
