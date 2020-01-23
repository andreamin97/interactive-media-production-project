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
// End Cross Module References
	void ADES203_ProjectPlayerController::StaticRegisterNativesADES203_ProjectPlayerController()
	{
		UClass* Class = ADES203_ProjectPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AimAtCursor", &ADES203_ProjectPlayerController::execAimAtCursor },
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_DES203_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADES203_ProjectPlayerController_AimAtCursor, "AimAtCursor" }, // 2606296659
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DES203_ProjectPlayerController.h" },
		{ "ModuleRelativePath", "DES203_ProjectPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADES203_ProjectPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADES203_ProjectPlayerController_Statics::ClassParams = {
		&ADES203_ProjectPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
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
	IMPLEMENT_CLASS(ADES203_ProjectPlayerController, 3984492985);
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
