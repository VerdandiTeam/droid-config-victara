#!/bin/bash

mount -o bind /usr/libexec/droid-hybris/system/etc/mixer_paths.xml /system/etc/mixer_paths.xml

mkdir -p /data/misc/wifi
chown 1010:1010 /data/misc/wifi
chmod 0770 /data/misc/wifi
touch /data/misc/wifi/WCNSS_qcom_cfg.ini
mount --bind /etc/wifi/WCNSS_qcom_cfg.ini /data/misc/wifi/WCNSS_qcom_cfg.ini
