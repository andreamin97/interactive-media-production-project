// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DES203_Project/DES203_ProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDES203_ProjectGameMode() {}
// Cross Module References
	DES203_PROJECT_API UClass* Z_Construct_UClass_ADES203_ProjectGameMode_NoRegister();
	DES203_PROJECT_API UClass* Z_Construct_UClass_ADES203_ProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DES203_Project();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ADES203_ProjectGameMode::StaticRegisterNativesADES203_ProjectGameMode()
	{
		UClass* Class = ADES203_ProjectGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeHUDState", &ADES203_ProjectGameMode::execChangeHUDState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState_Statics
	{
		struct DES203_ProjectGameMode_eventChangeHUDState_Parms
		{
			uint8 NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DES203_ProjectGameMode_eventChangeHUDState_Parms, NewState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI FUnctions" },
		{ "ModuleRelativePath", "DES203_ProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADES203_ProjectGameMode, nullptr, "ChangeHUDState", nullptr, nullptr, sizeof(DES203_ProjectGameMode_eventChangeHUDState_Parms), Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADES203_ProjectGameMode_NoRegister()
	{
		return ADES203_ProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADES203_ProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShopGeneralHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShopGeneralHUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InventoryHUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IngameHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_IngameHUDClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADES203_ProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DES203_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADES203_ProjectGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADES203_ProjectGameMode_ChangeHUDState, "ChangeHUDState" }, // 2845335665
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DES203_ProjectGameMode.h" },
		{ "ModuleRelativePath", "DES203_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DES203_ProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectGameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_ShopGeneralHUDClass_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "UIWidgets" },
		{ "ModuleRelativePath", "DES203_ProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_ShopGeneralHUDClass = { "ShopGeneralHUDClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectGameMode, ShopGeneralHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_ShopGeneralHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_ShopGeneralHUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_InventoryHUDClass_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "UIWidgets" },
		{ "ModuleRelativePath", "DES203_ProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_InventoryHUDClass = { "InventoryHUDClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectGameMode, InventoryHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_InventoryHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_InventoryHUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_IngameHUDClass_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "UIWidgets" },
		{ "Comment", "/* The hud to be shown ingame*/" },
		{ "ModuleRelativePath", "DES203_ProjectGameMode.h" },
		{ "ToolTip", "The hud to be shown ingame" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_IngameHUDClass = { "IngameHUDClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADES203_ProjectGameMode, IngameHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_IngameHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_IngameHUDClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADES203_ProjectGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_ShopGeneralHUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_InventoryHUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADES203_ProjectGameMode_Statics::NewProp_IngameHUDClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADES203_ProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADES203_ProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADES203_ProjectGameMode_Statics::ClassParams = {
		&ADES203_ProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADES203_ProjectGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADES203_ProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADES203_ProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADES203_ProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADES203_ProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADES203_ProjectGameMode, 2461079136);
	template<> DES203_PROJECT_API UClass* StaticClass<ADES203_ProjectGameMode>()
	{
		return ADES203_ProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADES203_ProjectGameMode(Z_Construct_UClass_ADES203_ProjectGameMode, &ADES203_ProjectGameMode::StaticClass, TEXT("/Script/DES203_Project"), TEXT("ADES203_ProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADES203_ProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
