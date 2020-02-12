// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DES203_PROJECT_RangedWeapon_generated_h
#error "RangedWeapon.generated.h already included, missing '#pragma once' in RangedWeapon.h"
#endif
#define DES203_PROJECT_RangedWeapon_generated_h

#define DES203_Project_Source_DES203_Project_RangedWeapon_h_15_SPARSE_DATA
#define DES203_Project_Source_DES203_Project_RangedWeapon_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPickedUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPickedUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShoot_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shoot_Implementation(); \
		P_NATIVE_END; \
	}


#define DES203_Project_Source_DES203_Project_RangedWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPickedUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPickedUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShoot_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shoot_Implementation(); \
		P_NATIVE_END; \
	}


#define DES203_Project_Source_DES203_Project_RangedWeapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARangedWeapon(); \
	friend struct Z_Construct_UClass_ARangedWeapon_Statics; \
public: \
	DECLARE_CLASS(ARangedWeapon, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DES203_Project"), NO_API) \
	DECLARE_SERIALIZER(ARangedWeapon)


#define DES203_Project_Source_DES203_Project_RangedWeapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARangedWeapon(); \
	friend struct Z_Construct_UClass_ARangedWeapon_Statics; \
public: \
	DECLARE_CLASS(ARangedWeapon, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DES203_Project"), NO_API) \
	DECLARE_SERIALIZER(ARangedWeapon)


#define DES203_Project_Source_DES203_Project_RangedWeapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARangedWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARangedWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARangedWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARangedWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARangedWeapon(ARangedWeapon&&); \
	NO_API ARangedWeapon(const ARangedWeapon&); \
public:


#define DES203_Project_Source_DES203_Project_RangedWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARangedWeapon(ARangedWeapon&&); \
	NO_API ARangedWeapon(const ARangedWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARangedWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARangedWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARangedWeapon)


#define DES203_Project_Source_DES203_Project_RangedWeapon_h_15_PRIVATE_PROPERTY_OFFSET
#define DES203_Project_Source_DES203_Project_RangedWeapon_h_12_PROLOG
#define DES203_Project_Source_DES203_Project_RangedWeapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DES203_Project_Source_DES203_Project_RangedWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	DES203_Project_Source_DES203_Project_RangedWeapon_h_15_SPARSE_DATA \
	DES203_Project_Source_DES203_Project_RangedWeapon_h_15_RPC_WRAPPERS \
	DES203_Project_Source_DES203_Project_RangedWeapon_h_15_INCLASS \
	DES203_Project_Source_DES203_Project_RangedWeapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DES203_Project_Source_DES203_Project_RangedWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DES203_Project_Source_DES203_Project_RangedWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	DES203_Project_Source_DES203_Project_RangedWeapon_h_15_SPARSE_DATA \
	DES203_Project_Source_DES203_Project_RangedWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DES203_Project_Source_DES203_Project_RangedWeapon_h_15_INCLASS_NO_PURE_DECLS \
	DES203_Project_Source_DES203_Project_RangedWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DES203_PROJECT_API UClass* StaticClass<class ARangedWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DES203_Project_Source_DES203_Project_RangedWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
