// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class UTexture2D;
class APickup;
#ifdef DES203_PROJECT_DES203_ProjectCharacter_generated_h
#error "DES203_ProjectCharacter.generated.h already included, missing '#pragma once' in DES203_ProjectCharacter.h"
#endif
#define DES203_PROJECT_DES203_ProjectCharacter_generated_h

#define DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_SPARSE_DATA
#define DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ADES203_ProjectCharacter::Shoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipWeapon) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipWeapon(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseItemAtInventorySlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseItemAtInventorySlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemNameAtInventorySlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetItemNameAtInventorySlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThumbnailAtInventorySlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetThumbnailAtInventorySlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToInventory) \
	{ \
		P_GET_OBJECT(APickup,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddItemToInventory(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateGold) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateGold(Z_Param_Amount); \
		P_NATIVE_END; \
	}


#define DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ADES203_ProjectCharacter::Shoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipWeapon) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipWeapon(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseItemAtInventorySlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseItemAtInventorySlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemNameAtInventorySlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetItemNameAtInventorySlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThumbnailAtInventorySlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetThumbnailAtInventorySlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToInventory) \
	{ \
		P_GET_OBJECT(APickup,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddItemToInventory(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateGold) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateGold(Z_Param_Amount); \
		P_NATIVE_END; \
	}


#define DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADES203_ProjectCharacter(); \
	friend struct Z_Construct_UClass_ADES203_ProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ADES203_ProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DES203_Project"), NO_API) \
	DECLARE_SERIALIZER(ADES203_ProjectCharacter)


#define DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADES203_ProjectCharacter(); \
	friend struct Z_Construct_UClass_ADES203_ProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ADES203_ProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DES203_Project"), NO_API) \
	DECLARE_SERIALIZER(ADES203_ProjectCharacter)


#define DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADES203_ProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADES203_ProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADES203_ProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADES203_ProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADES203_ProjectCharacter(ADES203_ProjectCharacter&&); \
	NO_API ADES203_ProjectCharacter(const ADES203_ProjectCharacter&); \
public:


#define DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADES203_ProjectCharacter(ADES203_ProjectCharacter&&); \
	NO_API ADES203_ProjectCharacter(const ADES203_ProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADES203_ProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADES203_ProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADES203_ProjectCharacter)


#define DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ADES203_ProjectCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADES203_ProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ADES203_ProjectCharacter, CursorToWorld); } \
	FORCEINLINE static uint32 __PPO__InteractSphere() { return STRUCT_OFFSET(ADES203_ProjectCharacter, InteractSphere); } \
	FORCEINLINE static uint32 __PPO__InteractSphereSize() { return STRUCT_OFFSET(ADES203_ProjectCharacter, InteractSphereSize); } \
	FORCEINLINE static uint32 __PPO__EquippedItems() { return STRUCT_OFFSET(ADES203_ProjectCharacter, EquippedItems); }


#define DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_9_PROLOG
#define DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_SPARSE_DATA \
	DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_RPC_WRAPPERS \
	DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_INCLASS \
	DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_SPARSE_DATA \
	DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DES203_PROJECT_API UClass* StaticClass<class ADES203_ProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DES203_Project_Source_DES203_Project_DES203_ProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
