// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DES203_Project/Shop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShop() {}
// Cross Module References
	DES203_PROJECT_API UClass* Z_Construct_UClass_AShop_NoRegister();
	DES203_PROJECT_API UClass* Z_Construct_UClass_AShop();
	DES203_PROJECT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DES203_Project();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_AShop_BeginPlay();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_AShop_Interact_Implementation();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_AShop_SellItem();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_AShop_ToggleShopHUD();
	DES203_PROJECT_API UClass* Z_Construct_UClass_APickup_NoRegister();
// End Cross Module References
	void AShop::StaticRegisterNativesAShop()
	{
		UClass* Class = AShop::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &AShop::execBeginPlay },
			{ "Interact_Implementation", &AShop::execInteract_Implementation },
			{ "SellItem", &AShop::execSellItem },
			{ "ToggleShopHUD", &AShop::execToggleShopHUD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShop_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShop_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Shop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShop_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShop, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShop_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShop_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShop_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShop_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShop_Interact_Implementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShop_Interact_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Shop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShop_Interact_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShop, nullptr, "Interact_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShop_Interact_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShop_Interact_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShop_Interact_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShop_Interact_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShop_SellItem_Statics
	{
		struct Shop_eventSellItem_Parms
		{
			int32 Slot;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AShop_SellItem_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Shop_eventSellItem_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShop_SellItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShop_SellItem_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShop_SellItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Shop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShop_SellItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShop, nullptr, "SellItem", nullptr, nullptr, sizeof(Shop_eventSellItem_Parms), Z_Construct_UFunction_AShop_SellItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShop_SellItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShop_SellItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShop_SellItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShop_SellItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShop_SellItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShop_ToggleShopHUD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShop_ToggleShopHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Shop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShop_ToggleShopHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShop, nullptr, "ToggleShopHUD", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShop_ToggleShopHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShop_ToggleShopHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShop_ToggleShopHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShop_ToggleShopHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShop_NoRegister()
	{
		return AShop::StaticClass();
	}
	struct Z_Construct_UClass_AShop_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShopInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShopInventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShopInventory_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DES203_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShop_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShop_BeginPlay, "BeginPlay" }, // 908133525
		{ &Z_Construct_UFunction_AShop_Interact_Implementation, "Interact_Implementation" }, // 3579978524
		{ &Z_Construct_UFunction_AShop_SellItem, "SellItem" }, // 1958851007
		{ &Z_Construct_UFunction_AShop_ToggleShopHUD, "ToggleShopHUD" }, // 2448194002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShop_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Shop.h" },
		{ "ModuleRelativePath", "Shop.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShop_Statics::NewProp_ShopInventory_MetaData[] = {
		{ "Category", "Shop" },
		{ "ModuleRelativePath", "Shop.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShop_Statics::NewProp_ShopInventory = { "ShopInventory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShop, ShopInventory), METADATA_PARAMS(Z_Construct_UClass_AShop_Statics::NewProp_ShopInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShop_Statics::NewProp_ShopInventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShop_Statics::NewProp_ShopInventory_Inner = { "ShopInventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShop_Statics::NewProp_ShopInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShop_Statics::NewProp_ShopInventory_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShop_Statics::ClassParams = {
		&AShop::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShop_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShop, 1871458016);
	template<> DES203_PROJECT_API UClass* StaticClass<AShop>()
	{
		return AShop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShop(Z_Construct_UClass_AShop, &AShop::StaticClass, TEXT("/Script/DES203_Project"), TEXT("AShop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
