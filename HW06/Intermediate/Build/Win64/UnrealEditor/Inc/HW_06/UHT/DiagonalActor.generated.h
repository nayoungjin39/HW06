// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DiagonalActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW_06_DiagonalActor_generated_h
#error "DiagonalActor.generated.h already included, missing '#pragma once' in DiagonalActor.h"
#endif
#define HW_06_DiagonalActor_generated_h

#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMovementSpeed); \
	DECLARE_FUNCTION(execResetActorPosition);


#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_12_CALLBACK_WRAPPERS
#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADiagonalActor(); \
	friend struct Z_Construct_UClass_ADiagonalActor_Statics; \
public: \
	DECLARE_CLASS(ADiagonalActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW_06"), NO_API) \
	DECLARE_SERIALIZER(ADiagonalActor)


#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADiagonalActor(ADiagonalActor&&); \
	ADiagonalActor(const ADiagonalActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADiagonalActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADiagonalActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADiagonalActor) \
	NO_API virtual ~ADiagonalActor();


#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_9_PROLOG
#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_12_CALLBACK_WRAPPERS \
	FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW_06_API UClass* StaticClass<class ADiagonalActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
