%package -n patterns-sailfish-device-adaptation-victara
Summary: Jolla HW Adaptation victara
Requires: kernel-adaptation-victara
Requires: droid-config-victara-sailfish
Requires: droid-config-victara-pulseaudio-settings
Requires: droid-config-victara-policy-settings
Requires: droid-config-victara-preinit-plugin
Requires: droid-config-victara-flashing
Requires: droid-config-victara-bluez5
Requires: droid-hal-version-victara

# Graphics (mesa)
Requires: mesa-dri-drivers
Requires: mesa-libEGL
Requires: mesa-libGLESv2
Requires: mesa-libgbm
Requires: wayland-egl
Requires: qt5-plugin-platform-eglfs

# Vibra
Requires: libngf-qt5-qtfeedback
Requires: qt5-feedback-haptics-ffmemless

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

# Pulseaudio
Requires: pulseaudio-module-keepalive

# Connman
#Requires: sailfish-connman-plugin-tethering-keepalive

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qtscenegraph-adaptation

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-plugin-encsfa

# Flashlight
Requires: jolla-settings-system-flashlight

# For GPS
Requires: gpsd
Requires: geoclue
Requires: geoclue-provider-gpsd3

# Sound
Requires: alsa-utils
Requires: alsa-ucm-conf

# Cameras
Requires: v4l-utils

# For FM radio on some QCOM devices
#Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
#Requires: jolla-mediaplayer-radio

%description -n patterns-sailfish-device-adaptation-victara
Pattern with packages for victara HW Adaptation

%files -n patterns-sailfish-device-adaptation-victara
