LOCAL_PATH:=$(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:=test
LOCAL_SRC_FILES:=test.cpp
LOCAL_CFLAGS+= -O0
LOCAL_CPPFLAGS+= -O1
LOCAL_LDLIBS:=-static

# LOCAL_CFLAGS:=-mllvm -xse -mllvm -sub -mllvm -fla -mllvm -bcf

include $(BUILD_EXECUTABLE)

