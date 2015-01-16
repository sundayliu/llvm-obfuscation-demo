LOCAL_PATH:=$(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:=test
LOCAL_SRC_FILES:=test.cpp

LOCAL_LDLIBS:=-static

LOCAL_CFLAGS:=-mllvm -sub -mllvm -fla -mllvm -bcf

include $(BUILD_EXECUTABLE)

