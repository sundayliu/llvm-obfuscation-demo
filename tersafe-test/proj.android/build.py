import os,sys

if __name__=="__main__":
    cmd = '''D:/android-ndk-r10c/toolchains/llvm-3.5-obfuscator/prebuilt/windows/bin/clang++.exe \
    -v \
    -target arm \
    -ID:/android-ndk-r10c/sources/cxx-stl/gnu-libstdc++/4.8/include \
    -ID:/android-ndk-r10c/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi/include \
    -ID:/android-ndk-r10c/sources/cxx-stl/gnu-libstdc++/4.8/include/backward \
    -Ijni \
    -DANDROID -Wa,--noexecstack -Wformat -Werror=format-security \
    -ID:/android-ndk-r10c/platforms/android-5/arch-arm/usr/include \
    -c jni/gameprotect.cpp \
    -o ./obj/local/armeabi/objs/gameprotect/gameprotect.o'''
    # cmd = '''D:/android-ndk-r10c/toolchains/llvm-3.5-obfuscator/prebuilt/windows/bin/clang++.exe \
    # -v'''

    cmd = '''D:/android-ndk-r10d/toolchains/llvm-3.5-obfuscator/prebuilt/windows/bin/clang++.exe \
    -v -MMD -MP -MF \
    ./obj/local/armeabi/objs/gameprotect/gameprotect.o.d \
    -gcc-toolchain D:/android-ndk-r10d/toolchains/arm-linux-androideabi-4.8/prebuilt/windows \
    -fpic -ffunction-sections -funwind-tables -fstack-protector -Wno-invalid-command-line-argument \
    -Wno-unused-command-line-argument -no-canonical-prefixes -fno-integrated-as \
    -target armv5te-none-linux-androideabi \
    -march=armv5te \
    -mtune=xscale -msoft-float -fno-exceptions -fno-rtti -mthumb -Os -g -DNDEBUG -fomit-frame-pointer \
    -fno-strict-aliasing \
    -ID:/android-ndk-r10d/sources/cxx-stl/gnu-libstdc++/4.8/include \
    -ID:/android-ndk-r10d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi/include \
    -ID:/android-ndk-r10d/sources/cxx-stl/gnu-libstdc++/4.8/include/backward \
    -Ijni \
    -DANDROID -Wa,--noexecstack -Wformat -Werror=format-security \
    -ID:/android-ndk-r10d/platforms/android-8/arch-arm/usr/include \
    -c jni/gameprotect.cpp \
    -o ./obj/local/armeabi/objs/gameprotect/gameprotect.o '''
    #print cmd

    #cmd = '''D:/android-ndk-r10d/toolchains/llvm-3.5-obfuscator/prebuilt/windows/bin/clang++.exe -v '''
    os.system(cmd)