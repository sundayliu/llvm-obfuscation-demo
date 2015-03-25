d:/android-ndk-r10d/toolchains/llvm-3.4-obfuscator/prebuilt/windows/bin/clang++.exe -v -### ^
-MMD -MP -MF ./obj/local/armeabi/objs/test/test.o.d ^
-gcc-toolchain d:/android-ndk-r10d/toolchains/arm-linux-androideabi-4.8/prebuilt/windows ^
-fpic -ffunction-sections -funwind-tables -fstack-protector -no-canonical-prefixes ^
-target armv5te-none-linux-androideabi -march=armv5te -mtune=xscale -msoft-float -fno-exceptions ^
-fno-rtti -mthumb -Os -g -DNDEBUG -fomit-frame-pointer -fno-strict-aliasing ^
-Id:/android-ndk-r10d/sources/cxx-stl/system/include ^
-Ijni ^
-DANDROID -Wa,--noexecstack -Wformat -Werror=format-security ^
-Id:/android-ndk-r10d/platforms/android-3/arch-arm/usr/include ^
-c  jni/test.cpp -o ./obj/local/armeabi/objs/test/test.o

pause