// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DES203_PROJECT_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define DES203_PROJECT_Item_generated_h

#define DES203_Project_Source_DES203_Project_Item_h_15_SPARSE_DATA
#define DES203_Project_Source_DES203_Project_Item_h_15_RPC_WRAPPERS
#define DES203_Project_Source_DES203_Project_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define DES203_Project_Source_DES203_Project_Item_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DES203_Project"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define DES203_Project_Source_DES203_Project_Item_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DES203_Project"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define DES203_Project_Source_DES203_Project_Item_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define DES203_Project_Source_DES203_Project_Item_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define DES203_Project_Source_DES203_Project_Item_h_15_PRIVATE_PROPERTY_OFFSET
#define DES203_Project_Source_DES203_Project_Item_h_12_PROLOG
#define DES203_Project_Source_DES203_Project_Item_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DES203_Project_Source_DES203_Project_Item_h_15_PRIVATE_PROPERTY_OFFSET \
	DES203_Project_Source_DES203_Project_Item_h_15_SPARSE_DATA \
	DES203_Project_Source_DES203_Project_Item_h_15_RPC_WRAPPERS \
	DES203_Project_Source_DES203_Project_Item_h_15_INCLASS \
	DES203_Project_Source_DES203_Project_Item_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DES203_Project_Source_DES203_Project_Item_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DES203_Project_Source_DES203_Project_Item_h_15_PRIVATE_PROPERTY_OFFSET \
	DES203_Project_Source_DES203_Project_Item_h_15_SPARSE_DATA \
	DES203_Project_Source_DES203_Project_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DES203_Project_Source_DES203_Project_Item_h_15_INCLASS_NO_PURE_DECLS \
	DES203_Project_Source_DES203_Project_Item_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DES203_PROJECT_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DES203_Project_Source_DES203_Project_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
