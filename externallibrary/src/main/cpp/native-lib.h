//
// Created by Jermey on 01.03.2018.
//

#ifndef JNIPLAYGROUND_NATIVE_LIB_H
#define JNIPLAYGROUND_NATIVE_LIB_H

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint
JNICALL
JNI_OnLoad(JavaVM *vm, void *reserved);


JNIEXPORT jstring
JNICALL
Java_pl_jermey_externallibrary_NativeModule_helloWorld(JNIEnv *env, jobject instance);

#ifdef __cplusplus
};
#endif


#endif //JNIPLAYGROUND_NATIVE_LIB_H
