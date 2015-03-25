LOCAL_PATH:=$(call my-dir)

include $(CLEAR_VARS)
APP_ABI:=armeabi

APP_STL:=gnustl_static
APP_CPPFLAGS:=-fexceptions -frtti

NDK_TOOLCHAIN_VERSION:=clang3.4-obfuscator

# include $(BUILD_EXECUTABLE)
