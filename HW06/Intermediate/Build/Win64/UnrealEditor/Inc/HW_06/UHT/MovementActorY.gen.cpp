// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_06/Public/MovementActorY.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementActorY() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HW_06_API UClass* Z_Construct_UClass_AMovementActorY();
HW_06_API UClass* Z_Construct_UClass_AMovementActorY_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_06();
// End Cross Module References

// Begin Class AMovementActorY Function GetMovementSpeed
struct Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics
{
	struct MovementActorY_eventGetMovementSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|Components" },
		{ "ModuleRelativePath", "Public/MovementActorY.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementActorY_eventGetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementActorY, nullptr, "GetMovementSpeed", nullptr, nullptr, Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics::MovementActorY_eventGetMovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics::MovementActorY_eventGetMovementSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovementActorY_GetMovementSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementActorY_GetMovementSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovementActorY::execGetMovementSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMovementSpeed();
	P_NATIVE_END;
}
// End Class AMovementActorY Function GetMovementSpeed

// Begin Class AMovementActorY Function OnMovementPickedUp
static const FName NAME_AMovementActorY_OnMovementPickedUp = FName(TEXT("OnMovementPickedUp"));
void AMovementActorY::OnMovementPickedUp()
{
	UFunction* Func = FindFunctionChecked(NAME_AMovementActorY_OnMovementPickedUp);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMovementActorY_OnMovementPickedUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|Event" },
		{ "ModuleRelativePath", "Public/MovementActorY.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementActorY_OnMovementPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementActorY, nullptr, "OnMovementPickedUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementActorY_OnMovementPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementActorY_OnMovementPickedUp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovementActorY_OnMovementPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementActorY_OnMovementPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMovementActorY Function OnMovementPickedUp

// Begin Class AMovementActorY Function ResetActorPosition
struct Z_Construct_UFunction_AMovementActorY_ResetActorPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|Components" },
		{ "ModuleRelativePath", "Public/MovementActorY.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovementActorY_ResetActorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovementActorY, nullptr, "ResetActorPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovementActorY_ResetActorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovementActorY_ResetActorPosition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovementActorY_ResetActorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovementActorY_ResetActorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovementActorY::execResetActorPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetActorPosition();
	P_NATIVE_END;
}
// End Class AMovementActorY Function ResetActorPosition

// Begin Class AMovementActorY
void AMovementActorY::StaticRegisterNativesAMovementActorY()
{
	UClass* Class = AMovementActorY::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMovementSpeed", &AMovementActorY::execGetMovementSpeed },
		{ "ResetActorPosition", &AMovementActorY::execResetActorPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovementActorY);
UClass* Z_Construct_UClass_AMovementActorY_NoRegister()
{
	return AMovementActorY::StaticClass();
}
struct Z_Construct_UClass_AMovementActorY_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovementActorY.h" },
		{ "ModuleRelativePath", "Public/MovementActorY.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Movement|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovementActorY.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Movement|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovementActorY.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement|Speed" },
		{ "ModuleRelativePath", "Public/MovementActorY.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Movement|Speed" },
		{ "ModuleRelativePath", "Public/MovementActorY.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovementActorY_GetMovementSpeed, "GetMovementSpeed" }, // 3413612662
		{ &Z_Construct_UFunction_AMovementActorY_OnMovementPickedUp, "OnMovementPickedUp" }, // 3762533923
		{ &Z_Construct_UFunction_AMovementActorY_ResetActorPosition, "ResetActorPosition" }, // 2688727344
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovementActorY>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementActorY_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementActorY, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovementActorY_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementActorY, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementActorY_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementActorY, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovementActorY_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovementActorY, MoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDistance_MetaData), NewProp_MoveDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovementActorY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementActorY_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementActorY_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementActorY_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovementActorY_Statics::NewProp_MoveDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementActorY_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovementActorY_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementActorY_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovementActorY_Statics::ClassParams = {
	&AMovementActorY::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMovementActorY_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovementActorY_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovementActorY_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovementActorY_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovementActorY()
{
	if (!Z_Registration_Info_UClass_AMovementActorY.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovementActorY.OuterSingleton, Z_Construct_UClass_AMovementActorY_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovementActorY.OuterSingleton;
}
template<> HW_06_API UClass* StaticClass<AMovementActorY>()
{
	return AMovementActorY::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovementActorY);
AMovementActorY::~AMovementActorY() {}
// End Class AMovementActorY

// Begin Registration
struct Z_CompiledInDeferFile_FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovementActorY, AMovementActorY::StaticClass, TEXT("AMovementActorY"), &Z_Registration_Info_UClass_AMovementActorY, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovementActorY), 2504681794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_2541145221(TEXT("/Script/HW_06"),
	Z_CompiledInDeferFile_FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_hello_world_git_git_HW06_HW06_Source_HW_06_Public_MovementActorY_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
