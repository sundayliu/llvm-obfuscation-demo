LOCAL_PATH :=$(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE :=clang-test
LOCAL_SRC_FILES :=clang-test.cpp
#LOCAL_CFLAGS:= -mllvm -sub -mllvm -fla -mllvm -bcf #-mllvm -xse
#LOCAL_CPPFLAGS:= -mllvm -sub #-mllvm -xse
include $(BUILD_EXECUTABLE)

