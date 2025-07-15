// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_06/Public/RotationActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotationActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HW_06_API UClass* Z_Construct_UClass_ARotationActor();
HW_06_API UClass* Z_Construct_UClass_ARotationActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_06();
// End Cross Module References

// Begin Class ARotationActor Function GetRotationSpeed
struct Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics
{
	struct RotationActor_eventGetRotationSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rotation|Components" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RotationActor_eventGetRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARotationActor, nullptr, "GetRotationSpeed", nullptr, nullptr, Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics::RotationActor_eventGetRotationSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics::RotationActor_eventGetRotationSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARotationActor_GetRotationSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARotationActor_GetRotationSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARotationActor::execGetRotationSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRotationSpeed();
	P_NATIVE_END;
}
// End Class ARotationActor Function GetRotationSpeed

// Begin Class ARotationActor Function OnRotationPickedUp
static const FName NAME_ARotationActor_OnRotationPickedUp = FName(TEXT("OnRotationPickedUp"));
void ARotationActor::OnRotationPickedUp()
{
	UFunction* Func = FindFunctionChecked(NAME_ARotationActor_OnRotationPickedUp);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ARotationActor_OnRotationPickedUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rotation|Event" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARotationActor_OnRotationPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARotationActor, nullptr, "OnRotationPickedUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARotationActor_OnRotationPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARotationActor_OnRotationPickedUp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARotationActor_OnRotationPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARotationActor_OnRotationPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ARotationActor Function OnRotationPickedUp

// Begin Class ARotationActor Function ResetActorPosition
struct Z_Construct_UFunction_ARotationActor_ResetActorPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rotation|Components" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARotationActor_ResetActorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARotationActor, nullptr, "ResetActorPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARotationActor_ResetActorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARotationActor_ResetActorPosition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARotationActor_ResetActorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARotationActor_ResetActorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARotationActor::execResetActorPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetActorPosition();
	P_NATIVE_END;
}
// End Class ARotationActor Function ResetActorPosition

// Begin Class ARotationActor
void ARotationActor::StaticRegisterNativesARotationActor()
{
	UClass* Class = ARotationActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRotationSpeed", &ARotationActor::execGetRotationSpeed },
		{ "ResetActorPosition", &ARotationActor::execResetActorPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotationActor);
UClass* Z_Construct_UClass_ARotationActor_NoRegister()
{
	return ARotationActor::StaticClass();
}
struct Z_Construct_UClass_ARotationActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotationActor.h" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Rotation|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Rotation|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Rotation|Speed" },
		{ "ModuleRelativePath", "Public/RotationActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARotationActor_GetRotationSpeed, "GetRotationSpeed" }, // 4163872808
		{ &Z_Construct_UFunction_ARotationActor_OnRotationPickedUp, "OnRotationPickedUp" }, // 4294061190
		{ &Z_Construct_UFunction_ARotationActor_ResetActorPosition, "ResetActorPosition" }, // 1904092893
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotationActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotationActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotationActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotationActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotationActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotationActor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotationActor, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotationActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotationActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotationActor_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotationActor_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotationActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotationActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotationActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotationActor_Statics::ClassParams = {
	&ARotationActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARotationActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotationActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotationActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotationActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotationActor()
{
	if (!Z_Registration_Info_UClass_ARotationActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotationActor.OuterSingleton, Z_Construct_UClass_ARotationActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotationActor.OuterSingleton;
}
template<> HW_06_API UClass* StaticClass<ARotationActor>()
{
	return ARotationActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotationActor);
ARotationActor::~ARotationActor() {}
// End Class ARotationActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_RotationActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotationActor, ARotationActor::StaticClass, TEXT("ARotationActor"), &Z_Registration_Info_UClass_ARotationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotationActor), 3739696544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_RotationActor_h_2463643664(TEXT("/Script/HW_06"),
	Z_CompiledInDeferFile_FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_RotationActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_RotationActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
