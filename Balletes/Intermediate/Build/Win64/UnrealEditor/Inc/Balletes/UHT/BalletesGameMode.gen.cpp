// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Balletes/BalletesGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBalletesGameMode() {}
// Cross Module References
	BALLETES_API UClass* Z_Construct_UClass_ABalletesGameMode();
	BALLETES_API UClass* Z_Construct_UClass_ABalletesGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Balletes();
// End Cross Module References
	void ABalletesGameMode::StaticRegisterNativesABalletesGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABalletesGameMode);
	UClass* Z_Construct_UClass_ABalletesGameMode_NoRegister()
	{
		return ABalletesGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABalletesGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABalletesGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Balletes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalletesGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BalletesGameMode.h" },
		{ "ModuleRelativePath", "BalletesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABalletesGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABalletesGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABalletesGameMode_Statics::ClassParams = {
		&ABalletesGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABalletesGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABalletesGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABalletesGameMode()
	{
		if (!Z_Registration_Info_UClass_ABalletesGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABalletesGameMode.OuterSingleton, Z_Construct_UClass_ABalletesGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABalletesGameMode.OuterSingleton;
	}
	template<> BALLETES_API UClass* StaticClass<ABalletesGameMode>()
	{
		return ABalletesGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABalletesGameMode);
	ABalletesGameMode::~ABalletesGameMode() {}
	struct Z_CompiledInDeferFile_FID_Balletes_Balletes_Source_Balletes_BalletesGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Balletes_Balletes_Source_Balletes_BalletesGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABalletesGameMode, ABalletesGameMode::StaticClass, TEXT("ABalletesGameMode"), &Z_Registration_Info_UClass_ABalletesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABalletesGameMode), 1412726829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Balletes_Balletes_Source_Balletes_BalletesGameMode_h_3689854328(TEXT("/Script/Balletes"),
		Z_CompiledInDeferFile_FID_Balletes_Balletes_Source_Balletes_BalletesGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Balletes_Balletes_Source_Balletes_BalletesGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
