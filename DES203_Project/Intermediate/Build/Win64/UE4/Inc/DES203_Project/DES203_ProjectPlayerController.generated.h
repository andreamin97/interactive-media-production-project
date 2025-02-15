// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DES203_PROJECT_DES203_ProjectPlayerController_generated_h
#error "DES203_ProjectPlayerController.generated.h already included, missing '#pragma once' in DES203_ProjectPlayerController.h"
#endif
#define DES203_PROJECT_DES203_ProjectPlayerController_generated_h

#define DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_SPARSE_DATA
#define DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTurnY) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTurnY(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTurnX) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTurnX(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Back(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAimAtCursor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AimAtCursor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCharacterNextWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CharacterNextWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCharacterUseItemAtSlotOne) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CharacterUseItemAtSlotOne(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopShooting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopShooting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartShooting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartShooting(); \
		P_NATIVE_END; \
	}


#define DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTurnY) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTurnY(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTurnX) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTurnX(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Back(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAimAtCursor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AimAtCursor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCharacterNextWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CharacterNextWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCharacterUseItemAtSlotOne) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CharacterUseItemAtSlotOne(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopShooting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopShooting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartShooting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartShooting(); \
		P_NATIVE_END; \
	}


#define DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADES203_ProjectPlayerController(); \
	friend struct Z_Construct_UClass_ADES203_ProjectPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADES203_ProjectPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DES203_Project"), NO_API) \
	DECLARE_SERIALIZER(ADES203_ProjectPlayerController)


#define DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADES203_ProjectPlayerController(); \
	friend struct Z_Construct_UClass_ADES203_ProjectPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADES203_ProjectPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DES203_Project"), NO_API) \
	DECLARE_SERIALIZER(ADES203_ProjectPlayerController)


#define DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADES203_ProjectPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADES203_ProjectPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADES203_ProjectPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADES203_ProjectPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADES203_ProjectPlayerController(ADES203_ProjectPlayerController&&); \
	NO_API ADES203_ProjectPlayerController(const ADES203_ProjectPlayerController&); \
public:


#define DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADES203_ProjectPlayerController(ADES203_ProjectPlayerController&&); \
	NO_API ADES203_ProjectPlayerController(const ADES203_ProjectPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADES203_ProjectPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADES203_ProjectPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADES203_ProjectPlayerController)


#define DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LastGamepadInputTime() { return STRUCT_OFFSET(ADES203_ProjectPlayerController, LastGamepadInputTime); } \
	FORCEINLINE static uint32 __PPO__XAxis() { return STRUCT_OFFSET(ADES203_ProjectPlayerController, XAxis); } \
	FORCEINLINE static uint32 __PPO__YAxis() { return STRUCT_OFFSET(ADES203_ProjectPlayerController, YAxis); }


#define DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_9_PROLOG
#define DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_SPARSE_DATA \
	DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_RPC_WRAPPERS \
	DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_INCLASS \
	DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_SPARSE_DATA \
	DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DES203_PROJECT_API UClass* StaticClass<class ADES203_ProjectPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DES203_Project_Source_DES203_Project_DES203_ProjectPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
