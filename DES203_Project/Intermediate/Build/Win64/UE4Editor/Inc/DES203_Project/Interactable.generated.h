// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DES203_PROJECT_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define DES203_PROJECT_Interactable_generated_h

#define DES203_Project_Source_DES203_Project_Interactable_h_12_SPARSE_DATA
#define DES203_Project_Source_DES203_Project_Interactable_h_12_RPC_WRAPPERS \
	virtual void Interact_Implementation(); \
 \
	DECLARE_FUNCTION(execToggleHelpText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleHelpText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact_Implementation(); \
		P_NATIVE_END; \
	}


#define DES203_Project_Source_DES203_Project_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleHelpText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleHelpText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact_Implementation(); \
		P_NATIVE_END; \
	}


#define DES203_Project_Source_DES203_Project_Interactable_h_12_EVENT_PARMS
#define DES203_Project_Source_DES203_Project_Interactable_h_12_CALLBACK_WRAPPERS
#define DES203_Project_Source_DES203_Project_Interactable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DES203_Project"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define DES203_Project_Source_DES203_Project_Interactable_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DES203_Project"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define DES203_Project_Source_DES203_Project_Interactable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public:


#define DES203_Project_Source_DES203_Project_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractable)


#define DES203_Project_Source_DES203_Project_Interactable_h_12_PRIVATE_PROPERTY_OFFSET
#define DES203_Project_Source_DES203_Project_Interactable_h_9_PROLOG \
	DES203_Project_Source_DES203_Project_Interactable_h_12_EVENT_PARMS


#define DES203_Project_Source_DES203_Project_Interactable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DES203_Project_Source_DES203_Project_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	DES203_Project_Source_DES203_Project_Interactable_h_12_SPARSE_DATA \
	DES203_Project_Source_DES203_Project_Interactable_h_12_RPC_WRAPPERS \
	DES203_Project_Source_DES203_Project_Interactable_h_12_CALLBACK_WRAPPERS \
	DES203_Project_Source_DES203_Project_Interactable_h_12_INCLASS \
	DES203_Project_Source_DES203_Project_Interactable_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DES203_Project_Source_DES203_Project_Interactable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DES203_Project_Source_DES203_Project_Interactable_h_12_PRIVATE_PROPERTY_OFFSET \
	DES203_Project_Source_DES203_Project_Interactable_h_12_SPARSE_DATA \
	DES203_Project_Source_DES203_Project_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DES203_Project_Source_DES203_Project_Interactable_h_12_CALLBACK_WRAPPERS \
	DES203_Project_Source_DES203_Project_Interactable_h_12_INCLASS_NO_PURE_DECLS \
	DES203_Project_Source_DES203_Project_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DES203_PROJECT_API UClass* StaticClass<class AInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DES203_Project_Source_DES203_Project_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
