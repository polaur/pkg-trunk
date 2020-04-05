# Maintainer: pavbaranov <pavbaranov at gmail dot com>
# only for version with bugfixes from upcomming releases
# based on the original works by:
# Maintainer: Felix Yan <felixonmars@archlinux.org>
# Maintainer: Antonio Rojas <arojas@archlinux.org>
# Contributor: Andrea Scarpino <andrea@archlinux.org>

pkgname=kio-extras
pkgver=20.03.90
pkgrel=1.1
pkgdesc="Additional components to increase the functionality of KIO"
arch=(x86_64)
url='https://www.kde.org/applications/internet/'
license=(LGPL)
depends=(kio kdnssd libssh smbclient exiv2 openexr libmtp kpty kactivities-stats phonon-qt5 syntax-highlighting kdsoap-ws-discovery-client libxcursor)
makedepends=(extra-cmake-modules kdoctools gperf taglib libappimage)
optdepends=('qt5-imageformats: thumbnails for additional image formats' 'perl: info kioslave'
            'kimageformats: thumbnails for additional image formats' 'taglib: audio file thumbnails'
            'phonon-qt5: audio file previews' 'libappimage: AppImage thumbnails')
groups=(kde-applications kdenetwork)
source=("https://download.kde.org/unstable/release-service/$pkgver/src/$pkgname-$pkgver.tar.xz"{,.sig}
         kio-extras-kdsoap.patch
         kdebug-291835.patch::"https://cgit.kde.org/kio-extras.git/patch/?id=46b5fb425c148b9a6b02eed3ef25f14feb5996ba"
         )
sha256sums=('7c2cc3a3e144d34f860105a34988c54284fc7a134d76f5bb6a22e0e2ec8824b3'
            'SKIP'
            '4e3504556cdd01cf638d2957e55a7c09a304a64eee59a542165204181bb04492'
            'a8cfe7289f2ccdf8895d9423e14fd1053f4819e347a4698316c06da61528c5fe')
validpgpkeys=(CA262C6C83DE4D2FB28A332A3A6A4DB839EAA6D7  # Albert Astals Cid <aacid@kde.org>
              F23275E4BF10AFC1DF6914A6DBD2CE893E2D1C87) # Christoph Feck <cfeck@kde.org>

prepare() {
  mkdir -p build

  cd $pkgname-$pkgver
  patch -p1 -i ../kio-extras-kdsoap.patch # Fix build with external kdsoap-ws-discovery-client
  msg "Applying kdebug 291835 patch; fix in 20.08"
  patch -p1 -i ../kdebug-291835.patch
}

build() {
  cd build
  cmake ../$pkgname-$pkgver \
    -DLIBAPPIMAGE_LIBRARIES=libappimage.so \
    -DBUILD_TESTING=OFF
  make
}

package() {
  cd build
  make DESTDIR="$pkgdir" install
}
