// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODAssetLookup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODAssetLookup() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase);
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODAssetLookupRow(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FFMODAssetLookupRow ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FFMODAssetLookupRow>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFMODAssetLookupRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/FMODAssetLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
		{ "Category", "FMOD|Internal|AssetLookup" },
		{ "ModuleRelativePath", "Private/FMODAssetLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "Category", "FMOD|Internal|AssetLookup" },
		{ "ModuleRelativePath", "Private/FMODAssetLookup.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFMODAssetLookupRow constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFMODAssetLookupRow constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODAssetLookupRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FFMODAssetLookupRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFMODAssetLookupRow cannot be polymorphic unless super FTableRowBase is polymorphic");

// ********** Begin ScriptStruct FFMODAssetLookupRow Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODAssetLookupRow, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageName_MetaData), NewProp_PackageName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODAssetLookupRow, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FFMODAssetLookupRow Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"FMODAssetLookupRow",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FFMODAssetLookupRow>(),
	alignof(FFMODAssetLookupRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODAssetLookupRow;
UScriptStruct* Z_Construct_UScriptStruct_FFMODAssetLookupRow(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FFMODAssetLookupRow.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FFMODAssetLookupRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODAssetLookupRow, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("FMODAssetLookupRow"));
		}
		return Z_Registration_Info_UScriptStruct_FFMODAssetLookupRow.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FFMODAssetLookupRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODAssetLookupRow.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFMODAssetLookupRow.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FFMODAssetLookupRow *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODAssetLookup_h__Script_FMODStudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FFMODAssetLookupRow, Z_Construct_UScriptStruct_FFMODAssetLookupRow_Statics::NewStructOps, TEXT("FMODAssetLookupRow"),&Z_Registration_Info_UScriptStruct_FFMODAssetLookupRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODAssetLookupRow), 2851269377U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODAssetLookup_h__Script_FMODStudio_39ae2fa5805185660b8b781ddfd41601d75e41af{
	TEXT("/Script/FMODStudio"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
