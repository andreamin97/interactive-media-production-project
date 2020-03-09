// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DES203_Project/DES203_ProjectPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDES203_ProjectPlayerController() {}
// Cross Module References
	DES203_PROJECT_API UClass* Z_Construct_UClass_ADES203_ProjectPlayerController_NoRegister();
	DES203_PROJECT_API UClass* Z_Construct_UClass_ADES203_ProjectPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_DES203_Project();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_AimAtCursor();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterNextWeapon();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotOne();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotThree();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotTwo();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_StartShooting();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_StopShooting();
// End Cross Module References
	void ADES203_ProjectPlayerController::StaticRegisterNativesADES203_ProjectPlayerController()
	{
		UClass* Class = ADES203_ProjectPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AimAtCursor", &ADES203_ProjectPlayerController::execAimAtCursor },
			{ "CharacterNextWeapon", &ADES203_ProjectPlayerController::execCharacterNextWeapon },
			{ "CharacterUseItemAtSlotOne", &ADES203_ProjectPlayerController::execCharacterUseItemAtSlotOne },
			{ "CharacterUseItemAtSlotThree", &ADES203_ProjectPlayerController::execCharacterUseItemAtSlotThree },
			{ "CharacterUseItemAtSlotTwo", &ADES203_ProjectPlayerController::execCharacterUseItemAtSlotTwo },
			{ "SetTurnX", &ADES203_ProjectPlayerController::execSetTurnX },
			{ "SetTurnY", &ADES203_ProjectPlayerController::execSetTurnY },
			{ "StartShooting", &ADES203_ProjectPlayerController::execStartShooting },
			{ "StopShooting", &ADES203_ProjectPlayerController::execStopShooting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADES203_ProjectPlayerController_AimAtCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectPlayerController_AimAtCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectPlayerController_AimAtCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectPlayerController, nullptr, "AimAtCursor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectPlayerController_AimAtCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectPlayerController_AimAtCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_AimAtCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectPlayerController_AimAtCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterNextWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterNextWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterNextWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectPlayerController, nullptr, "CharacterNextWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterNextWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterNextWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterNextWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterNextWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotOne_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotOne_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* call the character's UseItemAtInventorySlot() Function\n\x09   For now only calls it on the first slot\n\x09*/" },
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
		{ "ToolTip", "call the character's UseItemAtInventorySlot() Function\n         For now only calls it on the first slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotOne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectPlayerController, nullptr, "CharacterUseItemAtSlotOne", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotOne_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotOne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotOne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotOne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotThree_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotThree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotThree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectPlayerController, nullptr, "CharacterUseItemAtSlotThree", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotThree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotThree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotThree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotThree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotTwo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotTwo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotTwo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectPlayerController, nullptr, "CharacterUseItemAtSlotTwo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotTwo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotTwo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotTwo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotTwo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX_Statics
	{
		struct DES203_ProjectPlayerController_eventSetTurnX_Parms
		{
			float Axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectPlayerController_eventSetTurnX_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectPlayerController, nullptr, "SetTurnX", nullptr, nullptr, sizeof(DES203_ProjectPlayerController_eventSetTurnX_Parms), Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY_Statics
	{
		struct DES203_ProjectPlayerController_eventSetTurnY_Parms
		{
			float Axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectPlayerController_eventSetTurnY_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectPlayerController, nullptr, "SetTurnY", nullptr, nullptr, sizeof(DES203_ProjectPlayerController_eventSetTurnY_Parms), Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectPlayerController_StartShooting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectPlayerController_StartShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectPlayerController_StartShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectPlayerController, nullptr, "StartShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectPlayerController_StartShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectPlayerController_StartShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_StartShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectPlayerController_StartShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADES203_ProjectPlayerController_StopShooting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectPlayerController_StopShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectPlayerController_StopShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectPlayerController, nullptr, "StopShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectPlayerController_StopShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectPlayerController_StopShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_StopShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectPlayerController_StopShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADES203_ProjectPlayerController_NoRegister()
	{
		return ADES203_ProjectPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ADES203_ProjectPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastGamepadInputTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastGamepadInputTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GamepadTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetGamepadDetectionAfterNoInput_MetaData[];
#endif
		static void NewProp_bResetGamepadDetectionAfterNoInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetGamepadDetectionAfterNoInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingGamepad_MetaData[];
#endif
		static void NewProp_bIsUsingGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingGamepad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_DES203_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADES203_ProjectPlayerController_AimAtCursor, "AimAtCursor" }, // 2606296659
		{ &Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterNextWeapon, "CharacterNextWeapon" }, // 277005910
		{ &Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotOne, "CharacterUseItemAtSlotOne" }, // 4125595892
		{ &Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotThree, "CharacterUseItemAtSlotThree" }, // 3757310819
		{ &Z_Construct_UFunction_ADES203_ProjectPlayerController_CharacterUseItemAtSlotTwo, "CharacterUseItemAtSlotTwo" }, // 1402687867
		{ &Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnX, "SetTurnX" }, // 3240422032
		{ &Z_Construct_UFunction_ADES203_ProjectPlayerController_SetTurnY, "SetTurnY" }, // 2544749774
		{ &Z_Construct_UFunction_ADES203_ProjectPlayerController_StartShooting, "StartShooting" }, // 2909842775
		{ &Z_Construct_UFunction_ADES203_ProjectPlayerController_StopShooting, "StopShooting" }, // 1347981676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DES203_ProjectPlayerController.h" },
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_YAxis_MetaData[] = {
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectPlayerController, YAxis), METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_YAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_YAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_XAxis_MetaData[] = {
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectPlayerController, XAxis), METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_XAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_XAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_LastGamepadInputTime_MetaData[] = {
		{ "Category", "DES203_ProjectPlayerController" },
		{ "Comment", "// Used to keep track of when we last saw gamepad input\n" },
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
		{ "ToolTip", "Used to keep track of when we last saw gamepad input" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_LastGamepadInputTime = { "LastGamepadInputTime", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectPlayerController, LastGamepadInputTime), METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_LastGamepadInputTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_LastGamepadInputTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_GamepadTimeout_MetaData[] = {
		{ "Category", "DES203_ProjectPlayerController" },
		{ "Comment", "/** How long we can go without receiving a gamepad input before we assume they've stopped using the gamepad */" },
		{ "EditCondition", "bResetGamepadDetectionAfterNoInput" },
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
		{ "ToolTip", "How long we can go without receiving a gamepad input before we assume they've stopped using the gamepad" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_GamepadTimeout = { "GamepadTimeout", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectPlayerController, GamepadTimeout), METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_GamepadTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_GamepadTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bResetGamepadDetectionAfterNoInput_MetaData[] = {
		{ "Category", "DES203_ProjectPlayerController" },
		{ "Comment", "/** Specifies whether we set `bIsUsingGamepad` to `false` if we receive no input for a period of time. If set to 'true', GamepadTimeout will control how long\n\x09\x09we need to go without receiving input before we set `bIsUsingGamepad` to `false`. */" },
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
		{ "ToolTip", "Specifies whether we set `bIsUsingGamepad` to `false` if we receive no input for a period of time. If set to 'true', GamepadTimeout will control how long\n              we need to go without receiving input before we set `bIsUsingGamepad` to `false`." },
	};
#endif
	void Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bResetGamepadDetectionAfterNoInput_SetBit(void* Obj)
	{
		((ADES203_ProjectPlayerController*)Obj)->bResetGamepadDetectionAfterNoInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bResetGamepadDetectionAfterNoInput = { "bResetGamepadDetectionAfterNoInput", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADES203_ProjectPlayerController), &Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bResetGamepadDetectionAfterNoInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bResetGamepadDetectionAfterNoInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bResetGamepadDetectionAfterNoInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bIsUsingGamepad_MetaData[] = {
		{ "Category", "DES203_ProjectPlayerController" },
		{ "Comment", "/** Can be called to check and see if the player is currently using a gamepad */" },
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
		{ "ToolTip", "Can be called to check and see if the player is currently using a gamepad" },
	};
#endif
	void Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bIsUsingGamepad_SetBit(void* Obj)
	{
		((ADES203_ProjectPlayerController*)Obj)->bIsUsingGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bIsUsingGamepad = { "bIsUsingGamepad", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADES203_ProjectPlayerController), &Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bIsUsingGamepad_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bIsUsingGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bIsUsingGamepad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectPlayerController, AttackSpeed), METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_AttackSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_YAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_XAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_LastGamepadInputTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_GamepadTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bResetGamepadDetectionAfterNoInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_bIsUsingGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_AttackSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADES203_ProjectPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::ClassParams = {
		&ADES203_ProjectPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADES203_ProjectPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADES203_ProjectPlayerController, 3925213417);
	template<> DES203_PROJECT_API UClass* StaticClass<ADES203_ProjectPlayerController>()
	{
		return ADES203_ProjectPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADES203_ProjectPlayerController(Z_Construct_UClass_ADES203_ProjectPlayerController, &ADES203_ProjectPlayerController::StaticClass, TEXT("/Script/DES203_Project"), TEXT("ADES203_ProjectPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADES203_ProjectPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
