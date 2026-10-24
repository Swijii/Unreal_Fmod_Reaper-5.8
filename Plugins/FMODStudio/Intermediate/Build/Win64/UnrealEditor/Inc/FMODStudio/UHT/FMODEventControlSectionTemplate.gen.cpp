// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/FMODEventControlSectionTemplate.h"
#include "Sequencer/FMODEventControlSection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODEventControlSectionTemplate() {}

// ********** Begin Cross Module References ********************************************************
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase);
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlChannel(ETypeConstructPhase);
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FFMODEventControlSectionTemplate **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FFMODEventControlSectionTemplate>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFMODEventControlSectionTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSectionTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlKeys_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSectionTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFMODEventControlSectionTemplate constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFMODEventControlSectionTemplate constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventControlSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FFMODEventControlSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FFMODEventControlSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

// ********** Begin ScriptStruct FFMODEventControlSectionTemplate Property Definitions *************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ControlKeys = { "ControlKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODEventControlSectionTemplate, ControlKeys), Z_Construct_UScriptStruct_FFMODEventControlChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlKeys_MetaData), NewProp_ControlKeys_MetaData) }; // 754bbff7f6cb83e8219237be1e42fda080b77c27
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlKeys,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FFMODEventControlSectionTemplate Property Definitions ***************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"FMODEventControlSectionTemplate",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FFMODEventControlSectionTemplate>(),
	alignof(FFMODEventControlSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODEventControlSectionTemplate;
UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FFMODEventControlSectionTemplate.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FFMODEventControlSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("FMODEventControlSectionTemplate"));
		}
		return Z_Registration_Info_UScriptStruct_FFMODEventControlSectionTemplate.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FFMODEventControlSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODEventControlSectionTemplate.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFMODEventControlSectionTemplate.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FFMODEventControlSectionTemplate ************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSectionTemplate_h__Script_FMODStudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate, Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::NewStructOps, TEXT("FMODEventControlSectionTemplate"),&Z_Registration_Info_UScriptStruct_FFMODEventControlSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODEventControlSectionTemplate), 1448978403U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSectionTemplate_h__Script_FMODStudio_559688f4252c4e2a30e39f4949941cec6862d819{
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
