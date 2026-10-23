// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODSettings.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase);
FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODCodec(ETypeConstructPhase);
FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODLogging(ETypeConstructPhase);
FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODOutput(ETypeConstructPhase);
FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODPlatforms(ETypeConstructPhase);
FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode(ETypeConstructPhase);
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODPlatformSettings(ETypeConstructPhase);
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODProjectLocale(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSettings(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EFMODLogging **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_FMODStudio_EFMODLogging_Statics
template<> FMODSTUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EFMODLogging>()
{
	return Z_Construct_UEnum_FMODStudio_EFMODLogging(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "LEVEL_ERROR.Name", "LEVEL_ERROR" },
		{ "LEVEL_LOG.Name", "LEVEL_LOG" },
		{ "LEVEL_NONE.Name", "LEVEL_NONE" },
		{ "LEVEL_WARNING.Name", "LEVEL_WARNING" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LEVEL_NONE", (int64)LEVEL_NONE },
		{ "LEVEL_ERROR", (int64)LEVEL_ERROR },
		{ "LEVEL_WARNING", (int64)LEVEL_WARNING },
		{ "LEVEL_LOG", (int64)LEVEL_LOG },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	"EFMODLogging",
	"EFMODLogging",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EFMODLogging;
UEnum* Z_Construct_UEnum_FMODStudio_EFMODLogging(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EFMODLogging.OuterSingleton)
		{
			ZRIE_EFMODLogging.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODLogging, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("EFMODLogging"));
		}
		return ZRIE_EFMODLogging.OuterSingleton;
	}
	if (!ZRIE_EFMODLogging.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EFMODLogging.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EFMODLogging.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EFMODLogging ****************************************************************

// ********** Begin Enum EFMODSpeakerMode **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode_Statics
template<> FMODSTUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EFMODSpeakerMode::Type>()
{
	return Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "Stereo.Comment", "// The speakers are stereo\n" },
		{ "Stereo.Name", "EFMODSpeakerMode::Stereo" },
		{ "Stereo.ToolTip", "The speakers are stereo" },
		{ "Surround_5_1.Comment", "// 5.1 speaker setup\n" },
		{ "Surround_5_1.Name", "EFMODSpeakerMode::Surround_5_1" },
		{ "Surround_5_1.ToolTip", "5.1 speaker setup" },
		{ "Surround_7_1.Comment", "// 7.1 speaker setup\n" },
		{ "Surround_7_1.Name", "EFMODSpeakerMode::Surround_7_1" },
		{ "Surround_7_1.ToolTip", "7.1 speaker setup" },
		{ "Surround_7_1_4.Comment", "// 7.1.4 speaker setup\n" },
		{ "Surround_7_1_4.Name", "EFMODSpeakerMode::Surround_7_1_4" },
		{ "Surround_7_1_4.ToolTip", "7.1.4 speaker setup" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFMODSpeakerMode::Stereo", (int64)EFMODSpeakerMode::Stereo },
		{ "EFMODSpeakerMode::Surround_5_1", (int64)EFMODSpeakerMode::Surround_5_1 },
		{ "EFMODSpeakerMode::Surround_7_1", (int64)EFMODSpeakerMode::Surround_7_1 },
		{ "EFMODSpeakerMode::Surround_7_1_4", (int64)EFMODSpeakerMode::Surround_7_1_4 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	"EFMODSpeakerMode",
	"EFMODSpeakerMode::Type",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EFMODSpeakerMode;
UEnum* Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EFMODSpeakerMode.OuterSingleton)
		{
			ZRIE_EFMODSpeakerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("EFMODSpeakerMode"));
		}
		return ZRIE_EFMODSpeakerMode.OuterSingleton;
	}
	if (!ZRIE_EFMODSpeakerMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EFMODSpeakerMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EFMODSpeakerMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EFMODSpeakerMode ************************************************************

// ********** Begin Enum EFMODOutput ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_FMODStudio_EFMODOutput_Statics
template<> FMODSTUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EFMODOutput::Type>()
{
	return Z_Construct_UEnum_FMODStudio_EFMODOutput(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "TYPE_AAUDIO.Comment", "/** Android - AAudio. (Default on Android 8.1 and above) */" },
		{ "TYPE_AAUDIO.Name", "EFMODOutput::TYPE_AAUDIO" },
		{ "TYPE_AAUDIO.ToolTip", "Android - AAudio. (Default on Android 8.1 and above)" },
		{ "TYPE_ALSA.Comment", "/** Linux - Advanced Linux Sound Architecture. (Default on Linux if PulseAudio isn't available) */" },
		{ "TYPE_ALSA.Name", "EFMODOutput::TYPE_ALSA" },
		{ "TYPE_ALSA.ToolTip", "Linux - Advanced Linux Sound Architecture. (Default on Linux if PulseAudio isn't available)" },
		{ "TYPE_ASIO.Comment", "/** Win - Low latency ASIO 2.0. */" },
		{ "TYPE_ASIO.Name", "EFMODOutput::TYPE_ASIO" },
		{ "TYPE_ASIO.ToolTip", "Win - Low latency ASIO 2.0." },
		{ "TYPE_AUDIO3D.Comment", "/** PS4 - Audio3D. */" },
		{ "TYPE_AUDIO3D.Name", "EFMODOutput::TYPE_AUDIO3D" },
		{ "TYPE_AUDIO3D.ToolTip", "PS4 - Audio3D." },
		{ "TYPE_AUDIOOUT.Comment", "/** PS4 / PS5 - Audio Out. (Default on PS4, PS5) */" },
		{ "TYPE_AUDIOOUT.Name", "EFMODOutput::TYPE_AUDIOOUT" },
		{ "TYPE_AUDIOOUT.ToolTip", "PS4 / PS5 - Audio Out. (Default on PS4, PS5)" },
		{ "TYPE_AUDIOTRACK.Comment", "/** Android - Java Audio Track. (Default on Android 2.2 and below) */" },
		{ "TYPE_AUDIOTRACK.Name", "EFMODOutput::TYPE_AUDIOTRACK" },
		{ "TYPE_AUDIOTRACK.ToolTip", "Android - Java Audio Track. (Default on Android 2.2 and below)" },
		{ "TYPE_AUTODETECT.Comment", "/** Picks the best output mode for the platform.This is the default. */" },
		{ "TYPE_AUTODETECT.Name", "EFMODOutput::TYPE_AUTODETECT" },
		{ "TYPE_AUTODETECT.ToolTip", "Picks the best output mode for the platform.This is the default." },
		{ "TYPE_COREAUDIO.Comment", "/** Mac / iOS - Core Audio. (Default on Mac and iOS) */" },
		{ "TYPE_COREAUDIO.Name", "EFMODOutput::TYPE_COREAUDIO" },
		{ "TYPE_COREAUDIO.ToolTip", "Mac / iOS - Core Audio. (Default on Mac and iOS)" },
		{ "TYPE_NNAUDIO.Comment", "/** Switch - nn::audio. (Default on Switch) */" },
		{ "TYPE_NNAUDIO.Name", "EFMODOutput::TYPE_NNAUDIO" },
		{ "TYPE_NNAUDIO.ToolTip", "Switch - nn::audio. (Default on Switch)" },
		{ "TYPE_NOSOUND.Comment", "/** All - Perform all mixing but discard the final output. */" },
		{ "TYPE_NOSOUND.Name", "EFMODOutput::TYPE_NOSOUND" },
		{ "TYPE_NOSOUND.ToolTip", "All - Perform all mixing but discard the final output." },
		{ "TYPE_OPENSL.Comment", "/** Android - OpenSL ES. (Default on Android 2.3 up to 7.1) */" },
		{ "TYPE_OPENSL.Name", "EFMODOutput::TYPE_OPENSL" },
		{ "TYPE_OPENSL.ToolTip", "Android - OpenSL ES. (Default on Android 2.3 up to 7.1)" },
		{ "TYPE_PULSEAUDIO.Comment", "/** Linux - Pulse Audio. (Default on Linux if available) */" },
		{ "TYPE_PULSEAUDIO.Name", "EFMODOutput::TYPE_PULSEAUDIO" },
		{ "TYPE_PULSEAUDIO.ToolTip", "Linux - Pulse Audio. (Default on Linux if available)" },
		{ "TYPE_WASAPI.Comment", "/** Win / UWP / Xbox One / Game Core - Windows Audio Session API. (Default on Windows, Xbox One, Game Core and UWP) */" },
		{ "TYPE_WASAPI.Name", "EFMODOutput::TYPE_WASAPI" },
		{ "TYPE_WASAPI.ToolTip", "Win / UWP / Xbox One / Game Core - Windows Audio Session API. (Default on Windows, Xbox One, Game Core and UWP)" },
		{ "TYPE_WINSONIC.Comment", "/** Win10 / Xbox One / Game Core - Windows Sonic. */" },
		{ "TYPE_WINSONIC.Name", "EFMODOutput::TYPE_WINSONIC" },
		{ "TYPE_WINSONIC.ToolTip", "Win10 / Xbox One / Game Core - Windows Sonic." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFMODOutput::TYPE_AUTODETECT", (int64)EFMODOutput::TYPE_AUTODETECT },
		{ "EFMODOutput::TYPE_NOSOUND", (int64)EFMODOutput::TYPE_NOSOUND },
		{ "EFMODOutput::TYPE_WASAPI", (int64)EFMODOutput::TYPE_WASAPI },
		{ "EFMODOutput::TYPE_ASIO", (int64)EFMODOutput::TYPE_ASIO },
		{ "EFMODOutput::TYPE_PULSEAUDIO", (int64)EFMODOutput::TYPE_PULSEAUDIO },
		{ "EFMODOutput::TYPE_ALSA", (int64)EFMODOutput::TYPE_ALSA },
		{ "EFMODOutput::TYPE_COREAUDIO", (int64)EFMODOutput::TYPE_COREAUDIO },
		{ "EFMODOutput::TYPE_AUDIOTRACK", (int64)EFMODOutput::TYPE_AUDIOTRACK },
		{ "EFMODOutput::TYPE_OPENSL", (int64)EFMODOutput::TYPE_OPENSL },
		{ "EFMODOutput::TYPE_AUDIOOUT", (int64)EFMODOutput::TYPE_AUDIOOUT },
		{ "EFMODOutput::TYPE_AUDIO3D", (int64)EFMODOutput::TYPE_AUDIO3D },
		{ "EFMODOutput::TYPE_NNAUDIO", (int64)EFMODOutput::TYPE_NNAUDIO },
		{ "EFMODOutput::TYPE_WINSONIC", (int64)EFMODOutput::TYPE_WINSONIC },
		{ "EFMODOutput::TYPE_AAUDIO", (int64)EFMODOutput::TYPE_AAUDIO },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	"EFMODOutput",
	"EFMODOutput::Type",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EFMODOutput;
UEnum* Z_Construct_UEnum_FMODStudio_EFMODOutput(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EFMODOutput.OuterSingleton)
		{
			ZRIE_EFMODOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODOutput, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("EFMODOutput"));
		}
		return ZRIE_EFMODOutput.OuterSingleton;
	}
	if (!ZRIE_EFMODOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EFMODOutput.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EFMODOutput.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EFMODOutput *****************************************************************

// ********** Begin Enum EFMODPlatforms ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_FMODStudio_EFMODPlatforms_Statics
template<> FMODSTUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EFMODPlatforms::Type>()
{
	return Z_Construct_UEnum_FMODStudio_EFMODPlatforms(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Android.Name", "EFMODPlatforms::Android" },
		{ "Deprecated.Name", "EFMODPlatforms::Deprecated" },
		{ "Editor.Name", "EFMODPlatforms::Editor" },
		{ "IOS.Name", "EFMODPlatforms::IOS" },
		{ "Linux.Name", "EFMODPlatforms::Linux" },
		{ "Mac.Name", "EFMODPlatforms::Mac" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "PS4.Name", "EFMODPlatforms::PS4" },
		{ "PS5.Name", "EFMODPlatforms::PS5" },
		{ "Reserved1.Name", "EFMODPlatforms::Reserved1" },
		{ "Switch.Name", "EFMODPlatforms::Switch" },
		{ "Windows.Name", "EFMODPlatforms::Windows" },
		{ "XboxOne.Name", "EFMODPlatforms::XboxOne" },
		{ "XSX.Name", "EFMODPlatforms::XSX" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFMODPlatforms::Windows", (int64)EFMODPlatforms::Windows },
		{ "EFMODPlatforms::Linux", (int64)EFMODPlatforms::Linux },
		{ "EFMODPlatforms::Mac", (int64)EFMODPlatforms::Mac },
		{ "EFMODPlatforms::Android", (int64)EFMODPlatforms::Android },
		{ "EFMODPlatforms::IOS", (int64)EFMODPlatforms::IOS },
		{ "EFMODPlatforms::PS4", (int64)EFMODPlatforms::PS4 },
		{ "EFMODPlatforms::PS5", (int64)EFMODPlatforms::PS5 },
		{ "EFMODPlatforms::Deprecated", (int64)EFMODPlatforms::Deprecated },
		{ "EFMODPlatforms::Switch", (int64)EFMODPlatforms::Switch },
		{ "EFMODPlatforms::XboxOne", (int64)EFMODPlatforms::XboxOne },
		{ "EFMODPlatforms::XSX", (int64)EFMODPlatforms::XSX },
		{ "EFMODPlatforms::Editor", (int64)EFMODPlatforms::Editor },
		{ "EFMODPlatforms::Reserved1", (int64)EFMODPlatforms::Reserved1 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	"EFMODPlatforms",
	"EFMODPlatforms::Type",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EFMODPlatforms;
UEnum* Z_Construct_UEnum_FMODStudio_EFMODPlatforms(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EFMODPlatforms.OuterSingleton)
		{
			ZRIE_EFMODPlatforms.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODPlatforms, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("EFMODPlatforms"));
		}
		return ZRIE_EFMODPlatforms.OuterSingleton;
	}
	if (!ZRIE_EFMODPlatforms.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EFMODPlatforms.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EFMODPlatforms.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EFMODPlatforms **************************************************************

// ********** Begin Enum EFMODCodec ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_FMODStudio_EFMODCodec_Statics
template<> FMODSTUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EFMODCodec::Type>()
{
	return Z_Construct_UEnum_FMODStudio_EFMODCodec(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AT9.Name", "EFMODCodec::AT9" },
		{ "FADPCM.Name", "EFMODCodec::FADPCM" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "OPUS.Name", "EFMODCodec::OPUS" },
		{ "VORBIS.Name", "EFMODCodec::VORBIS" },
		{ "XMA.Name", "EFMODCodec::XMA" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFMODCodec::VORBIS", (int64)EFMODCodec::VORBIS },
		{ "EFMODCodec::FADPCM", (int64)EFMODCodec::FADPCM },
		{ "EFMODCodec::OPUS", (int64)EFMODCodec::OPUS },
		{ "EFMODCodec::XMA", (int64)EFMODCodec::XMA },
		{ "EFMODCodec::AT9", (int64)EFMODCodec::AT9 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	"EFMODCodec",
	"EFMODCodec::Type",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EFMODCodec;
UEnum* Z_Construct_UEnum_FMODStudio_EFMODCodec(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EFMODCodec.OuterSingleton)
		{
			ZRIE_EFMODCodec.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODCodec, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("EFMODCodec"));
		}
		return ZRIE_EFMODCodec.OuterSingleton;
	}
	if (!ZRIE_EFMODCodec.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EFMODCodec.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EFMODCodec.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EFMODCodec ******************************************************************

// ********** Begin ScriptStruct FFMODPlatformSettings *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FFMODPlatformSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFMODPlatformSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealChannelCount_MetaData[] = {
		{ "Category", "PlatformSettings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Real Channel Count\n" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Real Channel Count" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "PlatformSettings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Sample rate to use, or 0 to match system rate.\n    * eg. 0, 22050, 24000, 32000, 44100, 48000.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sample rate to use, or 0 to match system rate.\neg. 0, 22050, 24000, 32000, 44100, 48000." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerMode_MetaData[] = {
		{ "Category", "PlatformSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Project Output Format, should match the mode set up for the Studio project.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Project Output Format, should match the mode set up for the Studio project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "PlatformSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Built-in output types that can be used to run the mixer.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Built-in output types that can be used to run the mixer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomPoolSize_MetaData[] = {
		{ "Category", "PlatformSettings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Use specified memory pool size, units in bytes. Disabled by default.\n     * FMOD may become unstable if the limit is exceeded!\n     */" },
#endif
		{ "DisplayName", "Memory Pool Size" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use specified memory pool size, units in bytes. Disabled by default.\nFMOD may become unstable if the limit is exceeded!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Codecs_MetaData[] = {
		{ "Category", "PlatformSettings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Codecs\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Codecs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackHandler_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Callback handler implementing IFMODCallbackHandler for calling into system at specific points in the integration's lifecycle.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "MustImplement", "/Script/FMODStudio.FMODCallbackHandler" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback handler implementing IFMODCallbackHandler for calling into system at specific points in the integration's lifecycle." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFMODPlatformSettings constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_RealChannelCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpeakerMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomPoolSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Codecs_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Codecs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Codecs;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CallbackHandler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFMODPlatformSettings constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODPlatformSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FFMODPlatformSettings Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RealChannelCount = { "RealChannelCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODPlatformSettings, RealChannelCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealChannelCount_MetaData), NewProp_RealChannelCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODPlatformSettings, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SpeakerMode = { "SpeakerMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODPlatformSettings, SpeakerMode), Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerMode_MetaData), NewProp_SpeakerMode_MetaData) }; // 3bc84319b75f7d1c34bfdcf945ca4d40aedb6c66
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODPlatformSettings, OutputType), Z_Construct_UEnum_FMODStudio_EFMODOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // c668a1b04a7dce2283278672efed29192233fe53
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CustomPoolSize = { "CustomPoolSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODPlatformSettings, CustomPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomPoolSize_MetaData), NewProp_CustomPoolSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Codecs_ValueProp = { "Codecs", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Codecs_Key_KeyProp = { "Codecs_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, Z_Construct_UEnum_FMODStudio_EFMODCodec, METADATA_PARAMS(0, nullptr) }; // 49f3f4ec67e8927d715cc94d07e0fcd97b6f7549
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Codecs = { "Codecs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODPlatformSettings, Codecs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Codecs_MetaData), NewProp_Codecs_MetaData) }; // 49f3f4ec67e8927d715cc94d07e0fcd97b6f7549
const UECodeGen_Private::FSoftClassPropertyParams UHT_STATICS::NewProp_CallbackHandler = { "CallbackHandler", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODPlatformSettings, CallbackHandler), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackHandler_MetaData), NewProp_CallbackHandler_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RealChannelCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeakerMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Codecs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Codecs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Codecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackHandler,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FFMODPlatformSettings Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	&NewStructOps,
	"FMODPlatformSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FFMODPlatformSettings>(),
	alignof(FFMODPlatformSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODPlatformSettings;
UScriptStruct* Z_Construct_UScriptStruct_FFMODPlatformSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FFMODPlatformSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FFMODPlatformSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODPlatformSettings, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("FMODPlatformSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FFMODPlatformSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FFMODPlatformSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODPlatformSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFMODPlatformSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FFMODPlatformSettings ***********************************************

// ********** Begin ScriptStruct FFMODProjectLocale ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FFMODProjectLocale_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FFMODProjectLocale>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFMODProjectLocale); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocaleName_MetaData[] = {
		{ "Category", "Localization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Human readable locale name, displayed in Blueprints.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Human readable locale name, displayed in Blueprints." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocaleCode_MetaData[] = {
		{ "Category", "Localization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Locale code. Must correspond to project locale codes in FMOD Studio project.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Locale code. Must correspond to project locale codes in FMOD Studio project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefault_MetaData[] = {
		{ "Category", "Localization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Default locale at startup. Only one locale should be marked as default.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default locale at startup. Only one locale should be marked as default." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFMODProjectLocale constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocaleName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocaleCode;
	static void NewProp_bDefault_SetBit(void* Obj)
	{
		((FFMODProjectLocale*)Obj)->bDefault = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFMODProjectLocale constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODProjectLocale>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FFMODProjectLocale Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_LocaleName = { "LocaleName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODProjectLocale, LocaleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocaleName_MetaData), NewProp_LocaleName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_LocaleCode = { "LocaleCode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODProjectLocale, LocaleCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocaleCode_MetaData), NewProp_LocaleCode_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDefault = { "bDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FFMODProjectLocale), &UHT_STATICS::NewProp_bDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefault_MetaData), NewProp_bDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocaleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocaleCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDefault,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FFMODProjectLocale Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	&NewStructOps,
	"FMODProjectLocale",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FFMODProjectLocale>(),
	alignof(FFMODProjectLocale),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODProjectLocale;
UScriptStruct* Z_Construct_UScriptStruct_FFMODProjectLocale(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FFMODProjectLocale.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FFMODProjectLocale.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODProjectLocale, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("FMODProjectLocale"));
		}
		return Z_Registration_Info_UScriptStruct_FFMODProjectLocale.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FFMODProjectLocale.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODProjectLocale.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFMODProjectLocale.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FFMODProjectLocale **************************************************

// ********** Begin Class UFMODSettings ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UFMODSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "FMODSettings.h" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoadAllBanks_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Whether to load all banks at startup.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to load all banks at startup." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoadAllSampleData_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Whether to load all bank sample data into memory at startup.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to load all bank sample data into memory at startup." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLiveUpdate_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Enable live update in non-final builds.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable live update in non-final builds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEditorLiveUpdate_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Enable live update in Editor for Auditioning. *Requires Restart*\n    */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable live update in Editor for Auditioning. *Requires Restart*" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BankOutputDirectory_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Path to find your studio bank output directory, relative to Content directory.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path to find your studio bank output directory, relative to Content directory." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Project Output Format, should match the mode set up for the Studio project. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Project Output Format, should match the mode set up for the Studio project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "Basic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Built-in output types that can be used to run the mixer.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Built-in output types that can be used to run the mixer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locales_MetaData[] = {
		{ "Category", "Localization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Locales for localized banks. These should match the project locales configured in the FMOD Studio project.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Locales for localized banks. These should match the project locales configured in the FMOD Studio project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vol0VirtualLevel_MetaData[] = {
		{ "Category", "InitSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The signal level at which channels are virtualized. Virtual channels are processed, but do not produce any output.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The signal level at which channels are virtualized. Virtual channels are processed, but do not produce any output." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "InitSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Sample rate to use, or 0 to match system rate.\n     * eg. 0, 22050, 24000, 32000, 44100, 48000.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sample rate to use, or 0 to match system rate.\neg. 0, 22050, 24000, 32000, 44100, 48000." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchHardwareSampleRate_MetaData[] = {
		{ "Category", "InitSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Whether to match hardware sample rate where reasonable (44.1kHz to 48kHz).\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to match hardware sample rate where reasonable (44.1kHz to 48kHz)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealChannelCount_MetaData[] = {
		{ "Category", "InitSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Number of actual software voices that can be used at once.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of actual software voices that can be used at once." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalChannelCount_MetaData[] = {
		{ "Category", "InitSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Total number of voices available that can be either real or virtual.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total number of voices available that can be either real or virtual." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DSPBufferLength_MetaData[] = {
		{ "Category", "InitSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * DSP mixer buffer length (eg. 512, 1024) or 0 for system default.\n     * When changing the Buffer Length, Buffer Count also needs to be set.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DSP mixer buffer length (eg. 512, 1024) or 0 for system default.\nWhen changing the Buffer Length, Buffer Count also needs to be set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DSPBufferCount_MetaData[] = {
		{ "Category", "InitSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * DSP mixer buffer count (eg. 2, 4) or 0 for system default.\n     * When changing the Buffer Count, Buffer Length also needs to be set.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DSP mixer buffer count (eg. 2, 4) or 0 for system default.\nWhen changing the Buffer Count, Buffer Length also needs to be set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileBufferSize_MetaData[] = {
		{ "Category", "InitSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * File buffer size in bytes (2048 by default).\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "File buffer size in bytes (2048 by default)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StudioUpdatePeriod_MetaData[] = {
		{ "Category", "InitSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Studio update period in milliseconds, or 0 for default (which means 20ms).\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Studio update period in milliseconds, or 0 for default (which means 20ms)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialOutputDriverName_MetaData[] = {
		{ "Category", "InitSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Output device to choose at system start up, or empty for default.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Output device to choose at system start up, or empty for default." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockAllBuses_MetaData[] = {
		{ "Category", "InitSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Lock all mixer buses at startup, making sure they are created up front.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lock all mixer buses at startup, making sure they are created up front." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryPoolSize_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Use specified memory pool size for platform, units in bytes. Disabled by default.\n     * FMOD may become unstable if the limit is exceeded!\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use specified memory pool size for platform, units in bytes. Disabled by default.\nFMOD may become unstable if the limit is exceeded!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Codecs_MetaData[] = {
		{ "Category", "InitSettings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Codecs\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Codecs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackHandler_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Callback handler implementing IFMODCallbackHandler for calling into system at specific points in the integration's lifecycle.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
		{ "MustImplement", "/Script/FMODStudio.FMODCallbackHandler" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback handler implementing IFMODCallbackHandler for calling into system at specific points in the integration's lifecycle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiveUpdatePort_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Live update port to use, or 0 for default.\n     */" },
#endif
		{ "EditCondition", "bEnableLiveUpdate" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Live update port to use, or 0 for default." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorLiveUpdatePort_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Live update port to use while in editor for auditioning. *Requires Restart*\n    */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnableEditorLiveUpdate" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Live update port to use while in editor for auditioning. *Requires Restart*" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadBanksDelay_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Delay in seconds before automatically reloading modified banks from disk. This can be extended if building\n    * banks takes a long time and UE4 tries to reload banks before building is completed.\n    * Set to 0 to disable automatic bank reloading.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay in seconds before automatically reloading modified banks from disk. This can be extended if building\nbanks takes a long time and UE4 tries to reload banks before building is completed.\nSet to 0 to disable automatic bank reloading." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAPIErrorLogging_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Will log internal API errors when enabled.\n     */" },
#endif
		{ "DisplayName", "Enable API Error Logging" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will log internal API errors when enabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMemoryTracking_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Enable memory tracking.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable memory tracking." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginFiles_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Extra plugin files to load.\n     * The plugin files should sit alongside the FMOD dynamic libraries in the ThirdParty directory.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra plugin files to load.\nThe plugin files should sit alongside the FMOD dynamic libraries in the ThirdParty directory." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentBrowserPrefix_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Directory for content to appear in content window. Be careful changing this!\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Directory for content to appear in content window. Be careful changing this!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcePlatformName_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Force platform directory name, or leave empty for automatic (Desktop/Mobile/PS4/XBoxOne)\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force platform directory name, or leave empty for automatic (Desktop/Mobile/PS4/XBoxOne)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterBankName_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Name of master bank.  The default in Studio is \"Master Bank\".\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of master bank.  The default in Studio is \"Master Bank\"." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkipLoadBankName_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Skip bank files of the given name.\n     * Can be used to load all banks except for a certain set, such as localization banks.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skip bank files of the given name.\nCan be used to load all banks except for a certain set, such as localization banks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StudioBankKey_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Specify the key for loading sounds from encrypted banks.\n     */" },
#endif
		{ "DisplayName", "Encryption Key" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specify the key for loading sounds from encrypted banks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WavWriterPath_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Force wav writer output, for debugging only.  Setting this will prevent normal sound output!\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force wav writer output, for debugging only.  Setting this will prevent normal sound output!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoggingLevel_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Specify the logging level to use in a debug/development build.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specify the logging level to use in a debug/development build." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionParameter_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Name of the parameter used in Studio to control Occlusion effects.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the parameter used in Studio to control Occlusion effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientVolumeParameter_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Name of the parameter used in Studio to control Ambient volume.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the parameter used in Studio to control Ambient volume." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientLPFParameter_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Name of the parameter used in Studio to control Ambient LPF effects.\n     */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the parameter used in Studio to control Ambient LPF effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFMODAudioLinkEnabled_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Enables/Disables the FMODAudioLink modules.\n    */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables/Disables the FMODAudioLink modules." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[] = {
		{ "Category", "PlatformSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n    * Used to specify platform specific settings.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to specify platform specific settings." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UFMODSettings constinit property declarations ****************************
	static void NewProp_bLoadAllBanks_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bLoadAllBanks = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadAllBanks;
	static void NewProp_bLoadAllSampleData_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bLoadAllSampleData = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadAllSampleData;
	static void NewProp_bEnableLiveUpdate_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bEnableLiveUpdate = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLiveUpdate;
	static void NewProp_bEnableEditorLiveUpdate_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bEnableEditorLiveUpdate = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEditorLiveUpdate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BankOutputDirectory;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locales_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Locales;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Vol0VirtualLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static void NewProp_bMatchHardwareSampleRate_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bMatchHardwareSampleRate = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchHardwareSampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RealChannelCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalChannelCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DSPBufferLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DSPBufferCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileBufferSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StudioUpdatePeriod;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InitialOutputDriverName;
	static void NewProp_bLockAllBuses_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bLockAllBuses = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockAllBuses;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemoryPoolSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Codecs_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Codecs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Codecs;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CallbackHandler;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LiveUpdatePort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EditorLiveUpdatePort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReloadBanksDelay;
	static void NewProp_bEnableAPIErrorLogging_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bEnableAPIErrorLogging = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAPIErrorLogging;
	static void NewProp_bEnableMemoryTracking_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bEnableMemoryTracking = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMemoryTracking;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PluginFiles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentBrowserPrefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ForcePlatformName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MasterBankName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkipLoadBankName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StudioBankKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WavWriterPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoggingLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OcclusionParameter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AmbientVolumeParameter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AmbientLPFParameter;
	static void NewProp_bFMODAudioLinkEnabled_SetBit(void* Obj)
	{
		((UFMODSettings*)Obj)->bFMODAudioLinkEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFMODAudioLinkEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Platforms_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Platforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFMODSettings constinit property declarations ******************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UFMODSettings Property Definitions ***************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLoadAllBanks = { "bLoadAllBanks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODSettings), &UHT_STATICS::NewProp_bLoadAllBanks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoadAllBanks_MetaData), NewProp_bLoadAllBanks_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLoadAllSampleData = { "bLoadAllSampleData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODSettings), &UHT_STATICS::NewProp_bLoadAllSampleData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoadAllSampleData_MetaData), NewProp_bLoadAllSampleData_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableLiveUpdate = { "bEnableLiveUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODSettings), &UHT_STATICS::NewProp_bEnableLiveUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLiveUpdate_MetaData), NewProp_bEnableLiveUpdate_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableEditorLiveUpdate = { "bEnableEditorLiveUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODSettings), &UHT_STATICS::NewProp_bEnableEditorLiveUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableEditorLiveUpdate_MetaData), NewProp_bEnableEditorLiveUpdate_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BankOutputDirectory = { "BankOutputDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, BankOutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BankOutputDirectory_MetaData), NewProp_BankOutputDirectory_MetaData) }; // a9ea974572ee54d1b93cb49a6434fdbad40b6bf5
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, OutputFormat), Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputFormat_MetaData), NewProp_OutputFormat_MetaData) }; // 3bc84319b75f7d1c34bfdcf945ca4d40aedb6c66
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, OutputType), Z_Construct_UEnum_FMODStudio_EFMODOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // c668a1b04a7dce2283278672efed29192233fe53
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Locales_Inner = { "Locales", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFMODProjectLocale, METADATA_PARAMS(0, nullptr) }; // 67d1ccb1dc01ab1b2575ff50c086de53dc993309
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Locales = { "Locales", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, Locales), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locales_MetaData), NewProp_Locales_MetaData) }; // 67d1ccb1dc01ab1b2575ff50c086de53dc993309
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Vol0VirtualLevel = { "Vol0VirtualLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, Vol0VirtualLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vol0VirtualLevel_MetaData), NewProp_Vol0VirtualLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMatchHardwareSampleRate = { "bMatchHardwareSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODSettings), &UHT_STATICS::NewProp_bMatchHardwareSampleRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchHardwareSampleRate_MetaData), NewProp_bMatchHardwareSampleRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RealChannelCount = { "RealChannelCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, RealChannelCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealChannelCount_MetaData), NewProp_RealChannelCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TotalChannelCount = { "TotalChannelCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, TotalChannelCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalChannelCount_MetaData), NewProp_TotalChannelCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DSPBufferLength = { "DSPBufferLength", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, DSPBufferLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DSPBufferLength_MetaData), NewProp_DSPBufferLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DSPBufferCount = { "DSPBufferCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, DSPBufferCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DSPBufferCount_MetaData), NewProp_DSPBufferCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FileBufferSize = { "FileBufferSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, FileBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileBufferSize_MetaData), NewProp_FileBufferSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StudioUpdatePeriod = { "StudioUpdatePeriod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, StudioUpdatePeriod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StudioUpdatePeriod_MetaData), NewProp_StudioUpdatePeriod_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_InitialOutputDriverName = { "InitialOutputDriverName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, InitialOutputDriverName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialOutputDriverName_MetaData), NewProp_InitialOutputDriverName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLockAllBuses = { "bLockAllBuses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODSettings), &UHT_STATICS::NewProp_bLockAllBuses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockAllBuses_MetaData), NewProp_bLockAllBuses_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MemoryPoolSize = { "MemoryPoolSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, MemoryPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryPoolSize_MetaData), NewProp_MemoryPoolSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Codecs_ValueProp = { "Codecs", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Codecs_Key_KeyProp = { "Codecs_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, Z_Construct_UEnum_FMODStudio_EFMODCodec, METADATA_PARAMS(0, nullptr) }; // 49f3f4ec67e8927d715cc94d07e0fcd97b6f7549
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Codecs = { "Codecs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, Codecs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Codecs_MetaData), NewProp_Codecs_MetaData) }; // 49f3f4ec67e8927d715cc94d07e0fcd97b6f7549
const UECodeGen_Private::FSoftClassPropertyParams UHT_STATICS::NewProp_CallbackHandler = { "CallbackHandler", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, CallbackHandler), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackHandler_MetaData), NewProp_CallbackHandler_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LiveUpdatePort = { "LiveUpdatePort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, LiveUpdatePort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiveUpdatePort_MetaData), NewProp_LiveUpdatePort_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EditorLiveUpdatePort = { "EditorLiveUpdatePort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, EditorLiveUpdatePort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorLiveUpdatePort_MetaData), NewProp_EditorLiveUpdatePort_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReloadBanksDelay = { "ReloadBanksDelay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, ReloadBanksDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadBanksDelay_MetaData), NewProp_ReloadBanksDelay_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableAPIErrorLogging = { "bEnableAPIErrorLogging", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODSettings), &UHT_STATICS::NewProp_bEnableAPIErrorLogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAPIErrorLogging_MetaData), NewProp_bEnableAPIErrorLogging_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableMemoryTracking = { "bEnableMemoryTracking", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODSettings), &UHT_STATICS::NewProp_bEnableMemoryTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMemoryTracking_MetaData), NewProp_bEnableMemoryTracking_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PluginFiles_Inner = { "PluginFiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PluginFiles = { "PluginFiles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, PluginFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginFiles_MetaData), NewProp_PluginFiles_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ContentBrowserPrefix = { "ContentBrowserPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, ContentBrowserPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentBrowserPrefix_MetaData), NewProp_ContentBrowserPrefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ForcePlatformName = { "ForcePlatformName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, ForcePlatformName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcePlatformName_MetaData), NewProp_ForcePlatformName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MasterBankName = { "MasterBankName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, MasterBankName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterBankName_MetaData), NewProp_MasterBankName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SkipLoadBankName = { "SkipLoadBankName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, SkipLoadBankName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkipLoadBankName_MetaData), NewProp_SkipLoadBankName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_StudioBankKey = { "StudioBankKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, StudioBankKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StudioBankKey_MetaData), NewProp_StudioBankKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WavWriterPath = { "WavWriterPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, WavWriterPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WavWriterPath_MetaData), NewProp_WavWriterPath_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LoggingLevel = { "LoggingLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, LoggingLevel), Z_Construct_UEnum_FMODStudio_EFMODLogging, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoggingLevel_MetaData), NewProp_LoggingLevel_MetaData) }; // 0dd9a6d7c68532c1672373d73b95f90da4a31a34
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OcclusionParameter = { "OcclusionParameter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, OcclusionParameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionParameter_MetaData), NewProp_OcclusionParameter_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AmbientVolumeParameter = { "AmbientVolumeParameter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, AmbientVolumeParameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientVolumeParameter_MetaData), NewProp_AmbientVolumeParameter_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AmbientLPFParameter = { "AmbientLPFParameter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, AmbientLPFParameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientLPFParameter_MetaData), NewProp_AmbientLPFParameter_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFMODAudioLinkEnabled = { "bFMODAudioLinkEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODSettings), &UHT_STATICS::NewProp_bFMODAudioLinkEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFMODAudioLinkEnabled_MetaData), NewProp_bFMODAudioLinkEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Platforms_ValueProp = { "Platforms", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFMODPlatformSettings, METADATA_PARAMS(0, nullptr) }; // 578f8843ba664e39625d24673bdc2b93cddb9736
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Platforms_Key_KeyProp = { "Platforms_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, Z_Construct_UEnum_FMODStudio_EFMODPlatforms, METADATA_PARAMS(0, nullptr) }; // eab275d1ffbf47f784d8d83f7922aa9036692f95
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODSettings, Platforms), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platforms_MetaData), NewProp_Platforms_MetaData) }; // eab275d1ffbf47f784d8d83f7922aa9036692f95 578f8843ba664e39625d24673bdc2b93cddb9736
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLoadAllBanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLoadAllSampleData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableLiveUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableEditorLiveUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BankOutputDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutputFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Locales_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Locales,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Vol0VirtualLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMatchHardwareSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RealChannelCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TotalChannelCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DSPBufferLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DSPBufferCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FileBufferSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StudioUpdatePeriod,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialOutputDriverName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLockAllBuses,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MemoryPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Codecs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Codecs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Codecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LiveUpdatePort,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EditorLiveUpdatePort,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReloadBanksDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableAPIErrorLogging,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableMemoryTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PluginFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PluginFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ContentBrowserPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ForcePlatformName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MasterBankName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkipLoadBankName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StudioBankKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WavWriterPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LoggingLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OcclusionParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AmbientVolumeParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AmbientLPFParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFMODAudioLinkEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Platforms_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Platforms_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Platforms,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UFMODSettings Property Definitions *****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UFMODSettings,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODSettings;
UClass* Z_Construct_UClass_UFMODSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UFMODSettings;
		if (!Z_Registration_Info_UClass_UFMODSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("FMODSettings"),
				Z_Registration_Info_UClass_UFMODSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UFMODSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UFMODSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFMODSettings);
UFMODSettings::~UFMODSettings() {}
// ********** End Class UFMODSettings **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h__Script_FMODStudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_FMODStudio_EFMODLogging, TEXT("EFMODLogging"), &ZRIE_EFMODLogging, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 232367831U) },
		{ Z_Construct_UEnum_FMODStudio_EFMODSpeakerMode, TEXT("EFMODSpeakerMode"), &ZRIE_EFMODSpeakerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1002980121U) },
		{ Z_Construct_UEnum_FMODStudio_EFMODOutput, TEXT("EFMODOutput"), &ZRIE_EFMODOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3328745904U) },
		{ Z_Construct_UEnum_FMODStudio_EFMODPlatforms, TEXT("EFMODPlatforms"), &ZRIE_EFMODPlatforms, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3937564113U) },
		{ Z_Construct_UEnum_FMODStudio_EFMODCodec, TEXT("EFMODCodec"), &ZRIE_EFMODCodec, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1240724716U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FFMODPlatformSettings, Z_Construct_UScriptStruct_FFMODPlatformSettings_Statics::NewStructOps, TEXT("FMODPlatformSettings"),&Z_Registration_Info_UScriptStruct_FFMODPlatformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODPlatformSettings), 1469024323U) },
		{ Z_Construct_UScriptStruct_FFMODProjectLocale, Z_Construct_UScriptStruct_FFMODProjectLocale_Statics::NewStructOps, TEXT("FMODProjectLocale"),&Z_Registration_Info_UScriptStruct_FFMODProjectLocale, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODProjectLocale), 1741802673U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODSettings, TEXT("UFMODSettings"), &Z_Registration_Info_UClass_UFMODSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODSettings), 1765472056U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODSettings_h__Script_FMODStudio_33a72190b8a1025ee957bd176f779d7f09c54835{
	TEXT("/Script/FMODStudio"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
