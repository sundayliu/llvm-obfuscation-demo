LOCAL_PATH:=$(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE:=tersafe
LOCAL_SRC_FILES:=tersafe.cpp #test_asm.cpp.arm
ifeq ($(TARGET_ARCH),arm)
LOCAL_SRC_FILES+=test_asm.cpp.arm
endif

ifeq ($(TARGET_ARCH),arm64)
LOCAL_SRC_FILES+=arm64.cpp
endif
#LOCAL_ARM_MODE:=arm
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE:=gameprotect
LOCAL_SRC_FILES:=gameprotect.cpp
include $(BUILD_EXECUTABLE)
