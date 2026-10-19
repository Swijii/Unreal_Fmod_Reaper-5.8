// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatDamageable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatDamageable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MyProject(ETypeConstructPhase);
MYPROJECT_API UClass* Z_Construct_UClass_UCombatDamageable(ETypeConstructPhase);
MYPROJECT_API UClass* Z_Construct_UClass_ICombatDamageable(ETypeConstructPhase);
MYPROJECT_API UClass* Z_Construct_UClass_UCombatDamageable(ETypeConstructPhase);
MYPROJECT_API UClass* Z_Construct_UClass_ICombatDamageable(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Interface UCombatDamageable Function ApplyDamage *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCombatDamageable_ApplyDamage_Statics
struct UHT_STATICS
{
	struct CombatDamageable_eventApplyDamage_Parms
	{
		float Damage;
		AActor* DamageCauser;
		FVector DamageLocation;
		FVector DamageImpulse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Damageable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles damage and knockback events */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatDamageable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles damage and knockback events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageImpulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyDamage constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageImpulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyDamage constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyDamage Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventApplyDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventApplyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DamageLocation = { "DamageLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventApplyDamage_Parms, DamageLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageLocation_MetaData), NewProp_DamageLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DamageImpulse = { "DamageImpulse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventApplyDamage_Parms, DamageImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageImpulse_MetaData), NewProp_DamageImpulse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DamageImpulse,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ApplyDamage Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCombatDamageable, nullptr, "ApplyDamage", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CombatDamageable_eventApplyDamage_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CombatDamageable_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageable_ApplyDamage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ICombatDamageable::execApplyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DamageLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DamageImpulse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamage(Z_Param_Damage,Z_Param_DamageCauser,Z_Param_Out_DamageLocation,Z_Param_Out_DamageImpulse);
	P_NATIVE_END;
}
// ********** End Interface UCombatDamageable Function ApplyDamage *********************************

// ********** Begin Interface UCombatDamageable Function ApplyHealing ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCombatDamageable_ApplyHealing_Statics
struct UHT_STATICS
{
	struct CombatDamageable_eventApplyHealing_Parms
	{
		float Healing;
		AActor* Healer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Damageable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles healing events */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatDamageable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles healing events" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyHealing constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Healing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Healer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyHealing constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyHealing Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Healing = { "Healing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventApplyHealing_Parms, Healing), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Healer = { "Healer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CombatDamageable_eventApplyHealing_Parms, Healer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Healing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Healer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ApplyHealing Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCombatDamageable, nullptr, "ApplyHealing", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CombatDamageable_eventApplyHealing_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CombatDamageable_eventApplyHealing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatDamageable_ApplyHealing(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ICombatDamageable::execApplyHealing)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Healing);
	P_GET_OBJECT(AActor,Z_Param_Healer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyHealing(Z_Param_Healing,Z_Param_Healer);
	P_NATIVE_END;
}
// ********** End Interface UCombatDamageable Function ApplyHealing ********************************

// ********** Begin Interface UCombatDamageable Function HandleDeath *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCombatDamageable_HandleDeath_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Damageable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles death events */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatDamageable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles death events" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HandleDeath constinit property declarations ***************************
// ********** End Function HandleDeath constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCombatDamageable, nullptr, "HandleDeath", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UCombatDamageable_HandleDeath(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ICombatDamageable::execHandleDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDeath();
	P_NATIVE_END;
}
// ********** End Interface UCombatDamageable Function HandleDeath *********************************

// ********** Begin Interface UCombatDamageable ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCombatDamageable_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatDamageable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UCombatDamageable constinit property declarations ********************
// ********** End Interface UCombatDamageable constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyDamage"), .Pointer = &ICombatDamageable::execApplyDamage },
		{ .NameUTF8 = UTF8TEXT("ApplyHealing"), .Pointer = &ICombatDamageable::execApplyHealing },
		{ .NameUTF8 = UTF8TEXT("HandleDeath"), .Pointer = &ICombatDamageable::execHandleDeath },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatDamageable_ApplyDamage, "ApplyDamage" }, // 1661349b7dfe2a45c1dd86439a72bb9762310a4f
		{ &Z_Construct_UFunction_UCombatDamageable_ApplyHealing, "ApplyHealing" }, // b86ba4d26d081426748d0e3d974c12a0ec8a270b
		{ &Z_Construct_UFunction_UCombatDamageable_HandleDeath, "HandleDeath" }, // 137f91994054e853f2e390e3a943ee899ca55374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatDamageable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInterface,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCombatDamageable,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UCombatDamageable_StaticRegisterNativesUCombatDamageable()
{
	UClass* Class = UCombatDamageable::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatDamageable;
UClass* Z_Construct_UClass_UCombatDamageable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCombatDamageable;
		if (!Z_Registration_Info_UClass_UCombatDamageable.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CombatDamageable"),
				Z_Registration_Info_UClass_UCombatDamageable.InnerSingleton,
				UCombatDamageable_StaticRegisterNativesUCombatDamageable,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UCombatDamageable.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCombatDamageable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatDamageable.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatDamageable.OuterSingleton;
}
#undef UHT_STATICS
UCombatDamageable::UCombatDamageable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCombatDamageable);
// ********** End Interface UCombatDamageable ******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatDamageable_h__Script_MyProject_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatDamageable, TEXT("UCombatDamageable"), &Z_Registration_Info_UClass_UCombatDamageable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatDamageable), 4286406657U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatDamageable_h__Script_MyProject_79afbf443edc7cf24a9ac85cc8e0bea66cdd9aea{
	TEXT("/Script/MyProject"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
