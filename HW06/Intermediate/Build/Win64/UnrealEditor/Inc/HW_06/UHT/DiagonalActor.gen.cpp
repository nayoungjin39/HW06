// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_06/Public/DiagonalActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiagonalActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HW_06_API UClass* Z_Construct_UClass_ADiagonalActor();
HW_06_API UClass* Z_Construct_UClass_ADiagonalActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_06();
// End Cross Module References

// Begin Class ADiagonalActor Function GetMovementSpeed
struct Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics
{
	struct DiagonalActor_eventGetMovementSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|Components" },
		{ "ModuleRelativePath", "Public/DiagonalActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiagonalActor_eventGetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADiagonalActor, nullptr, "GetMovementSpeed", nullptr, nullptr, Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics::DiagonalActor_eventGetMovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics::DiagonalActor_eventGetMovementSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADiagonalActor::execGetMovementSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMovementSpeed();
	P_NATIVE_END;
}
// End Class ADiagonalActor Function GetMovementSpeed

// Begin Class ADiagonalActor Function OnMovementPickedUp
static const FName NAME_ADiagonalActor_OnMovementPickedUp = FName(TEXT("OnMovementPickedUp"));
void ADiagonalActor::OnMovementPickedUp()
{
	UFunction* Func = FindFunctionChecked(NAME_ADiagonalActor_OnMovementPickedUp);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ADiagonalActor_OnMovementPickedUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|Event" },
		{ "ModuleRelativePath", "Public/DiagonalActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADiagonalActor_OnMovementPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADiagonalActor, nullptr, "OnMovementPickedUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADiagonalActor_OnMovementPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADiagonalActor_OnMovementPickedUp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADiagonalActor_OnMovementPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADiagonalActor_OnMovementPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ADiagonalActor Function OnMovementPickedUp

// Begin Class ADiagonalActor Function ResetActorPosition
struct Z_Construct_UFunction_ADiagonalActor_ResetActorPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|Components" },
		{ "ModuleRelativePath", "Public/DiagonalActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADiagonalActor_ResetActorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADiagonalActor, nullptr, "ResetActorPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADiagonalActor_ResetActorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADiagonalActor_ResetActorPosition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADiagonalActor_ResetActorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADiagonalActor_ResetActorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADiagonalActor::execResetActorPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetActorPosition();
	P_NATIVE_END;
}
// End Class ADiagonalActor Function ResetActorPosition

// Begin Class ADiagonalActor
void ADiagonalActor::StaticRegisterNativesADiagonalActor()
{
	UClass* Class = ADiagonalActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMovementSpeed", &ADiagonalActor::execGetMovementSpeed },
		{ "ResetActorPosition", &ADiagonalActor::execResetActorPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADiagonalActor);
UClass* Z_Construct_UClass_ADiagonalActor_NoRegister()
{
	return ADiagonalActor::StaticClass();
}
struct Z_Construct_UClass_ADiagonalActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DiagonalActor.h" },
		{ "ModuleRelativePath", "Public/DiagonalActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Movement|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DiagonalActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Movement|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DiagonalActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement|Speed" },
		{ "ModuleRelativePath", "Public/DiagonalActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Movement|Speed" },
		{ "ModuleRelativePath", "Public/DiagonalActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADiagonalActor_GetMovementSpeed, "GetMovementSpeed" }, // 3994845079
		{ &Z_Construct_UFunction_ADiagonalActor_OnMovementPickedUp, "OnMovementPickedUp" }, // 3208270520
		{ &Z_Construct_UFunction_ADiagonalActor_ResetActorPosition, "ResetActorPosition" }, // 401636908
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADiagonalActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADiagonalActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiagonalActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADiagonalActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiagonalActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADiagonalActor_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiagonalActor, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADiagonalActor_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADiagonalActor, MoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDistance_MetaData), NewProp_MoveDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADiagonalActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiagonalActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiagonalActor_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiagonalActor_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiagonalActor_Statics::NewProp_MoveDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADiagonalActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADiagonalActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADiagonalActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADiagonalActor_Statics::ClassParams = {
	&ADiagonalActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADiagonalActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADiagonalActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiagonalActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADiagonalActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADiagonalActor()
{
	if (!Z_Registration_Info_UClass_ADiagonalActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADiagonalActor.OuterSingleton, Z_Construct_UClass_ADiagonalActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADiagonalActor.OuterSingleton;
}
template<> HW_06_API UClass* StaticClass<ADiagonalActor>()
{
	return ADiagonalActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADiagonalActor);
ADiagonalActor::~ADiagonalActor() {}
// End Class ADiagonalActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADiagonalActor, ADiagonalActor::StaticClass, TEXT("ADiagonalActor"), &Z_Registration_Info_UClass_ADiagonalActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADiagonalActor), 3191288756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_932997339(TEXT("/Script/HW_06"),
	Z_CompiledInDeferFile_FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_DiagonalActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
