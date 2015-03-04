#ifndef __TERSAFE_H__
#define __TERSAFE_H__

#include <jni.h>
typedef struct
{
    unsigned int size;
    unsigned int game_id;
    void* send_data_to_svr;
}TssSdkInitInfo;

namespace TssSDK
{
    
   // typedef jint(*pfn_jni_onload)(JavaVM* vm, void* reserved) 
    #if defined(__arm__)
    typedef jint (*func_JNI_OnLoad)(JavaVM* vm, void* reserved) __attribute__((pcs("aapcs")));
    #else
    typedef jint (*func_JNI_OnLoad)(JavaVM* vm, void* reserved);
    #endif
    
    #define TSS_FUNC_LIST_VER_0     (0)

    //add tss_sdk_setuserinfoex, add 4 nullsub to function list
    #define TSS_FUNC_LIST_VER_1     (1)

    //add All Java Interface
    #define TSS_FUNC_LIST_VER_2     (2)


    #define SUPPORT_FUNC_LIST_VER   (TSS_FUNC_LIST_VER_2)
    
    #define TERSAFE_VERSION "1.7.1.2543"
    
    typedef struct _TssFuncList
    {
        int iIsProxy;
        const char * szSdkVer;
        int iDataVer;
        func_JNI_OnLoad OnLoad;
    }TssFuncList, *PTssFuncList;
}


#endif // end of __TERSAFE_H__