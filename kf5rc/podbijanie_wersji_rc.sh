#!/bin/bash
find -name PKGBUILD -exec sed -i 's/pkgver=5.54rc/pkgver=5.57rc/g' {} \;
find -name PKGBUILD -exec sed -i 's/v5.54.0-rc1/v5.57.0-rc1/g' {} \;
