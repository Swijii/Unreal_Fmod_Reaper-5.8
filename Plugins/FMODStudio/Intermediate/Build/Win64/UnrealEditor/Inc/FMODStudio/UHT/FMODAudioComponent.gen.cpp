// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODAudioComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODAudioComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase);
FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty(ETypeConstructPhase);
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODAttenuationDetails(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent(ETypeConstructPhase);
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODOcclusionDetails(ETypeConstructPhase);
FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnAssetMarker__DelegateSignature(ETypeConstructPhase);
FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature(ETypeConstructPhase);
FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnSoundStopped__DelegateSignature(ETypeConstructPhase);
FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature(ETypeConstructPhase);
FMODSTUDIO_API UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EFMODEventProperty ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_FMODStudio_EFMODEventProperty_Statics
template<> FMODSTUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EFMODEventProperty::Type>()
{
	return Z_Construct_UEnum_FMODStudio_EFMODEventProperty(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ChannelPriority.Comment", "/* Priority to set on low-level channels created by this event instance (-1 to 256). */" },
		{ "ChannelPriority.Name", "EFMODEventProperty::ChannelPriority" },
		{ "ChannelPriority.ToolTip", "Priority to set on low-level channels created by this event instance (-1 to 256)." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event property\n" },
#endif
		{ "Count.Comment", "/** Number of options */" },
		{ "Count.Name", "EFMODEventProperty::Count" },
		{ "Count.ToolTip", "Number of options" },
		{ "MaximumDistance.Comment", "/** Override the event's 3D maximum distance, or -1 for default. */" },
		{ "MaximumDistance.Name", "EFMODEventProperty::MaximumDistance" },
		{ "MaximumDistance.ToolTip", "Override the event's 3D maximum distance, or -1 for default." },
		{ "MinimumDistance.Comment", "/** Override the event's 3D minimum distance, or -1 for default. */" },
		{ "MinimumDistance.Name", "EFMODEventProperty::MinimumDistance" },
		{ "MinimumDistance.ToolTip", "Override the event's 3D minimum distance, or -1 for default." },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
		{ "ScheduleDelay.Comment", "/** Schedule delay to synchronized playback for multiple tracks in DSP clocks, or -1 for default. */" },
		{ "ScheduleDelay.Name", "EFMODEventProperty::ScheduleDelay" },
		{ "ScheduleDelay.ToolTip", "Schedule delay to synchronized playback for multiple tracks in DSP clocks, or -1 for default." },
		{ "ScheduleLookahead.Comment", "/** Schedule look-ahead on the timeline in DSP clocks, or -1 for default. */" },
		{ "ScheduleLookahead.Name", "EFMODEventProperty::ScheduleLookahead" },
		{ "ScheduleLookahead.ToolTip", "Schedule look-ahead on the timeline in DSP clocks, or -1 for default." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event property" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFMODEventProperty::ChannelPriority", (int64)EFMODEventProperty::ChannelPriority },
		{ "EFMODEventProperty::ScheduleDelay", (int64)EFMODEventProperty::ScheduleDelay },
		{ "EFMODEventProperty::ScheduleLookahead", (int64)EFMODEventProperty::ScheduleLookahead },
		{ "EFMODEventProperty::MinimumDistance", (int64)EFMODEventProperty::MinimumDistance },
		{ "EFMODEventProperty::MaximumDistance", (int64)EFMODEventProperty::MaximumDistance },
		{ "EFMODEventProperty::Count", (int64)EFMODEventProperty::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	"EFMODEventProperty",
	"EFMODEventProperty::Type",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EFMODEventProperty;
UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EFMODEventProperty.OuterSingleton)
		{
			ZRIE_EFMODEventProperty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODEventProperty, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("EFMODEventProperty"));
		}
		return ZRIE_EFMODEventProperty.OuterSingleton;
	}
	if (!ZRIE_EFMODEventProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EFMODEventProperty.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EFMODEventProperty.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EFMODEventProperty **********************************************************

// ********** Begin ScriptStruct FFMODAttenuationDetails *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FFMODAttenuationDetails>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFMODAttenuationDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "FMOD|Attenuation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we use Attenuation set in Studio or be able to modify in Editor. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we use Attenuation set in Studio or be able to modify in Editor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDistance_MetaData[] = {
		{ "Category", "FMOD|Attenuation" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the event's 3D minimum distance. */" },
#endif
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the event's 3D minimum distance." },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDistance_MetaData[] = {
		{ "Category", "FMOD|Attenuation" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the event's 3D maximum distance. */" },
#endif
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the event's 3D maximum distance." },
#endif
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFMODAttenuationDetails constinit property declarations ***********
	static void NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((FFMODAttenuationDetails*)Obj)->bOverrideAttenuation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFMODAttenuationDetails constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODAttenuationDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FFMODAttenuationDetails Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFMODAttenuationDetails), &UHT_STATICS::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData), NewProp_bOverrideAttenuation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinimumDistance = { "MinimumDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODAttenuationDetails, MinimumDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumDistance_MetaData), NewProp_MinimumDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaximumDistance = { "MaximumDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODAttenuationDetails, MaximumDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumDistance_MetaData), NewProp_MaximumDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOverrideAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumDistance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FFMODAttenuationDetails Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	&NewStructOps,
	"FMODAttenuationDetails",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FFMODAttenuationDetails>(),
	alignof(FFMODAttenuationDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODAttenuationDetails;
UScriptStruct* Z_Construct_UScriptStruct_FFMODAttenuationDetails(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FFMODAttenuationDetails.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FFMODAttenuationDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODAttenuationDetails, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("FMODAttenuationDetails"));
		}
		return Z_Registration_Info_UScriptStruct_FFMODAttenuationDetails.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FFMODAttenuationDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODAttenuationDetails.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFMODAttenuationDetails.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FFMODAttenuationDetails *********************************************

// ********** Begin ScriptStruct FFMODOcclusionDetails *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FFMODOcclusionDetails>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFMODOcclusionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusion_MetaData[] = {
		{ "Category", "FMOD|Occlusion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable Occlusion Settings. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable Occlusion Settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionTraceChannel_MetaData[] = {
		{ "Category", "FMOD|Occlusion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Which trace channel to use for audio occlusion checks. */" },
#endif
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which trace channel to use for audio occlusion checks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexCollisionForOcclusion_MetaData[] = {
		{ "Category", "FMOD|Occlusion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether or not to enable complex geometry occlusion checks. */" },
#endif
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to enable complex geometry occlusion checks." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFMODOcclusionDetails constinit property declarations *************
	static void NewProp_bEnableOcclusion_SetBit(void* Obj)
	{
		((FFMODOcclusionDetails*)Obj)->bEnableOcclusion = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionTraceChannel;
	static void NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj)
	{
		((FFMODOcclusionDetails*)Obj)->bUseComplexCollisionForOcclusion = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexCollisionForOcclusion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFMODOcclusionDetails constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODOcclusionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FFMODOcclusionDetails Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableOcclusion = { "bEnableOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FFMODOcclusionDetails), &UHT_STATICS::NewProp_bEnableOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOcclusion_MetaData), NewProp_bEnableOcclusion_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OcclusionTraceChannel = { "OcclusionTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODOcclusionDetails, OcclusionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionTraceChannel_MetaData), NewProp_OcclusionTraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseComplexCollisionForOcclusion = { "bUseComplexCollisionForOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FFMODOcclusionDetails), &UHT_STATICS::NewProp_bUseComplexCollisionForOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseComplexCollisionForOcclusion_MetaData), NewProp_bUseComplexCollisionForOcclusion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OcclusionTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseComplexCollisionForOcclusion,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FFMODOcclusionDetails Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	&NewStructOps,
	"FMODOcclusionDetails",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FFMODOcclusionDetails>(),
	alignof(FFMODOcclusionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODOcclusionDetails;
UScriptStruct* Z_Construct_UScriptStruct_FFMODOcclusionDetails(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FFMODOcclusionDetails.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FFMODOcclusionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODOcclusionDetails, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("FMODOcclusionDetails"));
		}
		return Z_Registration_Info_UScriptStruct_FFMODOcclusionDetails.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FFMODOcclusionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODOcclusionDetails.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFMODOcclusionDetails.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FFMODOcclusionDetails ***********************************************

// ********** Begin Delegate FOnEventStopped *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when an event stops, either because it played to completion or because a Stop() call turned it off early */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when an event stops, either because it played to completion or because a Stop() call turned it off early" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnEventStopped constinit property declarations ***********************
// ********** End Delegate FOnEventStopped constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio, nullptr, "OnEventStopped__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnEventStopped *********************************************************

// ********** Begin Delegate FOnSoundStopped *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_FMODStudio_OnSoundStopped__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when a sound stops */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when a sound stops" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSoundStopped constinit property declarations ***********************
// ********** End Delegate FOnSoundStopped constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio, nullptr, "OnSoundStopped__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnSoundStopped__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnSoundStopped *********************************************************

// ********** Begin Delegate FOnAssetMarker ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_FMODStudio_OnAssetMarker__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_FMODStudio_eventOnAssetMarker_Parms
	{
		FString Name;
		int32 Position;
		int32 index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when one of an EventInstance's internal Channels passes an asset marker */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when one of an EventInstance's internal Channels passes an asset marker" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAssetMarker constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAssetMarker constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAssetMarker Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMODStudio_eventOnAssetMarker_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMODStudio_eventOnAssetMarker_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMODStudio_eventOnAssetMarker_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_index,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnAssetMarker Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio, nullptr, "OnAssetMarker__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_FMODStudio_eventOnAssetMarker_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_FMODStudio_eventOnAssetMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnAssetMarker__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnAssetMarker **********************************************************

// ********** Begin Delegate FOnTimelineMarker *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_FMODStudio_eventOnTimelineMarker_Parms
	{
		FString Name;
		int32 Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when we reach a named marker on the timeline */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when we reach a named marker on the timeline" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTimelineMarker constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTimelineMarker constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTimelineMarker Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineMarker_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineMarker_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnTimelineMarker Property Definitions **********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio, nullptr, "OnTimelineMarker__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_FMODStudio_eventOnTimelineMarker_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_FMODStudio_eventOnTimelineMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnTimelineMarker *******************************************************

// ********** Begin Delegate FOnTimelineBeat *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_FMODStudio_eventOnTimelineBeat_Parms
	{
		int32 Bar;
		int32 Beat;
		int32 Position;
		float Tempo;
		int32 TimeSignatureUpper;
		int32 TimeSignatureLower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when we reach a beat on the timeline */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when we reach a beat on the timeline" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTimelineBeat constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Bar;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Beat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tempo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeSignatureUpper;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeSignatureLower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTimelineBeat constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTimelineBeat Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Bar = { "Bar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, Bar), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Beat = { "Beat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, Beat), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Tempo = { "Tempo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, Tempo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TimeSignatureUpper = { "TimeSignatureUpper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, TimeSignatureUpper), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TimeSignatureLower = { "TimeSignatureLower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FMODStudio_eventOnTimelineBeat_Parms, TimeSignatureLower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bar,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Beat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tempo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TimeSignatureUpper,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TimeSignatureLower,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnTimelineBeat Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio, nullptr, "OnTimelineBeat__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_FMODStudio_eventOnTimelineBeat_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_FMODStudio_eventOnTimelineBeat_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnTimelineBeat *********************************************************

// ********** Begin Class UFMODAudioComponent Function GetLength ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_GetLength_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventGetLength_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the event length in milliseconds. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the event length in milliseconds." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLength constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLength constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLength Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLength Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "GetLength", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventGetLength_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventGetLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetLength(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execGetLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLength();
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function GetLength *************************************

// ********** Begin Class UFMODAudioComponent Function GetParameter ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_GetParameter_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventGetParameter_Parms
	{
		FName Name;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Will be deprecated in FMOD 2.01, use `GetParameterValue(FName, float, float)` instead.\n     * Get parameter value from the Event.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be deprecated in FMOD 2.01, use `GetParameterValue(FName, float, float)` instead.\nGet parameter value from the Event." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetParameter constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParameter constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParameter Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetParameter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParameter Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "GetParameter", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventGetParameter_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventGetParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetParameter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execGetParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetParameter(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function GetParameter **********************************

// ********** Begin Class UFMODAudioComponent Function GetParameterValue ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventGetParameterValue_Parms
	{
		FName Name;
		float UserValue;
		float FinalValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get parameter value from the Event.\n     * @param Name - Name of parameter\n     * @param UserValue - Parameter value as set from the public API.\n     * @param FinalValue - Final combined parameter value.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get parameter value from the Event.\n@param Name - Name of parameter\n@param UserValue - Parameter value as set from the public API.\n@param FinalValue - Final combined parameter value." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetParameterValue constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UserValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParameterValue constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParameterValue Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetParameterValue_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UserValue = { "UserValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetParameterValue_Parms, UserValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FinalValue = { "FinalValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetParameterValue_Parms, FinalValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FinalValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParameterValue Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "GetParameterValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventGetParameterValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventGetParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execGetParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_UserValue);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FinalValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetParameterValue(Z_Param_Name,Z_Param_Out_UserValue,Z_Param_Out_FinalValue);
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function GetParameterValue *****************************

// ********** Begin Class UFMODAudioComponent Function GetPaused ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_GetPaused_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventGetPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the paused state of the audio component. Returns false if internal getPaused query fails. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the paused state of the audio component. Returns false if internal getPaused query fails." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPaused constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FMODAudioComponent_eventGetPaused_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPaused constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPaused Property Definitions ****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODAudioComponent_eventGetPaused_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPaused Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "GetPaused", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventGetPaused_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventGetPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetPaused(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execGetPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPaused();
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function GetPaused *************************************

// ********** Begin Class UFMODAudioComponent Function GetProperty *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_GetProperty_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventGetProperty_Parms
	{
		TEnumAsByte<EFMODEventProperty::Type> Property;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get a property of the Event. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a property of the Event." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetProperty constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Property;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProperty constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProperty Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetProperty_Parms, Property), Z_Construct_UEnum_FMODStudio_EFMODEventProperty, METADATA_PARAMS(0, nullptr) }; // bc3a520fe37d63ef0f6be225b65188b98669d7d4
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetProperty_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetProperty Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "GetProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventGetProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventGetProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execGetProperty)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Property);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetProperty(EFMODEventProperty::Type(Z_Param_Property));
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function GetProperty ***********************************

// ********** Begin Class UFMODAudioComponent Function GetTimelinePosition *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventGetTimelinePosition_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the timeline position in milliseconds. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the timeline position in milliseconds." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTimelinePosition constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTimelinePosition constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTimelinePosition Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventGetTimelinePosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTimelinePosition Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "GetTimelinePosition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventGetTimelinePosition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventGetTimelinePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execGetTimelinePosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTimelinePosition();
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function GetTimelinePosition ***************************

// ********** Begin Class UFMODAudioComponent Function IsPlaying ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_IsPlaying_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Return true if this component is currently playing an event. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return true if this component is currently playing an event." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlaying constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FMODAudioComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlaying constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlaying Property Definitions ****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODAudioComponent_eventIsPlaying_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPlaying Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "IsPlaying", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventIsPlaying_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_IsPlaying(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function IsPlaying *************************************

// ********** Begin Class UFMODAudioComponent Function KeyOff **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_KeyOff_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  Allow an event to continue past a sustain point. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow an event to continue past a sustain point." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function KeyOff constinit property declarations ********************************
// ********** End Function KeyOff constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "KeyOff", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UFMODAudioComponent_KeyOff(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execKeyOff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->KeyOff();
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function KeyOff ****************************************

// ********** Begin Class UFMODAudioComponent Function Play ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_Play_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Start a sound playing on an audio component. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start a sound playing on an audio component." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Play constinit property declarations **********************************
// ********** End Function Play constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "Play", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UFMODAudioComponent_Play(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function Play ******************************************

// ********** Begin Class UFMODAudioComponent Function Release *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_Release_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Release constinit property declarations *******************************
// ********** End Function Release constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "Release", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UFMODAudioComponent_Release(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execRelease)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Release();
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function Release ***************************************

// ********** Begin Class UFMODAudioComponent Function SetEvent ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_SetEvent_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventSetEvent_Parms
	{
		UFMODEvent* NewEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** New Event to be used by the FMODAudioComponent. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New Event to be used by the FMODAudioComponent." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetEvent constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEvent constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEvent Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewEvent = { "NewEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetEvent_Parms, NewEvent), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewEvent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEvent Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetEvent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventSetEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventSetEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetEvent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execSetEvent)
{
	P_GET_OBJECT(UFMODEvent,Z_Param_NewEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEvent(Z_Param_NewEvent);
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function SetEvent **************************************

// ********** Begin Class UFMODAudioComponent Function SetParameter ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_SetParameter_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventSetParameter_Parms
	{
		FName Name;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set a parameter of the Event. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a parameter of the Event." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetParameter constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetParameter constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetParameter Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetParameter_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetParameter Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetParameter", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventSetParameter_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventSetParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetParameter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execSetParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParameter(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function SetParameter **********************************

// ********** Begin Class UFMODAudioComponent Function SetPaused ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_SetPaused_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventSetPaused_Parms
	{
		bool paused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pause/Unpause an audio component. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pause/Unpause an audio component." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetPaused constinit property declarations *****************************
	static void NewProp_paused_SetBit(void* Obj)
	{
		((FMODAudioComponent_eventSetPaused_Parms*)Obj)->paused = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_paused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPaused constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPaused Property Definitions ****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_paused = { "paused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODAudioComponent_eventSetPaused_Parms), &UHT_STATICS::NewProp_paused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_paused,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPaused Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetPaused", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventSetPaused_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventSetPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPaused(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execSetPaused)
{
	P_GET_UBOOL(Z_Param_paused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPaused(Z_Param_paused);
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function SetPaused *************************************

// ********** Begin Class UFMODAudioComponent Function SetPitch ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_SetPitch_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventSetPitch_Parms
	{
		float pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the pitch multiplier. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the pitch multiplier." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetPitch constinit property declarations ******************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPitch constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPitch Property Definitions *****************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_pitch = { "pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetPitch_Parms, pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_pitch,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPitch Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetPitch", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventSetPitch_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventSetPitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetPitch(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execSetPitch)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPitch(Z_Param_pitch);
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function SetPitch **************************************

// ********** Begin Class UFMODAudioComponent Function SetProgrammerSoundName **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventSetProgrammerSoundName_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the sound name to use for programmer sound.  Will look up the name in any loaded audio table. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the sound name to use for programmer sound.  Will look up the name in any loaded audio table." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetProgrammerSoundName constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetProgrammerSoundName constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetProgrammerSoundName Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetProgrammerSoundName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetProgrammerSoundName Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetProgrammerSoundName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventSetProgrammerSoundName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventSetProgrammerSoundName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execSetProgrammerSoundName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProgrammerSoundName(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function SetProgrammerSoundName ************************

// ********** Begin Class UFMODAudioComponent Function SetProperty *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_SetProperty_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventSetProperty_Parms
	{
		TEnumAsByte<EFMODEventProperty::Type> Property;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set a property of the Event. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a property of the Event." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetProperty constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Property;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetProperty constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetProperty Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetProperty_Parms, Property), Z_Construct_UEnum_FMODStudio_EFMODEventProperty, METADATA_PARAMS(0, nullptr) }; // bc3a520fe37d63ef0f6be225b65188b98669d7d4
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetProperty Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventSetProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventSetProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execSetProperty)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Property);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProperty(EFMODEventProperty::Type(Z_Param_Property),Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function SetProperty ***********************************

// ********** Begin Class UFMODAudioComponent Function SetTimelinePosition *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventSetTimelinePosition_Parms
	{
		int32 Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the timeline position in milliseconds. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the timeline position in milliseconds." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetTimelinePosition constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTimelinePosition constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTimelinePosition Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetTimelinePosition_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTimelinePosition Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetTimelinePosition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventSetTimelinePosition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventSetTimelinePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execSetTimelinePosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimelinePosition(Z_Param_Time);
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function SetTimelinePosition ***************************

// ********** Begin Class UFMODAudioComponent Function SetVolume ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_SetVolume_Statics
struct UHT_STATICS
{
	struct FMODAudioComponent_eventSetVolume_Parms
	{
		float volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the volume level. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the volume level." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetVolume constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVolume constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVolume Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODAudioComponent_eventSetVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_volume,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetVolume Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "SetVolume", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODAudioComponent_eventSetVolume_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODAudioComponent_eventSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODAudioComponent_SetVolume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execSetVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolume(Z_Param_volume);
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function SetVolume *************************************

// ********** Begin Class UFMODAudioComponent Function Stop ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODAudioComponent_Stop_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop an audio component playing its sound cue, issue any delegates if needed. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop an audio component playing its sound cue, issue any delegates if needed." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODAudioComponent, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UFMODAudioComponent_Stop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODAudioComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UFMODAudioComponent Function Stop ******************************************

// ********** Begin Class UFMODAudioComponent ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UFMODAudioComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audio Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Plays FMOD Studio events.\n */" },
#endif
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "FMODAudioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plays FMOD Studio events." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "Category", "FMODAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The event asset to use for this sound. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The event asset to use for this sound." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCache_MetaData[] = {
		{ "Category", "FMODAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event parameter cache. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event parameter cache." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutomatedParameterCache_MetaData[] = {
		{ "Category", "FMODAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event parameter cache for automated parameters. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event parameter cache for automated parameters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgrammerSoundName_MetaData[] = {
		{ "Category", "FMODAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sound name used for programmer sound.  Will look up the name in any loaded audio table. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound name used for programmer sound.  Will look up the name in any loaded audio table." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTimelineCallbacks_MetaData[] = {
		{ "Category", "FMODAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable timeline callbacks for this sound, so that OnTimelineMarker and OnTimelineBeat can be used. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable timeline callbacks for this sound, so that OnTimelineMarker and OnTimelineBeat can be used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Auto destroy this component on completion. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto destroy this component on completion." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop sound when owner is destroyed. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop sound when owner is destroyed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEventStopped_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when an event stops, either because it played to completion or because a Stop() call turned it off early. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an event stops, either because it played to completion or because a Stop() call turned it off early." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSoundStopped_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when a sound stops. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a sound stops." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetMarker_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when one of an EventInstance's internal Channels passes an asset marker. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when one of an EventInstance's internal Channels passes an asset marker." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimelineMarker_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when we reach a named marker (if bEnableTimelineCallbacks is true). */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when we reach a named marker (if bEnableTimelineCallbacks is true)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimelineBeat_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when we reach a beat of a tempo (if bEnableTimelineCallbacks is true). */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when we reach a beat of a tempo (if bEnableTimelineCallbacks is true)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationDetails_MetaData[] = {
		{ "Category", "FMODAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FMOD Custom Attenuation Details. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMOD Custom Attenuation Details." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionDetails_MetaData[] = {
		{ "Category", "FMODAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FMOD Custom Occlusion Details. */" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAudioComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMOD Custom Occlusion Details." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UFMODAudioComponent constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterCache_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterCache;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutomatedParameterCache_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AutomatedParameterCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AutomatedParameterCache;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProgrammerSoundName;
	static void NewProp_bEnableTimelineCallbacks_SetBit(void* Obj)
	{
		((UFMODAudioComponent*)Obj)->bEnableTimelineCallbacks = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTimelineCallbacks;
	static void NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UFMODAudioComponent*)Obj)->bAutoDestroy = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
	static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UFMODAudioComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventStopped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSoundStopped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetMarker;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimelineMarker;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimelineBeat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OcclusionDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFMODAudioComponent constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetLength"), .Pointer = &UFMODAudioComponent::execGetLength },
		{ .NameUTF8 = UTF8TEXT("GetParameter"), .Pointer = &UFMODAudioComponent::execGetParameter },
		{ .NameUTF8 = UTF8TEXT("GetParameterValue"), .Pointer = &UFMODAudioComponent::execGetParameterValue },
		{ .NameUTF8 = UTF8TEXT("GetPaused"), .Pointer = &UFMODAudioComponent::execGetPaused },
		{ .NameUTF8 = UTF8TEXT("GetProperty"), .Pointer = &UFMODAudioComponent::execGetProperty },
		{ .NameUTF8 = UTF8TEXT("GetTimelinePosition"), .Pointer = &UFMODAudioComponent::execGetTimelinePosition },
		{ .NameUTF8 = UTF8TEXT("IsPlaying"), .Pointer = &UFMODAudioComponent::execIsPlaying },
		{ .NameUTF8 = UTF8TEXT("KeyOff"), .Pointer = &UFMODAudioComponent::execKeyOff },
		{ .NameUTF8 = UTF8TEXT("Play"), .Pointer = &UFMODAudioComponent::execPlay },
		{ .NameUTF8 = UTF8TEXT("Release"), .Pointer = &UFMODAudioComponent::execRelease },
		{ .NameUTF8 = UTF8TEXT("SetEvent"), .Pointer = &UFMODAudioComponent::execSetEvent },
		{ .NameUTF8 = UTF8TEXT("SetParameter"), .Pointer = &UFMODAudioComponent::execSetParameter },
		{ .NameUTF8 = UTF8TEXT("SetPaused"), .Pointer = &UFMODAudioComponent::execSetPaused },
		{ .NameUTF8 = UTF8TEXT("SetPitch"), .Pointer = &UFMODAudioComponent::execSetPitch },
		{ .NameUTF8 = UTF8TEXT("SetProgrammerSoundName"), .Pointer = &UFMODAudioComponent::execSetProgrammerSoundName },
		{ .NameUTF8 = UTF8TEXT("SetProperty"), .Pointer = &UFMODAudioComponent::execSetProperty },
		{ .NameUTF8 = UTF8TEXT("SetTimelinePosition"), .Pointer = &UFMODAudioComponent::execSetTimelinePosition },
		{ .NameUTF8 = UTF8TEXT("SetVolume"), .Pointer = &UFMODAudioComponent::execSetVolume },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &UFMODAudioComponent::execStop },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetLength, "GetLength" }, // 025740a3710f4f0ecb111d13e3534c86a897157a
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetParameter, "GetParameter" }, // 0cc94099e59cdabb381cea9b5dd7672dc92b0545
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetParameterValue, "GetParameterValue" }, // 5465cdaa0fdaac661e964921ff2a38fc40f99bb4
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetPaused, "GetPaused" }, // 1774cd00c81534842bc03b16d9b36a138edd57d4
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetProperty, "GetProperty" }, // d783c79ee3d4c9722fa7c272128e2d6b15e83690
		{ &Z_Construct_UFunction_UFMODAudioComponent_GetTimelinePosition, "GetTimelinePosition" }, // 1eaa3a06da39d091c86e5678919538d5f42a18b5
		{ &Z_Construct_UFunction_UFMODAudioComponent_IsPlaying, "IsPlaying" }, // b1300163ed8cc254533f127fb81d91bdcef7ebdb
		{ &Z_Construct_UFunction_UFMODAudioComponent_KeyOff, "KeyOff" }, // 11c02ddbe27f574f99fddd28013c02fab2f1188b
		{ &Z_Construct_UFunction_UFMODAudioComponent_Play, "Play" }, // 1b43489e0ec6dc207b8b8d4bee087a52ad87b758
		{ &Z_Construct_UFunction_UFMODAudioComponent_Release, "Release" }, // 520c02643c2e9fce89f04ce11205fcbfc40cd8d9
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetEvent, "SetEvent" }, // df3451939bc2b44053d71b441f087285a9a355de
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetParameter, "SetParameter" }, // c8e95c8f2f3a28ac4063ba1c33522f039dc95517
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetPaused, "SetPaused" }, // 69475d674947aca5d43125e56da14498ba43eeb8
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetPitch, "SetPitch" }, // 6a166b8358e0557d8f0f25853bb0bfe7a598bdd2
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetProgrammerSoundName, "SetProgrammerSoundName" }, // 1a202b357ee85b1145a919d64783ac2504375a20
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetProperty, "SetProperty" }, // 59c8bcf5420c66f3c2d301fe296f835e81086654
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetTimelinePosition, "SetTimelinePosition" }, // 7b9bfba61d2021d5726c839896853b23ab2bd611
		{ &Z_Construct_UFunction_UFMODAudioComponent_SetVolume, "SetVolume" }, // d9c9467188187ca12d9d827800fdcca2438d2666
		{ &Z_Construct_UFunction_UFMODAudioComponent_Stop, "Stop" }, // 85882ab3d5cb2f1a9615f0f1547a3769a49e60e5
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAudioComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UFMODAudioComponent Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioComponent, Event), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ParameterCache_ValueProp = { "ParameterCache", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParameterCache_Key_KeyProp = { "ParameterCache_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ParameterCache = { "ParameterCache", nullptr, (EPropertyFlags)0x0010020000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioComponent, ParameterCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterCache_MetaData), NewProp_ParameterCache_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AutomatedParameterCache_ValueProp = { "AutomatedParameterCache", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AutomatedParameterCache_Key_KeyProp = { "AutomatedParameterCache_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_AutomatedParameterCache = { "AutomatedParameterCache", nullptr, (EPropertyFlags)0x0010020000020015, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioComponent, AutomatedParameterCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutomatedParameterCache_MetaData), NewProp_AutomatedParameterCache_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ProgrammerSoundName = { "ProgrammerSoundName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioComponent, ProgrammerSoundName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgrammerSoundName_MetaData), NewProp_ProgrammerSoundName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableTimelineCallbacks = { "bEnableTimelineCallbacks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFMODAudioComponent), &UHT_STATICS::NewProp_bEnableTimelineCallbacks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTimelineCallbacks_MetaData), NewProp_bEnableTimelineCallbacks_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFMODAudioComponent), &UHT_STATICS::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDestroy_MetaData), NewProp_bAutoDestroy_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFMODAudioComponent), &UHT_STATICS::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenOwnerDestroyed_MetaData), NewProp_bStopWhenOwnerDestroyed_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnEventStopped = { "OnEventStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioComponent, OnEventStopped), Z_Construct_UDelegateFunction_FMODStudio_OnEventStopped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEventStopped_MetaData), NewProp_OnEventStopped_MetaData) }; // 12bcf88a62d4d1398feb67c7e1ee7b33fc72d95c
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSoundStopped = { "OnSoundStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioComponent, OnSoundStopped), Z_Construct_UDelegateFunction_FMODStudio_OnSoundStopped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSoundStopped_MetaData), NewProp_OnSoundStopped_MetaData) }; // 9443d7bb12f039fb1086b44702b068cbc11837fb
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnAssetMarker = { "OnAssetMarker", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioComponent, OnAssetMarker), Z_Construct_UDelegateFunction_FMODStudio_OnAssetMarker__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAssetMarker_MetaData), NewProp_OnAssetMarker_MetaData) }; // 33e7bae5f5772b9c453e4835f278a22d45b6b48a
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTimelineMarker = { "OnTimelineMarker", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioComponent, OnTimelineMarker), Z_Construct_UDelegateFunction_FMODStudio_OnTimelineMarker__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimelineMarker_MetaData), NewProp_OnTimelineMarker_MetaData) }; // b3b90643dc628372388f993d2ca173a608f3a47e
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTimelineBeat = { "OnTimelineBeat", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioComponent, OnTimelineBeat), Z_Construct_UDelegateFunction_FMODStudio_OnTimelineBeat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimelineBeat_MetaData), NewProp_OnTimelineBeat_MetaData) }; // a417553413a3494b4c17b5f5666983e1ddbab611
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AttenuationDetails = { "AttenuationDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioComponent, AttenuationDetails), Z_Construct_UScriptStruct_FFMODAttenuationDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationDetails_MetaData), NewProp_AttenuationDetails_MetaData) }; // 6d5e086ccb834cf573b118dbefce3dc8a94e4519
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OcclusionDetails = { "OcclusionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioComponent, OcclusionDetails), Z_Construct_UScriptStruct_FFMODOcclusionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionDetails_MetaData), NewProp_OcclusionDetails_MetaData) }; // 4a9a1ea98ab63e2294b8a9608d2ba9dc87fe6462
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParameterCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParameterCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParameterCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutomatedParameterCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutomatedParameterCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutomatedParameterCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProgrammerSoundName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableTimelineCallbacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStopWhenOwnerDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnEventStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSoundStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnAssetMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTimelineMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTimelineBeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AttenuationDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OcclusionDetails,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UFMODAudioComponent Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UFMODAudioComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UFMODAudioComponent_StaticRegisterNativesUFMODAudioComponent()
{
	UClass* Class = UFMODAudioComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODAudioComponent;
UClass* Z_Construct_UClass_UFMODAudioComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UFMODAudioComponent;
		if (!Z_Registration_Info_UClass_UFMODAudioComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("FMODAudioComponent"),
				Z_Registration_Info_UClass_UFMODAudioComponent.InnerSingleton,
				UFMODAudioComponent_StaticRegisterNativesUFMODAudioComponent,
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
		return Z_Registration_Info_UClass_UFMODAudioComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UFMODAudioComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAudioComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODAudioComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFMODAudioComponent);
UFMODAudioComponent::~UFMODAudioComponent() {}
// ********** End Class UFMODAudioComponent ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h__Script_FMODStudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_FMODStudio_EFMODEventProperty, TEXT("EFMODEventProperty"), &ZRIE_EFMODEventProperty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3157938703U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FFMODAttenuationDetails, Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics::NewStructOps, TEXT("FMODAttenuationDetails"),&Z_Registration_Info_UScriptStruct_FFMODAttenuationDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODAttenuationDetails), 1834879084U) },
		{ Z_Construct_UScriptStruct_FFMODOcclusionDetails, Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics::NewStructOps, TEXT("FMODOcclusionDetails"),&Z_Registration_Info_UScriptStruct_FFMODOcclusionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODOcclusionDetails), 1251614377U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAudioComponent, TEXT("UFMODAudioComponent"), &Z_Registration_Info_UClass_UFMODAudioComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAudioComponent), 1652480372U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h__Script_FMODStudio_25d383d6dea2d0dffb2f6afedeb68808f5b18337{
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
