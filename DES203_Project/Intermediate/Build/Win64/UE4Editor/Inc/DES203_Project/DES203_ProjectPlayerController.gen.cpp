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
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_StartShooting();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectPlayerController_StopShooting();
// End Cross Module References
	void ADES203_ProjectPlayerController::StaticRegisterNativesADES203_ProjectPlayerController()
	{
		UClass* Class = ADES203_ProjectPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AimAtCursor", &ADES203_ProjectPlayerController::execAimAtCursor },
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectPlayerController, AttackSpeed), METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::NewProp_AttackSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::PropPointers[] = {
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
	IMPLEMENT_CLASS(ADES203_ProjectPlayerController, 1449768366);
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
