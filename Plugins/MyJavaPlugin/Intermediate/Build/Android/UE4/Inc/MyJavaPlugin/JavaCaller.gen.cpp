// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyJavaPlugin/Public/JavaCaller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJavaCaller() {}
// Cross Module References
	MYJAVAPLUGIN_API UClass* Z_Construct_UClass_UJavaCaller_NoRegister();
	MYJAVAPLUGIN_API UClass* Z_Construct_UClass_UJavaCaller();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MyJavaPlugin();
// End Cross Module References
	void UJavaCaller::StaticRegisterNativesUJavaCaller()
	{
	}
	UClass* Z_Construct_UClass_UJavaCaller_NoRegister()
	{
		return UJavaCaller::StaticClass();
	}
	struct Z_Construct_UClass_UJavaCaller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJavaCaller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MyJavaPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJavaCaller_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JavaCaller.h" },
		{ "ModuleRelativePath", "Public/JavaCaller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJavaCaller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJavaCaller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJavaCaller_Statics::ClassParams = {
		&UJavaCaller::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UJavaCaller_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UJavaCaller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJavaCaller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJavaCaller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJavaCaller, 732414946);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJavaCaller(Z_Construct_UClass_UJavaCaller, &UJavaCaller::StaticClass, TEXT("/Script/MyJavaPlugin"), TEXT("UJavaCaller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJavaCaller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
