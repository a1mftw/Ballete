// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBalletes_init() {}
	BALLETES_API UFunction* Z_Construct_UDelegateFunction_Balletes_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Balletes;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Balletes()
	{
		if (!Z_Registration_Info_UPackage__Script_Balletes.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Balletes_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Balletes",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9D0D7574,
				0x001170F7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Balletes.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Balletes.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Balletes(Z_Construct_UPackage__Script_Balletes, TEXT("/Script/Balletes"), Z_Registration_Info_UPackage__Script_Balletes, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9D0D7574, 0x001170F7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
