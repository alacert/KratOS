#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/kratos.kernel isodir/boot/kratos.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "kratos" {
	multiboot /boot/kratos.kernel
}
EOF
grub-mkrescue -o kratos.iso isodir
