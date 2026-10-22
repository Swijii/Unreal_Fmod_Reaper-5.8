// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODNiagaraEventPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODNiagaraEventPlayer() {}

// ********** Begin Cross Module References ********************************************************
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudioNiagara(ETypeConstructPhase);
FMODSTUDIONIAGARA_API UClass* Z_Construct_UClass_UFMODNiagaraEventPlayer(ETypeConstructPhase);
FMODSTUDIONIAGARA_API UClass* Z_Construct_UClass_UFMODNiagaraEventPlayer(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UFMODNiagaraEventPlayer **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** This Data Interface can be used to play one-shot audio effects driven by particle data. */" },
		{ "DisplayName", "FMOD Event Player" },
		{ "IncludePath", "FMODNiagaraEventPlayer.h" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
		{ "ToolTip", "This Data Interface can be used to play one-shot audio effects driven by particle data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventToPlay_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Reference to the audio asset to play */" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
		{ "ToolTip", "Reference to the audio asset to play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterNames_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio */" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
		{ "ToolTip", "A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitPlaysPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlaysPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "Comment", "/** This sets the max number of sounds played each tick.\n     *  If more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\n     *  The particles to discard when over the limit are *not* chosen in a deterministic way. */" },
		{ "EditCondition", "bLimitPlaysPerTick" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
		{ "ToolTip", "This sets the max number of sounds played each tick.\nIf more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\nThe particles to discard when over the limit are *not* chosen in a deterministic way." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenComponentIsDestroyed_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed. */" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
		{ "ToolTip", "If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyActiveDuringGameplay_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you.\n     *  Currently the FMOD Niagara integration will not play in Editor.\n     */" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
		{ "ToolTip", "If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you.\nCurrently the FMOD Niagara integration will not play in Editor." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UFMODNiagaraEventPlayer constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventToPlay;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
	static void NewProp_bLimitPlaysPerTick_SetBit(void* Obj)
	{
		((UFMODNiagaraEventPlayer*)Obj)->bLimitPlaysPerTick = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitPlaysPerTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlaysPerTick;
	static void NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj)
	{
		((UFMODNiagaraEventPlayer*)Obj)->bStopWhenComponentIsDestroyed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenComponentIsDestroyed;
#if WITH_EDITORONLY_DATA
	static void NewProp_bOnlyActiveDuringGameplay_SetBit(void* Obj)
	{
		((UFMODNiagaraEventPlayer*)Obj)->bOnlyActiveDuringGameplay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyActiveDuringGameplay;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFMODNiagaraEventPlayer constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODNiagaraEventPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UFMODNiagaraEventPlayer Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EventToPlay = { "EventToPlay", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODNiagaraEventPlayer, EventToPlay), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventToPlay_MetaData), NewProp_EventToPlay_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000002020001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODNiagaraEventPlayer, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterNames_MetaData), NewProp_ParameterNames_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLimitPlaysPerTick = { "bLimitPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODNiagaraEventPlayer), &UHT_STATICS::NewProp_bLimitPlaysPerTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitPlaysPerTick_MetaData), NewProp_bLimitPlaysPerTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxPlaysPerTick = { "MaxPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODNiagaraEventPlayer, MaxPlaysPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlaysPerTick_MetaData), NewProp_MaxPlaysPerTick_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStopWhenComponentIsDestroyed = { "bStopWhenComponentIsDestroyed", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODNiagaraEventPlayer), &UHT_STATICS::NewProp_bStopWhenComponentIsDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenComponentIsDestroyed_MetaData), NewProp_bStopWhenComponentIsDestroyed_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOnlyActiveDuringGameplay = { "bOnlyActiveDuringGameplay", nullptr, (EPropertyFlags)0x0010040800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODNiagaraEventPlayer), &UHT_STATICS::NewProp_bOnlyActiveDuringGameplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyActiveDuringGameplay_MetaData), NewProp_bOnlyActiveDuringGameplay_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParameterNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParameterNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLimitPlaysPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxPlaysPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStopWhenComponentIsDestroyed,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOnlyActiveDuringGameplay,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UFMODNiagaraEventPlayer Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UNiagaraDataInterface,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudioNiagara,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UFMODNiagaraEventPlayer,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODNiagaraEventPlayer;
UClass* Z_Construct_UClass_UFMODNiagaraEventPlayer(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UFMODNiagaraEventPlayer;
		if (!Z_Registration_Info_UClass_UFMODNiagaraEventPlayer.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("FMODNiagaraEventPlayer"),
				Z_Registration_Info_UClass_UFMODNiagaraEventPlayer.InnerSingleton,
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
		return Z_Registration_Info_UClass_UFMODNiagaraEventPlayer.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UFMODNiagaraEventPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODNiagaraEventPlayer.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODNiagaraEventPlayer.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFMODNiagaraEventPlayer);
UFMODNiagaraEventPlayer::~UFMODNiagaraEventPlayer() {}
// ********** End Class UFMODNiagaraEventPlayer ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudioNiagara_HostProject_Plugins_FMODStudioNiagara_Source_FMODStudioNiagara_Public_FMODNiagaraEventPlayer_h__Script_FMODStudioNiagara_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODNiagaraEventPlayer, TEXT("UFMODNiagaraEventPlayer"), &Z_Registration_Info_UClass_UFMODNiagaraEventPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODNiagaraEventPlayer), 3859202577U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudioNiagara_HostProject_Plugins_FMODStudioNiagara_Source_FMODStudioNiagara_Public_FMODNiagaraEventPlayer_h__Script_FMODStudioNiagara_4b03aea1559e4a627f6b1db10c14a19c1bb21600{
	TEXT("/Script/FMODStudioNiagara"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
