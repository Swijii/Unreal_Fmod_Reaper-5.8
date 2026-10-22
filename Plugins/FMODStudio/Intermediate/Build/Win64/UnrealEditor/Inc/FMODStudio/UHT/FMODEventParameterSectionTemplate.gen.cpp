// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/FMODEventParameterSectionTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODEventParameterSectionTemplate() {}

// ********** Begin Cross Module References ********************************************************
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase);
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FFMODEventParameterSectionTemplate ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FFMODEventParameterSectionTemplate>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFMODEventParameterSectionTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterSectionTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFMODEventParameterSectionTemplate constinit property declarations 
// ********** End ScriptStruct FFMODEventParameterSectionTemplate constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventParameterSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FFMODEventParameterSectionTemplate>() == std::is_polymorphic<FMovieSceneParameterSectionTemplate>(), "USTRUCT FFMODEventParameterSectionTemplate cannot be polymorphic unless super FMovieSceneParameterSectionTemplate is polymorphic");
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
	&NewStructOps,
	"FMODEventParameterSectionTemplate",
	nullptr,
	0,
	DataSizeOf<FFMODEventParameterSectionTemplate>(),
	alignof(FFMODEventParameterSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate;
UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("FMODEventParameterSectionTemplate"));
		}
		return Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FFMODEventParameterSectionTemplate **********************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterSectionTemplate_h__Script_FMODStudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate, Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::NewStructOps, TEXT("FMODEventParameterSectionTemplate"),&Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODEventParameterSectionTemplate), 1131273856U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterSectionTemplate_h__Script_FMODStudio_d6972fff78ebf6fff1a18bd2b208e87bada2c176{
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
