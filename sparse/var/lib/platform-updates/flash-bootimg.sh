#!/bin/sh
dd if=/boot/hybris-boot.img of=/dev/mmcblk0p33 bs=4096 seek=128 conv=fsync
