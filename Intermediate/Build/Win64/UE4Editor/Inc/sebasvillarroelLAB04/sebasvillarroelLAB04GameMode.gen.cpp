// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "sebasvillarroelLAB04/sebasvillarroelLAB04GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesebasvillarroelLAB04GameMode() {}
// Cross Module References
	SEBASVILLARROELLAB04_API UClass* Z_Construct_UClass_AsebasvillarroelLAB04GameMode_NoRegister();
	SEBASVILLARROELLAB04_API UClass* Z_Construct_UClass_AsebasvillarroelLAB04GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_sebasvillarroelLAB04();
// End Cross Module References
	void AsebasvillarroelLAB04GameMode::StaticRegisterNativesAsebasvillarroelLAB04GameMode()
	{
	}
	UClass* Z_Construct_UClass_AsebasvillarroelLAB04GameMode_NoRegister()
	{
		return AsebasvillarroelLAB04GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AsebasvillarroelLAB04GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AsebasvillarroelLAB04GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_sebasvillarroelLAB04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AsebasvillarroelLAB04GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "sebasvillarroelLAB04GameMode.h" },
		{ "ModuleRelativePath", "sebasvillarroelLAB04GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AsebasvillarroelLAB04GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AsebasvillarroelLAB04GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AsebasvillarroelLAB04GameMode_Statics::ClassParams = {
		&AsebasvillarroelLAB04GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AsebasvillarroelLAB04GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AsebasvillarroelLAB04GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AsebasvillarroelLAB04GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AsebasvillarroelLAB04GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AsebasvillarroelLAB04GameMode, 3438453018);
	template<> SEBASVILLARROELLAB04_API UClass* StaticClass<AsebasvillarroelLAB04GameMode>()
	{
		return AsebasvillarroelLAB04GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AsebasvillarroelLAB04GameMode(Z_Construct_UClass_AsebasvillarroelLAB04GameMode, &AsebasvillarroelLAB04GameMode::StaticClass, TEXT("/Script/sebasvillarroelLAB04"), TEXT("AsebasvillarroelLAB04GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AsebasvillarroelLAB04GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
