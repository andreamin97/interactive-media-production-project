// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DES203_Project/DES203_ProjectCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDES203_ProjectCharacter() {}
// Cross Module References
	DES203_PROJECT_API UClass* Z_Construct_UClass_ADES203_ProjectCharacter_NoRegister();
	DES203_PROJECT_API UClass* Z_Construct_UClass_ADES203_ProjectCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DES203_Project();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory();
	DES203_PROJECT_API UClass* Z_Construct_UClass_APickup_NoRegister();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_Interact();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_Shoot();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	DES203_PROJECT_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	DES203_PROJECT_API UClass* Z_Construct_UClass_ARangedWeapon_NoRegister();
// End Cross Module References
	void ADES203_ProjectCharacter::StaticRegisterNativesADES203_ProjectCharacter()
	{
		UClass* Class = ADES203_ProjectCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToInventory", &ADES203_ProjectCharacter::execAddItemToInventory },
			{ "BeginOverlap", &ADES203_ProjectCharacter::execBeginOverlap },
			{ "EndOverlap", &ADES203_ProjectCharacter::execEndOverlap },
			{ "EquipWeapon", &ADES203_ProjectCharacter::execEquipWeapon },
			{ "GetItemNameAtInventorySlot", &ADES203_ProjectCharacter::execGetItemNameAtInventorySlot },
			{ "GetThumbnailAtInventorySlot", &ADES203_ProjectCharacter::execGetThumbnailAtInventorySlot },
			{ "Interact", &ADES203_ProjectCharacter::execInteract },
			{ "Shoot", &ADES203_ProjectCharacter::execShoot },
			{ "UpdateGold", &ADES203_ProjectCharacter::execUpdateGold },
			{ "UseItemAtInventorySlot", &ADES203_ProjectCharacter::execUseItemAtInventorySlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics
	{
		struct DES203_ProjectCharacter_eventAddItemToInventory_Parms
		{
			APickup* Item;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DES203_ProjectCharacter_eventAddItemToInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DES203_ProjectCharacter_eventAddItemToInventory_Parms), &Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventAddItemToInventory_Parms, Item), Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Functions" },
		{ "Comment", "/* Adds an item to the inventory*/" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
		{ "ToolTip", "Adds an item to the inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectCharacter, nullptr, "AddItemToInventory", nullptr, nullptr, sizeof(DES203_ProjectCharacter_eventAddItemToInventory_Parms), Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics
	{
		struct DES203_ProjectCharacter_eventBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((DES203_ProjectCharacter_eventBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DES203_ProjectCharacter_eventBeginOverlap_Parms), &Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectCharacter, nullptr, "BeginOverlap", nullptr, nullptr, sizeof(DES203_ProjectCharacter_eventBeginOverlap_Parms), Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics
	{
		struct DES203_ProjectCharacter_eventEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectCharacter, nullptr, "EndOverlap", nullptr, nullptr, sizeof(DES203_ProjectCharacter_eventEndOverlap_Parms), Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics
	{
		struct DES203_ProjectCharacter_eventEquipWeapon_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DES203_ProjectCharacter_eventEquipWeapon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DES203_ProjectCharacter_eventEquipWeapon_Parms), &Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectCharacter, nullptr, "EquipWeapon", nullptr, nullptr, sizeof(DES203_ProjectCharacter_eventEquipWeapon_Parms), Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics
	{
		struct DES203_ProjectCharacter_eventGetItemNameAtInventorySlot_Parms
		{
			int32 Slot;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventGetItemNameAtInventorySlot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventGetItemNameAtInventorySlot_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Functions" },
		{ "Comment", "/* gets the item name for a given inventory slot*/" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
		{ "ToolTip", "gets the item name for a given inventory slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectCharacter, nullptr, "GetItemNameAtInventorySlot", nullptr, nullptr, sizeof(DES203_ProjectCharacter_eventGetItemNameAtInventorySlot_Parms), Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics
	{
		struct DES203_ProjectCharacter_eventGetThumbnailAtInventorySlot_Parms
		{
			int32 Slot;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventGetThumbnailAtInventorySlot_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventGetThumbnailAtInventorySlot_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Functions" },
		{ "Comment", "/* gets thumbnail for any given item slot*/" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
		{ "ToolTip", "gets thumbnail for any given item slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectCharacter, nullptr, "GetThumbnailAtInventorySlot", nullptr, nullptr, sizeof(DES203_ProjectCharacter_eventGetThumbnailAtInventorySlot_Parms), Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectCharacter_Interact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_Interact_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* interact with the current interactable if there is one*/" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
		{ "ToolTip", "interact with the current interactable if there is one" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectCharacter_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectCharacter, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectCharacter_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectCharacter_Shoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectCharacter_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectCharacter, nullptr, "Shoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectCharacter_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold_Statics
	{
		struct DES203_ProjectCharacter_eventUpdateGold_Parms
		{
			int32 Amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventUpdateGold_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Functions" },
		{ "Comment", "/*Updates the coins\n\x09@params Amount, anount to update the coins by, can be positive or negatve\n\x09*/" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
		{ "ToolTip", "Updates the coins\n       @params Amount, anount to update the coins by, can be positive or negatve" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectCharacter, nullptr, "UpdateGold", nullptr, nullptr, sizeof(DES203_ProjectCharacter_eventUpdateGold_Parms), Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot_Statics
	{
		struct DES203_ProjectCharacter_eventUseItemAtInventorySlot_Parms
		{
			int32 Slot;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectCharacter_eventUseItemAtInventorySlot_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Functions" },
		{ "Comment", "/*Uses item at a given inventory slot*/" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
		{ "ToolTip", "Uses item at a given inventory slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectCharacter, nullptr, "UseItemAtInventorySlot", nullptr, nullptr, sizeof(DES203_ProjectCharacter_eventUseItemAtInventorySlot_Parms), Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADES203_ProjectCharacter_NoRegister()
	{
		return ADES203_ProjectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADES203_ProjectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractSphereSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractSphereSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorToWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorToWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Gold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADES203_ProjectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DES203_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADES203_ProjectCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADES203_ProjectCharacter_AddItemToInventory, "AddItemToInventory" }, // 4000309836
		{ &Z_Construct_UFunction_ADES203_ProjectCharacter_BeginOverlap, "BeginOverlap" }, // 2772916651
		{ &Z_Construct_UFunction_ADES203_ProjectCharacter_EndOverlap, "EndOverlap" }, // 2161885287
		{ &Z_Construct_UFunction_ADES203_ProjectCharacter_EquipWeapon, "EquipWeapon" }, // 2037407399
		{ &Z_Construct_UFunction_ADES203_ProjectCharacter_GetItemNameAtInventorySlot, "GetItemNameAtInventorySlot" }, // 3497638925
		{ &Z_Construct_UFunction_ADES203_ProjectCharacter_GetThumbnailAtInventorySlot, "GetThumbnailAtInventorySlot" }, // 3112604109
		{ &Z_Construct_UFunction_ADES203_ProjectCharacter_Interact, "Interact" }, // 3502320164
		{ &Z_Construct_UFunction_ADES203_ProjectCharacter_Shoot, "Shoot" }, // 4200735279
		{ &Z_Construct_UFunction_ADES203_ProjectCharacter_UpdateGold, "UpdateGold" }, // 2627536382
		{ &Z_Construct_UFunction_ADES203_ProjectCharacter_UseItemAtInventorySlot, "UseItemAtInventorySlot" }, // 3757244509
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DES203_ProjectCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "DES203_ProjectCharacter" },
		{ "Comment", "/*the ??ayers inventory, reprsented as a TArray of pickup objects*/" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
		{ "ToolTip", "the ??ayers inventory, reprsented as a TArray of pickup objects" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectCharacter, Inventory), METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_InteractSphereSize_MetaData[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_InteractSphereSize = { "InteractSphereSize", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectCharacter, InteractSphereSize), METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_InteractSphereSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_InteractSphereSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_InteractSphere_MetaData[] = {
		{ "Category", "Interact" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_InteractSphere = { "InteractSphere", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectCharacter, InteractSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_InteractSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_InteractSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CursorToWorld_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** A decal that projects to the cursor location. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
		{ "ToolTip", "A decal that projects to the cursor location." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CursorToWorld = { "CursorToWorld", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectCharacter, CursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CursorToWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CursorToWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CurrentInteractable_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectCharacter, CurrentInteractable), Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CurrentInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CurrentInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_Gold_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/*The Amout of gold the player has*/" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
		{ "ToolTip", "The Amout of gold the player has" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectCharacter, Gold), METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_Gold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_Gold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_HelpText_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_HelpText = { "HelpText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectCharacter, HelpText), METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_HelpText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_HelpText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_MainWeapon_MetaData[] = {
		{ "Category", "Equip" },
		{ "ModuleRelativePath", "DES203_ProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_MainWeapon = { "MainWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectCharacter, MainWeapon), Z_Construct_UClass_ARangedWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_MainWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_MainWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADES203_ProjectCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_InteractSphereSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_InteractSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CursorToWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_CurrentInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_Gold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_HelpText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectCharacter_Statics::NewProp_MainWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADES203_ProjectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADES203_ProjectCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADES203_ProjectCharacter_Statics::ClassParams = {
		&ADES203_ProjectCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADES203_ProjectCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADES203_ProjectCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADES203_ProjectCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADES203_ProjectCharacter, 3375916044);
	template<> DES203_PROJECT_API UClass* StaticClass<ADES203_ProjectCharacter>()
	{
		return ADES203_ProjectCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADES203_ProjectCharacter(Z_Construct_UClass_ADES203_ProjectCharacter, &ADES203_ProjectCharacter::StaticClass, TEXT("/Script/DES203_Project"), TEXT("ADES203_ProjectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADES203_ProjectCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
