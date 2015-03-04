#include "tersafe.h"

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

#include <jni.h>

#define DEBUG_LOG(...) printf(__VA_ARGS__)

void tss_sdk_init(TssSdkInitInfo* info)
{
    DEBUG_LOG("size:%u", info->size);
    DEBUG_LOG("game id:%u", info->game_id);
    DEBUG_LOG("func pointer:%p", info->send_data_to_svr);
}

jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    return 0;
}

jint Test_OnLoad(JavaVM* vm, void* reserved)
{
    return 0;
}

#if defined(__arm__)
typedef jint(*pfn_jni_onload)(JavaVM* vm, void* reserved) __attribute__((pcs("aapcs")));
#else
typedef jint(*pfn_jni_onload)(JavaVM* vm, void* reserved) ;
#endif
pfn_jni_onload g_pfn_JNI_OnLoad = JNI_OnLoad;

//pfn_jni_onload g_pfn_Test_OnLoad = Test_OnLoad;
namespace TssSDK
{
    jint OnLoad(JavaVM* vm, void* reserved)
    {
        return 0;
    }

    //func_JNI_OnLoad g_pfunc_onload = Test_OnLoad;
    TssFuncList g_AllTssExportFunc = {
        0,
        TERSAFE_VERSION,
        TSS_FUNC_LIST_VER_2,
        JNI_OnLoad //JNI_OnLoad
    };
}


