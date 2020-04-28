// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DES203_PROJECT_DES203_ProjectGameMode_generated_h
#error "DES203_ProjectGameMode.generated.h already included, missing '#pragma once' in DES203_ProjectGameMode.h"
#endif
#define DES203_PROJECT_DES203_ProjectGameMode_generated_h

#define DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_SPARSE_DATA
#define DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeHUDState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeHUDState(Z_Param_NewState); \
		P_NATIVE_END; \
	}


#define DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeHUDState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeHUDState(Z_Param_NewState); \
		P_NATIVE_END; \
	}


#define DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADES203_ProjectGameMode(); \
	friend struct Z_Construct_UClass_ADES203_ProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(ADES203_ProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DES203_Project"), DES203_PROJECT_API) \
	DECLARE_SERIALIZER(ADES203_ProjectGameMode)


#define DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADES203_ProjectGameMode(); \
	friend struct Z_Construct_UClass_ADES203_ProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(ADES203_ProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DES203_Project"), DES203_PROJECT_API) \
	DECLARE_SERIALIZER(ADES203_ProjectGameMode)


#define DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DES203_PROJECT_API ADES203_ProjectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADES203_ProjectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DES203_PROJECT_API, ADES203_ProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADES203_ProjectGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DES203_PROJECT_API ADES203_ProjectGameMode(ADES203_ProjectGameMode&&); \
	DES203_PROJECT_API ADES203_ProjectGameMode(const ADES203_ProjectGameMode&); \
public:


#define DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DES203_PROJECT_API ADES203_ProjectGameMode(ADES203_ProjectGameMode&&); \
	DES203_PROJECT_API ADES203_ProjectGameMode(const ADES203_ProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DES203_PROJECT_API, ADES203_ProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADES203_ProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADES203_ProjectGameMode)


#define DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IngameHUDClass() { return STRUCT_OFFSET(ADES203_ProjectGameMode, IngameHUDClass); } \
	FORCEINLINE static uint32 __PPO__InventoryHUDClass() { return STRUCT_OFFSET(ADES203_ProjectGameMode, InventoryHUDClass); } \
	FORCEINLINE static uint32 __PPO__ShopGeneralHUDClass() { return STRUCT_OFFSET(ADES203_ProjectGameMode, ShopGeneralHUDClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(ADES203_ProjectGameMode, CurrentWidget); }


#define DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_9_PROLOG
#define DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_SPARSE_DATA \
	DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_RPC_WRAPPERS \
	DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_INCLASS \
	DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_SPARSE_DATA \
	DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
	DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DES203_PROJECT_API UClass* StaticClass<class ADES203_ProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DES203_Project_Source_DES203_Project_DES203_ProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
