// Fill out your copyright notice in the Description page of Project Settings.

#include "MyJavaMode.h"
#include "JavaCaller.h"

void AMyJavaMode::BeginPlay()
{
	UJavaCaller::CallJavaCode();
}
