#!/bin/bash
find -name PKGBUILD -exec sed -i 's/pkgver=5.47rc/pkgver=5.48rc/g' {} \;
find -name PKGBUILD -exec sed -i 's/v5.47.0-rc1/v5.48.0-rc1/g' {} \;
