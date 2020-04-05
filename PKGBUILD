# Maintainer: Felix Yan <felixonmars@archlinux.org>
# Maintainer: Antonio Rojas <arojas@archlinux.org>
# Contributor: Andrea Scarpino <andrea@archlinux.org>

pkgname=konsole
pkgver=20.03.90
pkgrel=1.1
arch=(x86_64)
url='https://kde.org/applications/system/konsole/'
pkgdesc="KDE's terminal emulator"
license=(GPL LGPL FDL)
groups=(kde-applications kdebase)
depends=(knotifyconfig kpty kparts kinit knewstuff)
makedepends=(extra-cmake-modules kdoctools)
optdepends=('keditbookmarks: to manage bookmarks')
source=("https://download.kde.org/unstable/release-service/$pkgver/src/$pkgname-$pkgver.tar.xz"{,.sig}
         kdebug-416376.patch::"https://cgit.kde.org/konsole.git/patch/?id=26f4a2218f52f790d4de087216098619a753164e")
sha256sums=('7c2d105e0eb97d704afba53d5396fd659daef4ef7f20f23fc6907b974d039eae'
            'SKIP'
            '4fb50295cf48cc7ad4178f5e092e286949eef532a90eb26c3e0738ba0fa4a9bf')
validpgpkeys=(CA262C6C83DE4D2FB28A332A3A6A4DB839EAA6D7  # Albert Astals Cid <aacid@kde.org>
              F23275E4BF10AFC1DF6914A6DBD2CE893E2D1C87) # Christoph Feck <cfeck@kde.org>

prepare() {
  mkdir -p build

  cd $pkgname-$pkgver
  msg "Applying kdebug 416376 patch"
  patch -p1 -i ../kdebug-416376.patch
}

build() {
  cd build
  cmake ../$pkgname-$pkgver \
    -DBUILD_TESTING=OFF
  make
}

package() {
  cd build
  make DESTDIR="$pkgdir" install
}
