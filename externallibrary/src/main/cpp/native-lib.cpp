//
// Created by Jermey on 01.03.2018.
//

#include <jni.h>
#include <string>
#include "native-lib.h"

jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env;
    if (vm->GetEnv(reinterpret_cast<void **>(&env), JNI_VERSION_1_6) != JNI_OK) {
        return JNI_ERR;
    }

    return JNI_VERSION_1_6;
}

jstring Java_pl_jermey_externallibrary_NativeModule_helloWorld(JNIEnv *env, jobject /* this */) {
    jclass clazz = env->FindClass("pl/jermey/externallibrary/NativeModule");
    jmethodID methodId = env->GetStaticMethodID(clazz, "hello", "()Ljava/lang/String;");
    if (methodId == NULL) {
        std::string hello = "Hello from C++";
        return env->NewStringUTF(hello.c_str());
    } else {
        return (jstring) env->CallStaticObjectMethod(clazz, methodId);
    }
}

