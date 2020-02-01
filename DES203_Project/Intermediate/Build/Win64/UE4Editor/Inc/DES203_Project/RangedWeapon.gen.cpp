// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DES203_Project/RangedWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangedWeapon() {}
// Cross Module References
	DES203_PROJECT_API UClass* Z_Construct_UClass_ARangedWeapon_NoRegister();
	DES203_PROJECT_API UClass* Z_Construct_UClass_ARangedWeapon();
	DES203_PROJECT_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_DES203_Project();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ARangedWeapon_OnPickedUp();
	DES203_PROJECT_API UFunction* Z_Construct_UFunction_ARangedWeapon_Shoot();
// End Cross Module References
	void ARangedWeapon::StaticRegisterNativesARangedWeapon()
	{
		UClass* Class = ARangedWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPickedUp", &ARangedWeapon::execOnPickedUp },
			{ "Shoot", &ARangedWeapon::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARangedWeapon_OnPickedUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARangedWeapon_OnPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARangedWeapon_OnPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARangedWeapon, nullptr, "OnPickedUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARangedWeapon_OnPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARangedWeapon_OnPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARangedWeapon_OnPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARangedWeapon_OnPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARangedWeapon_Shoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARangedWeapon_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARangedWeapon_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARangedWeapon, nullptr, "Shoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARangedWeapon_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARangedWeapon_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARangedWeapon_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARangedWeapon_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARangedWeapon_NoRegister()
	{
		return ARangedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ARangedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attacksPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attacksPerSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_DES203_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARangedWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARangedWeapon_OnPickedUp, "OnPickedUp" }, // 38400450
		{ &Z_Construct_UFunction_ARangedWeapon_Shoot, "Shoot" }, // 3921058950
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RangedWeapon.h" },
		{ "ModuleRelativePath", "RangedWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedWeapon_Statics::NewProp_range_MetaData[] = {
		{ "Category", "Weapon Statistics" },
		{ "ModuleRelativePath", "RangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangedWeapon_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangedWeapon, range), METADATA_PARAMS(Z_Construct_UClass_ARangedWeapon_Statics::NewProp_range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangedWeapon_Statics::NewProp_range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedWeapon_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Weapon Statistics" },
		{ "ModuleRelativePath", "RangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangedWeapon_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangedWeapon, damage), METADATA_PARAMS(Z_Construct_UClass_ARangedWeapon_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangedWeapon_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedWeapon_Statics::NewProp_attacksPerSecond_MetaData[] = {
		{ "Category", "Weapon Statistics" },
		{ "ModuleRelativePath", "RangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangedWeapon_Statics::NewProp_attacksPerSecond = { "attacksPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangedWeapon, attacksPerSecond), METADATA_PARAMS(Z_Construct_UClass_ARangedWeapon_Statics::NewProp_attacksPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangedWeapon_Statics::NewProp_attacksPerSecond_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARangedWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedWeapon_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedWeapon_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangedWeapon_Statics::NewProp_attacksPerSecond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARangedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARangedWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARangedWeapon_Statics::ClassParams = {
		&ARangedWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARangedWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARangedWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARangedWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARangedWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARangedWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARangedWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARangedWeapon, 972911279);
	template<> DES203_PROJECT_API UClass* StaticClass<ARangedWeapon>()
	{
		return ARangedWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARangedWeapon(Z_Construct_UClass_ARangedWeapon, &ARangedWeapon::StaticClass, TEXT("/Script/DES203_Project"), TEXT("ARangedWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARangedWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
