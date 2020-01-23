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
// End Cross Module References
	void ARangedWeapon::StaticRegisterNativesARangedWeapon()
	{
	}
	UClass* Z_Construct_UClass_ARangedWeapon_NoRegister()
	{
		return ARangedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ARangedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_DES203_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RangedWeapon.h" },
		{ "ModuleRelativePath", "RangedWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARangedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARangedWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARangedWeapon_Statics::ClassParams = {
		&ARangedWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ARangedWeapon, 2784770317);
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
