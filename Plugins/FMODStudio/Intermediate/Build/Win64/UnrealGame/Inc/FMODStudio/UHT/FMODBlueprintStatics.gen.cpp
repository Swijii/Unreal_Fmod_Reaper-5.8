// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODBlueprintStatics.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODBlueprintStatics() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase);
FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventProperty(ETypeConstructPhase);
FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMOD_STUDIO_STOP_MODE(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBlueprintStatics(ETypeConstructPhase);
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventInstance(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBank(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBlueprintStatics(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBus(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODVCA(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FFMODEventInstance ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FFMODEventInstance_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FFMODEventInstance>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFMODEventInstance); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFMODEventInstance constinit property declarations ****************
// ********** End ScriptStruct FFMODEventInstance constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	&NewStructOps,
	"FMODEventInstance",
	nullptr,
	0,
	DataSizeOf<FFMODEventInstance>(),
	alignof(FFMODEventInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODEventInstance;
UScriptStruct* Z_Construct_UScriptStruct_FFMODEventInstance(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FFMODEventInstance.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FFMODEventInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventInstance, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("FMODEventInstance"));
		}
		return Z_Registration_Info_UScriptStruct_FFMODEventInstance.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FFMODEventInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODEventInstance.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFMODEventInstance.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FFMODEventInstance **************************************************

// ********** Begin Enum EFMOD_STUDIO_STOP_MODE ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_FMODStudio_EFMOD_STUDIO_STOP_MODE_Statics
template<> FMODSTUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EFMOD_STUDIO_STOP_MODE>()
{
	return Z_Construct_UEnum_FMODStudio_EFMOD_STUDIO_STOP_MODE(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ALLOWFADEOUT.Name", "ALLOWFADEOUT" },
		{ "BlueprintType", "true" },
		{ "IMMEDIATE.Name", "IMMEDIATE" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ALLOWFADEOUT", (int64)ALLOWFADEOUT },
		{ "IMMEDIATE", (int64)IMMEDIATE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	"EFMOD_STUDIO_STOP_MODE",
	"EFMOD_STUDIO_STOP_MODE",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EFMOD_STUDIO_STOP_MODE;
UEnum* Z_Construct_UEnum_FMODStudio_EFMOD_STUDIO_STOP_MODE(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EFMOD_STUDIO_STOP_MODE.OuterSingleton)
		{
			ZRIE_EFMOD_STUDIO_STOP_MODE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMOD_STUDIO_STOP_MODE, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("EFMOD_STUDIO_STOP_MODE"));
		}
		return ZRIE_EFMOD_STUDIO_STOP_MODE.OuterSingleton;
	}
	if (!ZRIE_EFMOD_STUDIO_STOP_MODE.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EFMOD_STUDIO_STOP_MODE.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EFMOD_STUDIO_STOP_MODE.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EFMOD_STUDIO_STOP_MODE ******************************************************

// ********** Begin Class UFMODBlueprintStatics Function BusSetMute ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_BusSetMute_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventBusSetMute_Parms
	{
		UFMODBus* Bus;
		bool bMute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Bus" },
		{ "Comment", "/** Mute/Unmute this bus\n\x09 * @param Bus - bus to use\n\x09 * @param bMute - mute\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Mute/Unmute this bus\n@param Bus - bus to use\n@param bMute - mute" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function BusSetMute constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
	static void NewProp_bMute_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventBusSetMute_Parms*)Obj)->bMute = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BusSetMute constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BusSetMute Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventBusSetMute_Parms, Bus), Z_Construct_UClass_UFMODBus, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventBusSetMute_Parms), &UHT_STATICS::NewProp_bMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMute,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BusSetMute Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "BusSetMute", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventBusSetMute_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventBusSetMute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_BusSetMute(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execBusSetMute)
{
	P_GET_OBJECT(UFMODBus,Z_Param_Bus);
	P_GET_UBOOL(Z_Param_bMute);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::BusSetMute(Z_Param_Bus,Z_Param_bMute);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function BusSetMute **********************************

// ********** Begin Class UFMODBlueprintStatics Function BusSetPaused ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_BusSetPaused_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventBusSetPaused_Parms
	{
		UFMODBus* Bus;
		bool bPaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Bus" },
		{ "Comment", "/** Pause/Unpause all events going through this bus\n\x09 * @param Bus - bus to use\n\x09 * @param bPaused - paused\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Pause/Unpause all events going through this bus\n@param Bus - bus to use\n@param bPaused - paused" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function BusSetPaused constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
	static void NewProp_bPaused_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventBusSetPaused_Parms*)Obj)->bPaused = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BusSetPaused constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BusSetPaused Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventBusSetPaused_Parms, Bus), Z_Construct_UClass_UFMODBus, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventBusSetPaused_Parms), &UHT_STATICS::NewProp_bPaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPaused,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BusSetPaused Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "BusSetPaused", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventBusSetPaused_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventBusSetPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_BusSetPaused(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execBusSetPaused)
{
	P_GET_OBJECT(UFMODBus,Z_Param_Bus);
	P_GET_UBOOL(Z_Param_bPaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::BusSetPaused(Z_Param_Bus,Z_Param_bPaused);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function BusSetPaused ********************************

// ********** Begin Class UFMODBlueprintStatics Function BusSetVolume ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_BusSetVolume_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventBusSetVolume_Parms
	{
		UFMODBus* Bus;
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Bus" },
		{ "Comment", "/** Set volume on a bus\n\x09 * @param Bus - bus to use\n\x09 * @param Volume - volume\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Set volume on a bus\n@param Bus - bus to use\n@param Volume - volume" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function BusSetVolume constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BusSetVolume constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BusSetVolume Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventBusSetVolume_Parms, Bus), Z_Construct_UClass_UFMODBus, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventBusSetVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BusSetVolume Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "BusSetVolume", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventBusSetVolume_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventBusSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_BusSetVolume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execBusSetVolume)
{
	P_GET_OBJECT(UFMODBus,Z_Param_Bus);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::BusSetVolume(Z_Param_Bus,Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function BusSetVolume ********************************

// ********** Begin Class UFMODBlueprintStatics Function BusStopAllEvents **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_BusStopAllEvents_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventBusStopAllEvents_Parms
	{
		UFMODBus* Bus;
		TEnumAsByte<EFMOD_STUDIO_STOP_MODE> stopMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|Bus" },
		{ "Comment", "/** Stops all EventInstances routed into the bus\n\x09 * @param Bus - bus to use\n\x09 * @param stopMode - desired stop mode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Stops all EventInstances routed into the bus\n@param Bus - bus to use\n@param stopMode - desired stop mode" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function BusStopAllEvents constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_stopMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BusStopAllEvents constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BusStopAllEvents Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventBusStopAllEvents_Parms, Bus), Z_Construct_UClass_UFMODBus, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_stopMode = { "stopMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventBusStopAllEvents_Parms, stopMode), Z_Construct_UEnum_FMODStudio_EFMOD_STUDIO_STOP_MODE, METADATA_PARAMS(0, nullptr) }; // bb6cf1b204127d992f11ae75f61b3906665d0f04
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_stopMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BusStopAllEvents Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "BusStopAllEvents", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventBusStopAllEvents_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventBusStopAllEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_BusStopAllEvents(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execBusStopAllEvents)
{
	P_GET_OBJECT(UFMODBus,Z_Param_Bus);
	P_GET_PROPERTY(FByteProperty,Z_Param_stopMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::BusStopAllEvents(Z_Param_Bus,EFMOD_STUDIO_STOP_MODE(Z_Param_stopMode));
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function BusStopAllEvents ****************************

// ********** Begin Class UFMODBlueprintStatics Function EventInstanceGetParameter *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceGetParameter_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstanceGetParameter_Parms
	{
		FFMODEventInstance EventInstance;
		FName Name;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Will be deprecated in FMOD 2.01, use `EventInstanceGetParameterValue(FFMODEventInstance, FName, float, float)` instead.\n     * Get a parameter on an FMOD Event Instance.\n\x09 * @param EventInstance - Event instance\n\x09 * @param Name - Name of parameter\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Will be deprecated in FMOD 2.01, use `EventInstanceGetParameterValue(FFMODEventInstance, FName, float, float)` instead.\nGet a parameter on an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Name - Name of parameter" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstanceGetParameter constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstanceGetParameter constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstanceGetParameter Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceGetParameter_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceGetParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceGetParameter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstanceGetParameter Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstanceGetParameter", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstanceGetParameter_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstanceGetParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceGetParameter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstanceGetParameter)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UFMODBlueprintStatics::EventInstanceGetParameter(Z_Param_EventInstance,Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstanceGetParameter *******************

// ********** Begin Class UFMODBlueprintStatics Function EventInstanceGetParameterValue ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceGetParameterValue_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstanceGetParameterValue_Parms
	{
		FFMODEventInstance EventInstance;
		FName Name;
		float UserValue;
		float FinalValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Get a parameter on an FMOD Event Instance.\n\x09 * @param EventInstance - Event instance\n\x09 * @param Name - Name of parameter\n     * @param UserValue - Parameter value as set from the public API.\n     * @param FinalValue - Final combined parameter value.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Get a parameter on an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Name - Name of parameter\n@param UserValue - Parameter value as set from the public API.\n@param FinalValue - Final combined parameter value." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstanceGetParameterValue constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UserValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstanceGetParameterValue constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstanceGetParameterValue Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceGetParameterValue_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceGetParameterValue_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UserValue = { "UserValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceGetParameterValue_Parms, UserValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FinalValue = { "FinalValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceGetParameterValue_Parms, FinalValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FinalValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstanceGetParameterValue Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstanceGetParameterValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstanceGetParameterValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstanceGetParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceGetParameterValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstanceGetParameterValue)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_UserValue);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FinalValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::EventInstanceGetParameterValue(Z_Param_EventInstance,Z_Param_Name,Z_Param_Out_UserValue,Z_Param_Out_FinalValue);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstanceGetParameterValue **************

// ********** Begin Class UFMODBlueprintStatics Function EventInstanceIsValid **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceIsValid_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstanceIsValid_Parms
	{
		FFMODEventInstance EventInstance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Returns whether this FMOD Event Instance is valid.  The instance will be invalidated when the sound stops.\n\x09 * @param EventInstance - Event instance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Returns whether this FMOD Event Instance is valid.  The instance will be invalidated when the sound stops.\n@param EventInstance - Event instance" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstanceIsValid constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventEventInstanceIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstanceIsValid constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstanceIsValid Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceIsValid_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventEventInstanceIsValid_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstanceIsValid Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstanceIsValid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstanceIsValid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstanceIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceIsValid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstanceIsValid)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFMODBlueprintStatics::EventInstanceIsValid(Z_Param_EventInstance);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstanceIsValid ************************

// ********** Begin Class UFMODBlueprintStatics Function EventInstanceKeyOff ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceKeyOff_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstanceKeyOff_Parms
	{
		FFMODEventInstance EventInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Allow an FMOD Event Instance to continue past a sustain point.\n\x09 * @param EventInstance - Event instance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Allow an FMOD Event Instance to continue past a sustain point.\n@param EventInstance - Event instance" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstanceKeyOff constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstanceKeyOff constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstanceKeyOff Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceKeyOff_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstanceKeyOff Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstanceKeyOff", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstanceKeyOff_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstanceKeyOff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceKeyOff(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstanceKeyOff)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::EventInstanceKeyOff(Z_Param_EventInstance);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstanceKeyOff *************************

// ********** Begin Class UFMODBlueprintStatics Function EventInstancePlay *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstancePlay_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstancePlay_Parms
	{
		FFMODEventInstance EventInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Plays an FMOD Event Instance.\n\x09 * @param EventInstance - Event instance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Plays an FMOD Event Instance.\n@param EventInstance - Event instance" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstancePlay constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstancePlay constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstancePlay Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstancePlay_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstancePlay Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstancePlay", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstancePlay_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstancePlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstancePlay(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstancePlay)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::EventInstancePlay(Z_Param_EventInstance);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstancePlay ***************************

// ********** Begin Class UFMODBlueprintStatics Function EventInstanceRelease **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceRelease_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstanceRelease_Parms
	{
		FFMODEventInstance EventInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Release an FMOD Event Instance.\n    * @param EventInstance - Event instance\n    */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Release an FMOD Event Instance.\n@param EventInstance - Event instance" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstanceRelease constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstanceRelease constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstanceRelease Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceRelease_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstanceRelease Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstanceRelease", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstanceRelease_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstanceRelease_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceRelease(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstanceRelease)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::EventInstanceRelease(Z_Param_EventInstance);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstanceRelease ************************

// ********** Begin Class UFMODBlueprintStatics Function EventInstanceSetParameter *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetParameter_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstanceSetParameter_Parms
	{
		FFMODEventInstance EventInstance;
		FName Name;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Set a parameter on an FMOD Event Instance.\n\x09 * @param EventInstance - Event instance\n\x09 * @param Name - Name of parameter\n\x09 * @param Value - Value of parameter\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Set a parameter on an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Name - Name of parameter\n@param Value - Value of parameter" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstanceSetParameter constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstanceSetParameter constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstanceSetParameter Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetParameter_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetParameter_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstanceSetParameter Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstanceSetParameter", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstanceSetParameter_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstanceSetParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetParameter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstanceSetParameter)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::EventInstanceSetParameter(Z_Param_EventInstance,Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstanceSetParameter *******************

// ********** Begin Class UFMODBlueprintStatics Function EventInstanceSetPaused ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPaused_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstanceSetPaused_Parms
	{
		FFMODEventInstance EventInstance;
		bool Paused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Pause/Unpause an FMOD Event Instance.\n\x09 * @param EventInstance - Event instance\n\x09 * @param Paused - Whether to pause or unpause\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Pause/Unpause an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Paused - Whether to pause or unpause" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstanceSetPaused constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static void NewProp_Paused_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventEventInstanceSetPaused_Parms*)Obj)->Paused = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Paused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstanceSetPaused constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstanceSetPaused Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetPaused_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Paused = { "Paused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventEventInstanceSetPaused_Parms), &UHT_STATICS::NewProp_Paused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Paused,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstanceSetPaused Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstanceSetPaused", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstanceSetPaused_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstanceSetPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPaused(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstanceSetPaused)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_GET_UBOOL(Z_Param_Paused);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::EventInstanceSetPaused(Z_Param_EventInstance,Z_Param_Paused);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstanceSetPaused **********************

// ********** Begin Class UFMODBlueprintStatics Function EventInstanceSetPitch *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPitch_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstanceSetPitch_Parms
	{
		FFMODEventInstance EventInstance;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Set pitch on an FMOD Event Instance.\n\x09 * @param EventInstance - Event instance\n\x09 * @param Value - Volume to set\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Set pitch on an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Value - Volume to set" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstanceSetPitch constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstanceSetPitch constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstanceSetPitch Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetPitch_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetPitch_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstanceSetPitch Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstanceSetPitch", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstanceSetPitch_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstanceSetPitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPitch(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstanceSetPitch)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::EventInstanceSetPitch(Z_Param_EventInstance,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstanceSetPitch ***********************

// ********** Begin Class UFMODBlueprintStatics Function EventInstanceSetProperty ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetProperty_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstanceSetProperty_Parms
	{
		FFMODEventInstance EventInstance;
		TEnumAsByte<EFMODEventProperty::Type> Property;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Set an FMOD event property on an FMOD Event Instance.\n\x09* @param EventInstance - Event instance\n\x09* @param Property - Property to set\n\x09* @param Value - Value to set\n\x09*/" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Set an FMOD event property on an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Property - Property to set\n@param Value - Value to set" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstanceSetProperty constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Property;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstanceSetProperty constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstanceSetProperty Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetProperty_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetProperty_Parms, Property), Z_Construct_UEnum_FMODStudio_EFMODEventProperty, METADATA_PARAMS(0, nullptr) }; // 458408bb8ba16881b580831052e06b892ac8ae1e
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstanceSetProperty Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstanceSetProperty", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstanceSetProperty_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstanceSetProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetProperty(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstanceSetProperty)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_GET_PROPERTY(FByteProperty,Z_Param_Property);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::EventInstanceSetProperty(Z_Param_EventInstance,EFMODEventProperty::Type(Z_Param_Property),Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstanceSetProperty ********************

// ********** Begin Class UFMODBlueprintStatics Function EventInstanceSetTransform *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetTransform_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstanceSetTransform_Parms
	{
		FFMODEventInstance EventInstance;
		FTransform Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Set 3D attributes on a FMOD Event Instance.\n\x09 * @param EventInstance - Event instance\n\x09 * @param Location - Location to place event\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Set 3D attributes on a FMOD Event Instance.\n@param EventInstance - Event instance\n@param Location - Location to place event" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstanceSetTransform constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstanceSetTransform constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstanceSetTransform Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetTransform_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetTransform_Parms, Location), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstanceSetTransform Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstanceSetTransform", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstanceSetTransform_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstanceSetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetTransform(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstanceSetTransform)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::EventInstanceSetTransform(Z_Param_EventInstance,Z_Param_Out_Location);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstanceSetTransform *******************

// ********** Begin Class UFMODBlueprintStatics Function EventInstanceSetVolume ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetVolume_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstanceSetVolume_Parms
	{
		FFMODEventInstance EventInstance;
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Set volume on an FMOD Event Instance.\n\x09 * @param EventInstance - Event instance\n\x09 * @param Value - Volume to set\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Set volume on an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Value - Volume to set" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstanceSetVolume constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstanceSetVolume constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstanceSetVolume Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetVolume_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceSetVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstanceSetVolume Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstanceSetVolume", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstanceSetVolume_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstanceSetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetVolume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstanceSetVolume)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::EventInstanceSetVolume(Z_Param_EventInstance,Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstanceSetVolume **********************

// ********** Begin Class UFMODBlueprintStatics Function EventInstanceStop *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceStop_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventEventInstanceStop_Parms
	{
		FFMODEventInstance EventInstance;
		bool Release;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|EventInstance" },
		{ "Comment", "/** Stop an FMOD Event Instance.\n\x09 * @param EventInstance - Event instance\n     * @param Release - Whether to release the Event Instance\n\x09 */" },
		{ "CPP_Default_Release", "false" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Stop an FMOD Event Instance.\n@param EventInstance - Event instance\n@param Release - Whether to release the Event Instance" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EventInstanceStop constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventInstance;
	static void NewProp_Release_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventEventInstanceStop_Parms*)Obj)->Release = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Release;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EventInstanceStop constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EventInstanceStop Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EventInstance = { "EventInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventEventInstanceStop_Parms, EventInstance), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Release = { "Release", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventEventInstanceStop_Parms), &UHT_STATICS::NewProp_Release_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Release,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EventInstanceStop Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "EventInstanceStop", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventEventInstanceStop_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventEventInstanceStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceStop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execEventInstanceStop)
{
	P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance);
	P_GET_UBOOL(Z_Param_Release);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::EventInstanceStop(Z_Param_EventInstance,Z_Param_Release);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function EventInstanceStop ***************************

// ********** Begin Class UFMODBlueprintStatics Function FindAssetByName ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_FindAssetByName_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventFindAssetByName_Parms
	{
		FString Name;
		UFMODAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Find an asset by name.\n\x09 * @param EventName - The asset name\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Find an asset by name.\n@param EventName - The asset name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindAssetByName constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindAssetByName constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindAssetByName Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventFindAssetByName_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventFindAssetByName_Parms, ReturnValue), Z_Construct_UClass_UFMODAsset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindAssetByName Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "FindAssetByName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventFindAssetByName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventFindAssetByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_FindAssetByName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execFindAssetByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFMODAsset**)Z_Param__Result=UFMODBlueprintStatics::FindAssetByName(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function FindAssetByName *****************************

// ********** Begin Class UFMODBlueprintStatics Function FindEventByName ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_FindEventByName_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventFindEventByName_Parms
	{
		FString Name;
		UFMODEvent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Find an event by name.\n\x09 * @param EventName - The event name\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Find an event by name.\n@param EventName - The event name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindEventByName constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindEventByName constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindEventByName Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventFindEventByName_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventFindEventByName_Parms, ReturnValue), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindEventByName Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "FindEventByName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventFindEventByName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventFindEventByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_FindEventByName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execFindEventByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFMODEvent**)Z_Param__Result=UFMODBlueprintStatics::FindEventByName(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function FindEventByName *****************************

// ********** Begin Class UFMODBlueprintStatics Function FindEventInstances ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_FindEventInstances_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventFindEventInstances_Parms
	{
		UObject* WorldContextObject;
		UFMODEvent* Event;
		TArray<FFMODEventInstance> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Return a list of all event instances that are playing for this event.\n\x09\x09""Be careful using this function because it is possible to find and alter any playing sound, even ones owned by other audio components.\n\x09 * @param Event - event to find instances from.\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Return a list of all event instances that are playing for this event.\n              Be careful using this function because it is possible to find and alter any playing sound, even ones owned by other audio components.\n@param Event - event to find instances from." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindEventInstances constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindEventInstances constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindEventInstances Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventFindEventInstances_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventFindEventInstances_Parms, Event), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventFindEventInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindEventInstances Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "FindEventInstances", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventFindEventInstances_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventFindEventInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_FindEventInstances(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execFindEventInstances)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UFMODEvent,Z_Param_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFMODEventInstance>*)Z_Param__Result=UFMODBlueprintStatics::FindEventInstances(Z_Param_WorldContextObject,Z_Param_Event);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function FindEventInstances **************************

// ********** Begin Class UFMODBlueprintStatics Function GetGlobalParameterByName ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_GetGlobalParameterByName_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventGetGlobalParameterByName_Parms
	{
		FName Name;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Will be deprecated in FMOD 2.01, use `GetGlobalParameterValueByName(FName, float, float)` instead.\n     * Get a global parameter from the System.\n     * @param Name - Name of parameter\n     */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Will be deprecated in FMOD 2.01, use `GetGlobalParameterValueByName(FName, float, float)` instead.\nGet a global parameter from the System.\n@param Name - Name of parameter" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGlobalParameterByName constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGlobalParameterByName constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGlobalParameterByName Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventGetGlobalParameterByName_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventGetGlobalParameterByName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGlobalParameterByName Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "GetGlobalParameterByName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventGetGlobalParameterByName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventGetGlobalParameterByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_GetGlobalParameterByName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execGetGlobalParameterByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UFMODBlueprintStatics::GetGlobalParameterByName(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function GetGlobalParameterByName ********************

// ********** Begin Class UFMODBlueprintStatics Function GetGlobalParameterValueByName *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_GetGlobalParameterValueByName_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventGetGlobalParameterValueByName_Parms
	{
		FName Name;
		float UserValue;
		float FinalValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Get a global parameter from the System.\n     * @param Name - Name of parameter\n     * @param UserValue - Parameter value as set from the public API.\n     * @param FinalValue - Final combined parameter value.\n     */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Get a global parameter from the System.\n@param Name - Name of parameter\n@param UserValue - Parameter value as set from the public API.\n@param FinalValue - Final combined parameter value." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGlobalParameterValueByName constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UserValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGlobalParameterValueByName constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGlobalParameterValueByName Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventGetGlobalParameterValueByName_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UserValue = { "UserValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventGetGlobalParameterValueByName_Parms, UserValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FinalValue = { "FinalValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventGetGlobalParameterValueByName_Parms, FinalValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FinalValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGlobalParameterValueByName Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "GetGlobalParameterValueByName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventGetGlobalParameterValueByName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventGetGlobalParameterValueByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_GetGlobalParameterValueByName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execGetGlobalParameterValueByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_UserValue);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FinalValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::GetGlobalParameterValueByName(Z_Param_Name,Z_Param_Out_UserValue,Z_Param_Out_FinalValue);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function GetGlobalParameterValueByName ***************

// ********** Begin Class UFMODBlueprintStatics Function GetOutputDrivers **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_GetOutputDrivers_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventGetOutputDrivers_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** List all output device names.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "List all output device names." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOutputDrivers constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOutputDrivers constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOutputDrivers Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventGetOutputDrivers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOutputDrivers Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "GetOutputDrivers", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventGetOutputDrivers_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventGetOutputDrivers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_GetOutputDrivers(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execGetOutputDrivers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UFMODBlueprintStatics::GetOutputDrivers();
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function GetOutputDrivers ****************************

// ********** Begin Class UFMODBlueprintStatics Function IsBankLoaded ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_IsBankLoaded_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventIsBankLoaded_Parms
	{
		UFMODBank* Bank;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Returns true if a bank is loaded.\n\x09* @param Bank - bank to query\n\x09*/" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Returns true if a bank is loaded.\n@param Bank - bank to query" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsBankLoaded constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bank;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventIsBankLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsBankLoaded constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsBankLoaded Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Bank = { "Bank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventIsBankLoaded_Parms, Bank), Z_Construct_UClass_UFMODBank, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventIsBankLoaded_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bank,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsBankLoaded Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "IsBankLoaded", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventIsBankLoaded_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventIsBankLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_IsBankLoaded(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execIsBankLoaded)
{
	P_GET_OBJECT(UFMODBank,Z_Param_Bank);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFMODBlueprintStatics::IsBankLoaded(Z_Param_Bank);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function IsBankLoaded ********************************

// ********** Begin Class UFMODBlueprintStatics Function LoadBank **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_LoadBank_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventLoadBank_Parms
	{
		UFMODBank* Bank;
		bool bBlocking;
		bool bLoadSampleData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "bBlocking", "true" },
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Loads a bank.\n\x09 * @param Bank - bank to load\n\x09 * @param bBlocking - determines whether the bank will load synchronously\n\x09 * @param bLoadSampleData - determines whether sample data will be preloaded immediately\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Loads a bank.\n@param Bank - bank to load\n@param bBlocking - determines whether the bank will load synchronously\n@param bLoadSampleData - determines whether sample data will be preloaded immediately" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadBank constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bank;
	static void NewProp_bBlocking_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventLoadBank_Parms*)Obj)->bBlocking = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlocking;
	static void NewProp_bLoadSampleData_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventLoadBank_Parms*)Obj)->bLoadSampleData = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadSampleData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadBank constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadBank Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Bank = { "Bank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventLoadBank_Parms, Bank), Z_Construct_UClass_UFMODBank, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBlocking = { "bBlocking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventLoadBank_Parms), &UHT_STATICS::NewProp_bBlocking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLoadSampleData = { "bLoadSampleData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventLoadBank_Parms), &UHT_STATICS::NewProp_bLoadSampleData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bank,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBlocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLoadSampleData,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadBank Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "LoadBank", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventLoadBank_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventLoadBank_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_LoadBank(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execLoadBank)
{
	P_GET_OBJECT(UFMODBank,Z_Param_Bank);
	P_GET_UBOOL(Z_Param_bBlocking);
	P_GET_UBOOL(Z_Param_bLoadSampleData);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::LoadBank(Z_Param_Bank,Z_Param_bBlocking,Z_Param_bLoadSampleData);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function LoadBank ************************************

// ********** Begin Class UFMODBlueprintStatics Function LoadBankSampleData ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_LoadBankSampleData_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventLoadBankSampleData_Parms
	{
		UFMODBank* Bank;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Load bank sample data.\n\x09 * @param Bank - bank to load sample data from\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Load bank sample data.\n@param Bank - bank to load sample data from" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadBankSampleData constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadBankSampleData constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadBankSampleData Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Bank = { "Bank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventLoadBankSampleData_Parms, Bank), Z_Construct_UClass_UFMODBank, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bank,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadBankSampleData Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "LoadBankSampleData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventLoadBankSampleData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventLoadBankSampleData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_LoadBankSampleData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execLoadBankSampleData)
{
	P_GET_OBJECT(UFMODBank,Z_Param_Bank);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::LoadBankSampleData(Z_Param_Bank);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function LoadBankSampleData **************************

// ********** Begin Class UFMODBlueprintStatics Function LoadEventSampleData ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_LoadEventSampleData_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventLoadEventSampleData_Parms
	{
		UObject* WorldContextObject;
		UFMODEvent* Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Load event sample data.  This can be done ahead of time to avoid loading stalls.\n\x09 * @param Event - event to load sample data from.\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Load event sample data.  This can be done ahead of time to avoid loading stalls.\n@param Event - event to load sample data from." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadEventSampleData constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadEventSampleData constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadEventSampleData Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventLoadEventSampleData_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventLoadEventSampleData_Parms, Event), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadEventSampleData Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "LoadEventSampleData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventLoadEventSampleData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventLoadEventSampleData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_LoadEventSampleData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execLoadEventSampleData)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UFMODEvent,Z_Param_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::LoadEventSampleData(Z_Param_WorldContextObject,Z_Param_Event);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function LoadEventSampleData *************************

// ********** Begin Class UFMODBlueprintStatics Function MixerResume *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_MixerResume_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Resume the FMOD mixer.  Used when resuming the application.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Resume the FMOD mixer.  Used when resuming the application." },
	};
#endif // WITH_METADATA

// ********** Begin Function MixerResume constinit property declarations ***************************
// ********** End Function MixerResume constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "MixerResume", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_MixerResume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execMixerResume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::MixerResume();
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function MixerResume *********************************

// ********** Begin Class UFMODBlueprintStatics Function MixerSuspend ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_MixerSuspend_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Suspend the FMOD mixer.  Used when suspending the application.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Suspend the FMOD mixer.  Used when suspending the application." },
	};
#endif // WITH_METADATA

// ********** Begin Function MixerSuspend constinit property declarations **************************
// ********** End Function MixerSuspend constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "MixerSuspend", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_MixerSuspend(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execMixerSuspend)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::MixerSuspend();
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function MixerSuspend ********************************

// ********** Begin Class UFMODBlueprintStatics Function PlayEvent2D *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_PlayEvent2D_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventPlayEvent2D_Parms
	{
		UObject* WorldContextObject;
		UFMODEvent* Event;
		bool bAutoPlay;
		FFMODEventInstance ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "2" },
		{ "bAutoPlay", "true" },
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Plays an event.  This returns an FMOD Event Instance.  The sound does not travel with any actor.\n\x09 * @param Event - event to play\n\x09 * @param bAutoPlay - Start the event automatically.\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Plays an event.  This returns an FMOD Event Instance.  The sound does not travel with any actor.\n@param Event - event to play\n@param bAutoPlay - Start the event automatically." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayEvent2D constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static void NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventPlayEvent2D_Parms*)Obj)->bAutoPlay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayEvent2D constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayEvent2D Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEvent2D_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEvent2D_Parms, Event), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventPlayEvent2D_Parms), &UHT_STATICS::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEvent2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayEvent2D Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "PlayEvent2D", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventPlayEvent2D_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventPlayEvent2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_PlayEvent2D(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execPlayEvent2D)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UFMODEvent,Z_Param_Event);
	P_GET_UBOOL(Z_Param_bAutoPlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFMODEventInstance*)Z_Param__Result=UFMODBlueprintStatics::PlayEvent2D(Z_Param_WorldContextObject,Z_Param_Event,Z_Param_bAutoPlay);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function PlayEvent2D *********************************

// ********** Begin Class UFMODBlueprintStatics Function PlayEventAtLocation ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAtLocation_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventPlayEventAtLocation_Parms
	{
		UObject* WorldContextObject;
		UFMODEvent* Event;
		FTransform Location;
		bool bAutoPlay;
		FFMODEventInstance ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "2" },
		{ "bAutoPlay", "true" },
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Plays an event at the given location. This returns an FMOD Event Instance.  The sound does not travel with any actor.\n\x09 * @param Event - event to play\n\x09 * @param Location - World position to play event at\n\x09 * @param bAutoPlay - Start the event automatically.\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Plays an event at the given location. This returns an FMOD Event Instance.  The sound does not travel with any actor.\n@param Event - event to play\n@param Location - World position to play event at\n@param bAutoPlay - Start the event automatically." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayEventAtLocation constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventPlayEventAtLocation_Parms*)Obj)->bAutoPlay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayEventAtLocation constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayEventAtLocation Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEventAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEventAtLocation_Parms, Event), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEventAtLocation_Parms, Location), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventPlayEventAtLocation_Parms), &UHT_STATICS::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEventAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FFMODEventInstance, METADATA_PARAMS(0, nullptr) }; // ffb060e91189bfa448a87031e586dab160baf288
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayEventAtLocation Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "PlayEventAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventPlayEventAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventPlayEventAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execPlayEventAtLocation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UFMODEvent,Z_Param_Event);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Location);
	P_GET_UBOOL(Z_Param_bAutoPlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFMODEventInstance*)Z_Param__Result=UFMODBlueprintStatics::PlayEventAtLocation(Z_Param_WorldContextObject,Z_Param_Event,Z_Param_Out_Location,Z_Param_bAutoPlay);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function PlayEventAtLocation *************************

// ********** Begin Class UFMODBlueprintStatics Function PlayEventAttached *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAttached_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventPlayEventAttached_Parms
	{
		UFMODEvent* Event;
		USceneComponent* AttachToComponent;
		FName AttachPointName;
		FVector Location;
		TEnumAsByte<EAttachLocation::Type> LocationType;
		bool bStopWhenAttachedToDestroyed;
		bool bAutoPlay;
		bool bAutoDestroy;
		UFMODAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "2" },
		{ "bAutoDestroy", "true" },
		{ "bAutoPlay", "true" },
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Plays an event attached to and following the specified component.\n\x09 * @param Event - event to play\n\x09 * @param AttachComponent - Component to attach to.\n\x09 * @param AttachPointName - Optional named point within the AttachComponent to play the sound at\n\x09 * @param Location - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n\x09 * @param LocationType - Specifies whether Location is a relative offset or an absolute world position\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 * @param bAutoPlay - Start the event automatically.\n\x09 * @param bAutoDestroy - Automatically destroy the audio component when the sound is stopped.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Plays an event attached to and following the specified component.\n@param Event - event to play\n@param AttachComponent - Component to attach to.\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at\n@param Location - Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n@param LocationType - Specifies whether Location is a relative offset or an absolute world position\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n@param bAutoPlay - Start the event automatically.\n@param bAutoDestroy - Automatically destroy the audio component when the sound is stopped." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayEventAttached constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
	static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventPlayEventAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
	static void NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventPlayEventAttached_Parms*)Obj)->bAutoPlay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static void NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((FMODBlueprintStatics_eventPlayEventAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayEventAttached constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayEventAttached Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEventAttached_Parms, Event), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEventAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToComponent_MetaData), NewProp_AttachToComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEventAttached_Parms, AttachPointName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEventAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEventAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(0, nullptr) }; // 0dbf58a470be3b10c2316128df97ec977606044b
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventPlayEventAttached_Parms), &UHT_STATICS::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventPlayEventAttached_Parms), &UHT_STATICS::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMODBlueprintStatics_eventPlayEventAttached_Parms), &UHT_STATICS::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventPlayEventAttached_Parms, ReturnValue), Z_Construct_UClass_UFMODAudioComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AttachToComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AttachPointName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStopWhenAttachedToDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayEventAttached Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "PlayEventAttached", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventPlayEventAttached_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventPlayEventAttached_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAttached(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execPlayEventAttached)
{
	P_GET_OBJECT(UFMODEvent,Z_Param_Event);
	P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
	P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
	P_GET_UBOOL(Z_Param_bAutoPlay);
	P_GET_UBOOL(Z_Param_bAutoDestroy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFMODAudioComponent**)Z_Param__Result=UFMODBlueprintStatics::PlayEventAttached(Z_Param_Event,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_bAutoPlay,Z_Param_bAutoDestroy);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function PlayEventAttached ***************************

// ********** Begin Class UFMODBlueprintStatics Function SetGlobalParameterByName ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_SetGlobalParameterByName_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventSetGlobalParameterByName_Parms
	{
		FName Name;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Set a global parameter from the System.\n     * @param Name - Name of parameter\n     * @param Value - Value of parameter\n     */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Set a global parameter from the System.\n@param Name - Name of parameter\n@param Value - Value of parameter" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGlobalParameterByName constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGlobalParameterByName constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGlobalParameterByName Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventSetGlobalParameterByName_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventSetGlobalParameterByName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetGlobalParameterByName Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "SetGlobalParameterByName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventSetGlobalParameterByName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventSetGlobalParameterByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_SetGlobalParameterByName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execSetGlobalParameterByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::SetGlobalParameterByName(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function SetGlobalParameterByName ********************

// ********** Begin Class UFMODBlueprintStatics Function SetLocale *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_SetLocale_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventSetLocale_Parms
	{
		FString Locale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Set the active locale for subsequent bank loads.\n    */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Set the active locale for subsequent bank loads." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLocale constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Locale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLocale constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLocale Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Locale = { "Locale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventSetLocale_Parms, Locale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locale_MetaData), NewProp_Locale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Locale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetLocale Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "SetLocale", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventSetLocale_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventSetLocale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_SetLocale(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execSetLocale)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Locale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::SetLocale(Z_Param_Locale);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function SetLocale ***********************************

// ********** Begin Class UFMODBlueprintStatics Function SetOutputDriverByIndex ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByIndex_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventSetOutputDriverByIndex_Parms
	{
		int32 NewDriverIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Set current output device by its index from GetOutputDrivers.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Set current output device by its index from GetOutputDrivers." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOutputDriverByIndex constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewDriverIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOutputDriverByIndex constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOutputDriverByIndex Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NewDriverIndex = { "NewDriverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventSetOutputDriverByIndex_Parms, NewDriverIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewDriverIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOutputDriverByIndex Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "SetOutputDriverByIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventSetOutputDriverByIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventSetOutputDriverByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execSetOutputDriverByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewDriverIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::SetOutputDriverByIndex(Z_Param_NewDriverIndex);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function SetOutputDriverByIndex **********************

// ********** Begin Class UFMODBlueprintStatics Function SetOutputDriverByName *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByName_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventSetOutputDriverByName_Parms
	{
		FString NewDriverName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Set current output device by name or part of the name.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Set current output device by name or part of the name." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOutputDriverByName constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewDriverName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOutputDriverByName constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOutputDriverByName Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_NewDriverName = { "NewDriverName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventSetOutputDriverByName_Parms, NewDriverName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewDriverName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOutputDriverByName Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "SetOutputDriverByName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventSetOutputDriverByName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventSetOutputDriverByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execSetOutputDriverByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewDriverName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::SetOutputDriverByName(Z_Param_NewDriverName);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function SetOutputDriverByName ***********************

// ********** Begin Class UFMODBlueprintStatics Function UnloadBank ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBank_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventUnloadBank_Parms
	{
		UFMODBank* Bank;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Unloads a bank.\n\x09 * @param Bank - bank to unload\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Unloads a bank.\n@param Bank - bank to unload" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnloadBank constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnloadBank constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnloadBank Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Bank = { "Bank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventUnloadBank_Parms, Bank), Z_Construct_UClass_UFMODBank, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bank,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UnloadBank Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "UnloadBank", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventUnloadBank_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventUnloadBank_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBank(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execUnloadBank)
{
	P_GET_OBJECT(UFMODBank,Z_Param_Bank);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::UnloadBank(Z_Param_Bank);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function UnloadBank **********************************

// ********** Begin Class UFMODBlueprintStatics Function UnloadBankSampleData **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBankSampleData_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventUnloadBankSampleData_Parms
	{
		UFMODBank* Bank;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Unload bank sample data.\n\x09 * @param Bank - bank to unload sample data from\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Unload bank sample data.\n@param Bank - bank to unload sample data from" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnloadBankSampleData constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnloadBankSampleData constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnloadBankSampleData Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Bank = { "Bank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventUnloadBankSampleData_Parms, Bank), Z_Construct_UClass_UFMODBank, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bank,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UnloadBankSampleData Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "UnloadBankSampleData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventUnloadBankSampleData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventUnloadBankSampleData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBankSampleData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execUnloadBankSampleData)
{
	P_GET_OBJECT(UFMODBank,Z_Param_Bank);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::UnloadBankSampleData(Z_Param_Bank);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function UnloadBankSampleData ************************

// ********** Begin Class UFMODBlueprintStatics Function UnloadEventSampleData *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_UnloadEventSampleData_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventUnloadEventSampleData_Parms
	{
		UObject* WorldContextObject;
		UFMODEvent* Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD" },
		{ "Comment", "/** Unload event sample data.\n\x09 * @param Event - event to load sample data from.\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Unload event sample data.\n@param Event - event to load sample data from." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnloadEventSampleData constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnloadEventSampleData constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnloadEventSampleData Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventUnloadEventSampleData_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventUnloadEventSampleData_Parms, Event), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UnloadEventSampleData Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "UnloadEventSampleData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventUnloadEventSampleData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventUnloadEventSampleData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_UnloadEventSampleData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execUnloadEventSampleData)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UFMODEvent,Z_Param_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::UnloadEventSampleData(Z_Param_WorldContextObject,Z_Param_Event);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function UnloadEventSampleData ***********************

// ********** Begin Class UFMODBlueprintStatics Function VCASetVolume ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFMODBlueprintStatics_VCASetVolume_Statics
struct UHT_STATICS
{
	struct FMODBlueprintStatics_eventVCASetVolume_Parms
	{
		UFMODVCA* Vca;
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|FMOD|VCA" },
		{ "Comment", "/** Set volume on a VCA\n\x09 * @param Vca - VCA to use\n\x09 * @param Volume - volume\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
		{ "ToolTip", "Set volume on a VCA\n@param Vca - VCA to use\n@param Volume - volume" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function VCASetVolume constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Vca;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function VCASetVolume constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function VCASetVolume Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Vca = { "Vca", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventVCASetVolume_Parms, Vca), Z_Construct_UClass_UFMODVCA, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMODBlueprintStatics_eventVCASetVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Vca,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function VCASetVolume Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFMODBlueprintStatics, nullptr, "VCASetVolume", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FMODBlueprintStatics_eventVCASetVolume_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FMODBlueprintStatics_eventVCASetVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFMODBlueprintStatics_VCASetVolume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFMODBlueprintStatics::execVCASetVolume)
{
	P_GET_OBJECT(UFMODVCA,Z_Param_Vca);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFMODBlueprintStatics::VCASetVolume(Z_Param_Vca,Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class UFMODBlueprintStatics Function VCASetVolume ********************************

// ********** Begin Class UFMODBlueprintStatics ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UFMODBlueprintStatics_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "FMODBlueprintStatics.h" },
		{ "ModuleRelativePath", "Classes/FMODBlueprintStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFMODBlueprintStatics constinit property declarations ********************
// ********** End Class UFMODBlueprintStatics constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BusSetMute"), .Pointer = &UFMODBlueprintStatics::execBusSetMute },
		{ .NameUTF8 = UTF8TEXT("BusSetPaused"), .Pointer = &UFMODBlueprintStatics::execBusSetPaused },
		{ .NameUTF8 = UTF8TEXT("BusSetVolume"), .Pointer = &UFMODBlueprintStatics::execBusSetVolume },
		{ .NameUTF8 = UTF8TEXT("BusStopAllEvents"), .Pointer = &UFMODBlueprintStatics::execBusStopAllEvents },
		{ .NameUTF8 = UTF8TEXT("EventInstanceGetParameter"), .Pointer = &UFMODBlueprintStatics::execEventInstanceGetParameter },
		{ .NameUTF8 = UTF8TEXT("EventInstanceGetParameterValue"), .Pointer = &UFMODBlueprintStatics::execEventInstanceGetParameterValue },
		{ .NameUTF8 = UTF8TEXT("EventInstanceIsValid"), .Pointer = &UFMODBlueprintStatics::execEventInstanceIsValid },
		{ .NameUTF8 = UTF8TEXT("EventInstanceKeyOff"), .Pointer = &UFMODBlueprintStatics::execEventInstanceKeyOff },
		{ .NameUTF8 = UTF8TEXT("EventInstancePlay"), .Pointer = &UFMODBlueprintStatics::execEventInstancePlay },
		{ .NameUTF8 = UTF8TEXT("EventInstanceRelease"), .Pointer = &UFMODBlueprintStatics::execEventInstanceRelease },
		{ .NameUTF8 = UTF8TEXT("EventInstanceSetParameter"), .Pointer = &UFMODBlueprintStatics::execEventInstanceSetParameter },
		{ .NameUTF8 = UTF8TEXT("EventInstanceSetPaused"), .Pointer = &UFMODBlueprintStatics::execEventInstanceSetPaused },
		{ .NameUTF8 = UTF8TEXT("EventInstanceSetPitch"), .Pointer = &UFMODBlueprintStatics::execEventInstanceSetPitch },
		{ .NameUTF8 = UTF8TEXT("EventInstanceSetProperty"), .Pointer = &UFMODBlueprintStatics::execEventInstanceSetProperty },
		{ .NameUTF8 = UTF8TEXT("EventInstanceSetTransform"), .Pointer = &UFMODBlueprintStatics::execEventInstanceSetTransform },
		{ .NameUTF8 = UTF8TEXT("EventInstanceSetVolume"), .Pointer = &UFMODBlueprintStatics::execEventInstanceSetVolume },
		{ .NameUTF8 = UTF8TEXT("EventInstanceStop"), .Pointer = &UFMODBlueprintStatics::execEventInstanceStop },
		{ .NameUTF8 = UTF8TEXT("FindAssetByName"), .Pointer = &UFMODBlueprintStatics::execFindAssetByName },
		{ .NameUTF8 = UTF8TEXT("FindEventByName"), .Pointer = &UFMODBlueprintStatics::execFindEventByName },
		{ .NameUTF8 = UTF8TEXT("FindEventInstances"), .Pointer = &UFMODBlueprintStatics::execFindEventInstances },
		{ .NameUTF8 = UTF8TEXT("GetGlobalParameterByName"), .Pointer = &UFMODBlueprintStatics::execGetGlobalParameterByName },
		{ .NameUTF8 = UTF8TEXT("GetGlobalParameterValueByName"), .Pointer = &UFMODBlueprintStatics::execGetGlobalParameterValueByName },
		{ .NameUTF8 = UTF8TEXT("GetOutputDrivers"), .Pointer = &UFMODBlueprintStatics::execGetOutputDrivers },
		{ .NameUTF8 = UTF8TEXT("IsBankLoaded"), .Pointer = &UFMODBlueprintStatics::execIsBankLoaded },
		{ .NameUTF8 = UTF8TEXT("LoadBank"), .Pointer = &UFMODBlueprintStatics::execLoadBank },
		{ .NameUTF8 = UTF8TEXT("LoadBankSampleData"), .Pointer = &UFMODBlueprintStatics::execLoadBankSampleData },
		{ .NameUTF8 = UTF8TEXT("LoadEventSampleData"), .Pointer = &UFMODBlueprintStatics::execLoadEventSampleData },
		{ .NameUTF8 = UTF8TEXT("MixerResume"), .Pointer = &UFMODBlueprintStatics::execMixerResume },
		{ .NameUTF8 = UTF8TEXT("MixerSuspend"), .Pointer = &UFMODBlueprintStatics::execMixerSuspend },
		{ .NameUTF8 = UTF8TEXT("PlayEvent2D"), .Pointer = &UFMODBlueprintStatics::execPlayEvent2D },
		{ .NameUTF8 = UTF8TEXT("PlayEventAtLocation"), .Pointer = &UFMODBlueprintStatics::execPlayEventAtLocation },
		{ .NameUTF8 = UTF8TEXT("PlayEventAttached"), .Pointer = &UFMODBlueprintStatics::execPlayEventAttached },
		{ .NameUTF8 = UTF8TEXT("SetGlobalParameterByName"), .Pointer = &UFMODBlueprintStatics::execSetGlobalParameterByName },
		{ .NameUTF8 = UTF8TEXT("SetLocale"), .Pointer = &UFMODBlueprintStatics::execSetLocale },
		{ .NameUTF8 = UTF8TEXT("SetOutputDriverByIndex"), .Pointer = &UFMODBlueprintStatics::execSetOutputDriverByIndex },
		{ .NameUTF8 = UTF8TEXT("SetOutputDriverByName"), .Pointer = &UFMODBlueprintStatics::execSetOutputDriverByName },
		{ .NameUTF8 = UTF8TEXT("UnloadBank"), .Pointer = &UFMODBlueprintStatics::execUnloadBank },
		{ .NameUTF8 = UTF8TEXT("UnloadBankSampleData"), .Pointer = &UFMODBlueprintStatics::execUnloadBankSampleData },
		{ .NameUTF8 = UTF8TEXT("UnloadEventSampleData"), .Pointer = &UFMODBlueprintStatics::execUnloadEventSampleData },
		{ .NameUTF8 = UTF8TEXT("VCASetVolume"), .Pointer = &UFMODBlueprintStatics::execVCASetVolume },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_BusSetMute, "BusSetMute" }, // 81d62ecaf05d0cd5de36661fda7a7e9d1df55f6b
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_BusSetPaused, "BusSetPaused" }, // 43a738697f548989c2438232c26b17a6a48d4697
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_BusSetVolume, "BusSetVolume" }, // cfc7b2fdaf322dba61d826e115630975e742b4c7
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_BusStopAllEvents, "BusStopAllEvents" }, // 0ee39d1f2db03f66ee2427e0039b3f613ba6fd6a
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceGetParameter, "EventInstanceGetParameter" }, // b0acaaaa2a7a6cc656bb61e4401751efe329b7d7
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceGetParameterValue, "EventInstanceGetParameterValue" }, // d49bdfc1c80cddb147a32d6759e9c7d75ac97e23
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceIsValid, "EventInstanceIsValid" }, // d472efdd263db143ffd969e6f5e41826b047f834
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceKeyOff, "EventInstanceKeyOff" }, // 9993b1dd205af2124ad65227ac98ce594905237a
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstancePlay, "EventInstancePlay" }, // 35d026743cfd27b84bf9e1cbb6ff2f0660a5a682
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceRelease, "EventInstanceRelease" }, // a8f6bef2d533aeabf4928a97f4b8fa897789af68
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetParameter, "EventInstanceSetParameter" }, // d4d11e82a0f104ebfc68feb106bf05fd923fecf3
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPaused, "EventInstanceSetPaused" }, // 5ec31bb99fbffb78db26c0f9565583cf47a6a32f
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetPitch, "EventInstanceSetPitch" }, // ff4f23632e05c65bf89295213cd2e4df7bcef7f8
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetProperty, "EventInstanceSetProperty" }, // aea19875d1dcf02694cc0b1a7750f3c9ddcac440
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetTransform, "EventInstanceSetTransform" }, // 0fd463cfed46c46d6adf697646cffc59a9710eb8
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceSetVolume, "EventInstanceSetVolume" }, // 1b55e4e6f5d4f1e68a57c6069530167a067e26bd
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_EventInstanceStop, "EventInstanceStop" }, // c27ec7dd0df51378a6761992d084cd74badd05ff
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_FindAssetByName, "FindAssetByName" }, // 873212fe7a06ed4eab39801780c1205ef3158d9b
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_FindEventByName, "FindEventByName" }, // ab8b127a9cbc18337d27a647d294e89a07ed0968
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_FindEventInstances, "FindEventInstances" }, // c4fbf68b581f22801d30afdf1a077a0a0fad9836
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_GetGlobalParameterByName, "GetGlobalParameterByName" }, // abc09d39747ba6e41ee5ae241e103d541176fab0
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_GetGlobalParameterValueByName, "GetGlobalParameterValueByName" }, // 48dd55d5f3e2e588d74dc7658aa59df9113a2adb
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_GetOutputDrivers, "GetOutputDrivers" }, // 5de02442fc8be7d1e079a87f7ec18f7ba58af2e5
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_IsBankLoaded, "IsBankLoaded" }, // 31566a39658d9e4f96baad78e4ba28b487b13992
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_LoadBank, "LoadBank" }, // 69aefd009e98e317d24172c7e722e5255527a650
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_LoadBankSampleData, "LoadBankSampleData" }, // 16c1ec6684e777519634290e493713aba5d1d58f
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_LoadEventSampleData, "LoadEventSampleData" }, // 06b1dfb7571c182d1f8b58bdf6ed0060411fdba7
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_MixerResume, "MixerResume" }, // 088120c633b6da5614d0a050c77d1408b4fcae6c
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_MixerSuspend, "MixerSuspend" }, // 76d709b863eadb02fb0dbfe8429aa31804be5b90
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_PlayEvent2D, "PlayEvent2D" }, // 3deb31d87d5b0f008728ae58db7a7db8d6c33fe8
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAtLocation, "PlayEventAtLocation" }, // b55d030e5ab4109e3469a8c91ca0457fbf9d4d46
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_PlayEventAttached, "PlayEventAttached" }, // 11b68d71b641f238c64731d9fd7f561b754cb122
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_SetGlobalParameterByName, "SetGlobalParameterByName" }, // 8da77865a346ddb5a48eec4641115efcf6cc061e
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_SetLocale, "SetLocale" }, // 2987cc26b1f1582c55c515b5b693d674f89d5c41
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByIndex, "SetOutputDriverByIndex" }, // 40052a391ce3b3820a9e0b8e1383aa7796c6d86d
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_SetOutputDriverByName, "SetOutputDriverByName" }, // 333e19b71c4402ef6c541def16a56ee90a2ce963
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBank, "UnloadBank" }, // 095a34b79f21ab9ee526032973e405910e0a12d0
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_UnloadBankSampleData, "UnloadBankSampleData" }, // 0c2d637b619b77d9968d6e28b30d4264e9b994c4
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_UnloadEventSampleData, "UnloadEventSampleData" }, // ce613c25702f79631147aad96d42a864600487c9
		{ &Z_Construct_UFunction_UFMODBlueprintStatics_VCASetVolume, "VCASetVolume" }, // 9bb79747a5a0f38e20daaca7b13cfb44fed3eaee
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODBlueprintStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UFMODBlueprintStatics,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UFMODBlueprintStatics_StaticRegisterNativesUFMODBlueprintStatics()
{
	UClass* Class = UFMODBlueprintStatics::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODBlueprintStatics;
UClass* Z_Construct_UClass_UFMODBlueprintStatics(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UFMODBlueprintStatics;
		if (!Z_Registration_Info_UClass_UFMODBlueprintStatics.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("FMODBlueprintStatics"),
				Z_Registration_Info_UClass_UFMODBlueprintStatics.InnerSingleton,
				UFMODBlueprintStatics_StaticRegisterNativesUFMODBlueprintStatics,
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
		return Z_Registration_Info_UClass_UFMODBlueprintStatics.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UFMODBlueprintStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODBlueprintStatics.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODBlueprintStatics.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFMODBlueprintStatics);
UFMODBlueprintStatics::~UFMODBlueprintStatics() {}
// ********** End Class UFMODBlueprintStatics ******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h__Script_FMODStudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_FMODStudio_EFMOD_STUDIO_STOP_MODE, TEXT("EFMOD_STUDIO_STOP_MODE"), &ZRIE_EFMOD_STUDIO_STOP_MODE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3144479154U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FFMODEventInstance, Z_Construct_UScriptStruct_FFMODEventInstance_Statics::NewStructOps, TEXT("FMODEventInstance"),&Z_Registration_Info_UScriptStruct_FFMODEventInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODEventInstance), 4289749225U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODBlueprintStatics, TEXT("UFMODBlueprintStatics"), &Z_Registration_Info_UClass_UFMODBlueprintStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODBlueprintStatics), 3981098337U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h__Script_FMODStudio_d4a6a57d480cfa9ee3500c4dd28d667d4fcc0bcb{
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
