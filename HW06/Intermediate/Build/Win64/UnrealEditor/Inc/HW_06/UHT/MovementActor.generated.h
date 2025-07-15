// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovementActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW_06_MovementActor_generated_h
#error "MovementActor.generated.h already included, missing '#pragma once' in MovementActor.h"
#endif
#define HW_06_MovementActor_generated_h

#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMovementSpeed); \
	DECLARE_FUNCTION(execResetActorPosition);


#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActor_h_12_CALLBACK_WRAPPERS
#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovementActor(); \
	friend struct Z_Construct_UClass_AMovementActor_Statics; \
public: \
	DECLARE_CLASS(AMovementActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW_06"), NO_API) \
	DECLARE_SERIALIZER(AMovementActor)


#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMovementActor(AMovementActor&&); \
	AMovementActor(const AMovementActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovementActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovementActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovementActor) \
	NO_API virtual ~AMovementActor();


#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActor_h_9_PROLOG
#define FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActor_h_12_CALLBACK_WRAPPERS \
	FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW_06_API UClass* StaticClass<class AMovementActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
