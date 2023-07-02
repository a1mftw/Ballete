// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BalletesProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BALLETES_BalletesProjectile_generated_h
#error "BalletesProjectile.generated.h already included, missing '#pragma once' in BalletesProjectile.h"
#endif
#define BALLETES_BalletesProjectile_generated_h

#define FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_SPARSE_DATA
#define FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_ACCESSORS
#define FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABalletesProjectile(); \
	friend struct Z_Construct_UClass_ABalletesProjectile_Statics; \
public: \
	DECLARE_CLASS(ABalletesProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Balletes"), NO_API) \
	DECLARE_SERIALIZER(ABalletesProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABalletesProjectile(); \
	friend struct Z_Construct_UClass_ABalletesProjectile_Statics; \
public: \
	DECLARE_CLASS(ABalletesProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Balletes"), NO_API) \
	DECLARE_SERIALIZER(ABalletesProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABalletesProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABalletesProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABalletesProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABalletesProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABalletesProjectile(ABalletesProjectile&&); \
	NO_API ABalletesProjectile(const ABalletesProjectile&); \
public: \
	NO_API virtual ~ABalletesProjectile();


#define FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABalletesProjectile(ABalletesProjectile&&); \
	NO_API ABalletesProjectile(const ABalletesProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABalletesProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABalletesProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABalletesProjectile) \
	NO_API virtual ~ABalletesProjectile();


#define FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_12_PROLOG
#define FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_SPARSE_DATA \
	FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_RPC_WRAPPERS \
	FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_ACCESSORS \
	FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_INCLASS \
	FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_SPARSE_DATA \
	FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_ACCESSORS \
	FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALLETES_API UClass* StaticClass<class ABalletesProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Balletes_Balletes_Source_Balletes_BalletesProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
