// Fill out your copyright notice in the Description page of Project Settings.

#include "JavaCaller.h"

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "AndroidApplication.h"
#include <jni.h>

static jmethodID TestFunctionMethodId;
#endif

void UJavaCaller::CallJavaCode()
{
	UE_LOG(LogTemp, Log, TEXT("Start calling java code"));
#if PLATFORM_ANDROID
	static JNIEnv* env = FAndroidApplication::GetJavaEnv();
	TestFunctionMethodId = FJavaWrapper::FindMethod(env, FJavaWrapper::GameActivityClassID, "TestFunction", "()V", false);
	FJavaWrapper::CallVoidMethod(env, FJavaWrapper::GameActivityThis, TestFunctionMethodId);
#endif
}
