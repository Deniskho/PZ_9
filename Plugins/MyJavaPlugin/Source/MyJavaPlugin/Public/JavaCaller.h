// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JavaCaller.generated.h"

/**
 * 
 */
UCLASS()
class MYJAVAPLUGIN_API UJavaCaller : public UObject
{
	GENERATED_BODY()

public:
	static void CallJavaCode();
	
};
