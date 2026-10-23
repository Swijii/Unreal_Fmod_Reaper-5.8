// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODSnapshotReverb.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODSnapshotReverb() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UReverbEffect(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSnapshotReverb(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSnapshotReverb(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UFMODSnapshotReverb ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UFMODSnapshotReverb_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FMOD Event Asset.\n */" },
#endif
		{ "HideCategories", "object" },
		{ "IncludePath", "FMODSnapshotReverb.h" },
		{ "ModuleRelativePath", "Classes/FMODSnapshotReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMOD Event Asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The unique Guid, which matches the one exported from FMOD Studio */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSnapshotReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique Guid, which matches the one exported from FMOD Studio" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UFMODSnapshotReverb constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFMODSnapshotReverb constinit property declarations ************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODSnapshotReverb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UFMODSnapshotReverb Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSnapshotReverb, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetGuid_MetaData), NewProp_AssetGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetGuid,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UFMODSnapshotReverb Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UReverbEffect,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UFMODSnapshotReverb,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODSnapshotReverb;
UClass* Z_Construct_UClass_UFMODSnapshotReverb(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UFMODSnapshotReverb;
		if (!Z_Registration_Info_UClass_UFMODSnapshotReverb.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("FMODSnapshotReverb"),
				Z_Registration_Info_UClass_UFMODSnapshotReverb.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UFMODSnapshotReverb.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UFMODSnapshotReverb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODSnapshotReverb.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODSnapshotReverb.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFMODSnapshotReverb);
UFMODSnapshotReverb::~UFMODSnapshotReverb() {}
// ********** End Class UFMODSnapshotReverb ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSnapshotReverb_h__Script_FMODStudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODSnapshotReverb, TEXT("UFMODSnapshotReverb"), &Z_Registration_Info_UClass_UFMODSnapshotReverb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODSnapshotReverb), 1071556896U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSnapshotReverb_h__Script_FMODStudio_6061072d58aba9336b3dc653901e4b2f3e4aec68{
	TEXT("/Script/FMODStudio"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
