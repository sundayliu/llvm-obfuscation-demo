REM echo off
set PATH=d:\android-ndk-r10d\toolchains\llvm-3.4-obfuscator\prebuilt\windows\bin;%PATH%

clang++.exe -v -gcc-toolchain d:/android-ndk-r10d/toolchains/arm-linux-androideabi-4.8/prebuilt/windows ^
-Id:/android-ndk-r10d/sources/cxx-stl/gnu-libstdc++/4.8/include ^
-Id:/android-ndk-r10d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi/include ^
-Id:/android-ndk-r10d/sources/cxx-stl/gnu-libstdc++/4.8/include/backward ^
-Id:/android-ndk-r10d/platforms/android-3/arch-arm/usr/include ^
-fexceptions -frtti -Os -emit-llvm  ^
-o sub.ll -S -target armv5te-none-linux-androideabi sub.cpp 

clang++.exe -v -gcc-toolchain d:/android-ndk-r10d/toolchains/arm-linux-androideabi-4.8/prebuilt/windows ^
-Id:/android-ndk-r10d/sources/cxx-stl/gnu-libstdc++/4.8/include ^
-Id:/android-ndk-r10d/sources/cxx-stl/gnu-libstdc++/4.8/libs/armeabi/include ^
-Id:/android-ndk-r10d/sources/cxx-stl/gnu-libstdc++/4.8/include/backward ^
-Id:/android-ndk-r10d/platforms/android-3/arch-arm/usr/include ^
-fexceptions -frtti -Os -emit-llvm -mllvm -sub -mllvm -bcf -mllvm -fla  ^
-o sub_o.ll -S -target armv5te-none-linux-androideabi sub.cpp 

pause