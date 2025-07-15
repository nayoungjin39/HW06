// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovementActorY.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW_06_MovementActorY_generated_h
#error "MovementActorY.generated.h already included, missing '#pragma once' in MovementActorY.h"
#endif
#define HW_06_MovementActorY_generated_h

#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMovementSpeed); \
	DECLARE_FUNCTION(execResetActorPosition);


#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_12_CALLBACK_WRAPPERS
#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovementActorY(); \
	friend struct Z_Construct_UClass_AMovementActorY_Statics; \
public: \
	DECLARE_CLASS(AMovementActorY, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW_06"), NO_API) \
	DECLARE_SERIALIZER(AMovementActorY)


#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMovementActorY(AMovementActorY&&); \
	AMovementActorY(const AMovementActorY&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovementActorY); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovementActorY); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovementActorY) \
	NO_API virtual ~AMovementActorY();


#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_9_PROLOG
#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_12_CALLBACK_WRAPPERS \
	FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_12_INCLASS_NO_PURE_DECLS \
	FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW_06_API UClass* StaticClass<class AMovementActorY>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
