// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODAudioLinkSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODAudioLinkSettings() {}

// ********** Begin Cross Module References ********************************************************
AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioLinkSettings(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioLinkSettings(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UFMODAudioLinkSettings ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UFMODAudioLinkSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "" },
		{ "ModuleRelativePath", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkEvent_MetaData[] = {
		{ "Category", "default" },
		{ "ModuleRelativePath", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldClearBufferOnReceipt_MetaData[] = {
		{ "Category", "default" },
		{ "Comment", "/** If this is set, the receiving code will clear the buffer after it's read, so it's not rendered by Unreal. Only applies if running both renderers at once.  */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "If this is set, the receiving code will clear the buffer after it's read, so it's not rendered by Unreal. Only applies if running both renderers at once." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProducerToConsumerBufferRatio_MetaData[] = {
		{ "Category", "default" },
		{ "Comment", "/** This is the ratio of producer to consumer buffer size, 2.0 means its twice as big as the consumer buffer.  */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "This is the ratio of producer to consumer buffer size, 2.0 means its twice as big as the consumer buffer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSilenceFillRatio_MetaData[] = {
		{ "Category", "default" },
		{ "Comment", "/** Ratio of initial buffer to fill with silence ahead of consumption. Adjusting this can resolve starvation at the cost of added latency. */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "Ratio of initial buffer to fill with silence ahead of consumption. Adjusting this can resolve starvation at the cost of added latency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkEventResolved_MetaData[] = {
		{ "Comment", "/** Once the SoftObjectReference has been resolved, attach the reference here so it's owned. */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "Once the SoftObjectReference has been resolved, attach the reference here so it's owned." },
	};
#endif // WITH_METADATA

// ********** Begin Class UFMODAudioLinkSettings constinit property declarations *******************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LinkEvent;
	static void NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj)
	{
		((UFMODAudioLinkSettings*)Obj)->bShouldClearBufferOnReceipt = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldClearBufferOnReceipt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProducerToConsumerBufferRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSilenceFillRatio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkEventResolved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFMODAudioLinkSettings constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAudioLinkSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UFMODAudioLinkSettings Property Definitions ******************************
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_LinkEvent = { "LinkEvent", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioLinkSettings, LinkEvent), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkEvent_MetaData), NewProp_LinkEvent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShouldClearBufferOnReceipt = { "bShouldClearBufferOnReceipt", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODAudioLinkSettings), &UHT_STATICS::NewProp_bShouldClearBufferOnReceipt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldClearBufferOnReceipt_MetaData), NewProp_bShouldClearBufferOnReceipt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ProducerToConsumerBufferRatio = { "ProducerToConsumerBufferRatio", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioLinkSettings, ProducerToConsumerBufferRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProducerToConsumerBufferRatio_MetaData), NewProp_ProducerToConsumerBufferRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InitialSilenceFillRatio = { "InitialSilenceFillRatio", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioLinkSettings, InitialSilenceFillRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSilenceFillRatio_MetaData), NewProp_InitialSilenceFillRatio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LinkEventResolved = { "LinkEventResolved", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioLinkSettings, LinkEventResolved), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkEventResolved_MetaData), NewProp_LinkEventResolved_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LinkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShouldClearBufferOnReceipt,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProducerToConsumerBufferRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialSilenceFillRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LinkEventResolved,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UFMODAudioLinkSettings Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAudioLinkSettingsAbstract,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UFMODAudioLinkSettings,
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
	0x001010A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODAudioLinkSettings;
UClass* Z_Construct_UClass_UFMODAudioLinkSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UFMODAudioLinkSettings;
		if (!Z_Registration_Info_UClass_UFMODAudioLinkSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("FMODAudioLinkSettings"),
				Z_Registration_Info_UClass_UFMODAudioLinkSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UFMODAudioLinkSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UFMODAudioLinkSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAudioLinkSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODAudioLinkSettings.OuterSingleton;
}
#undef UHT_STATICS
UFMODAudioLinkSettings::UFMODAudioLinkSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFMODAudioLinkSettings);
UFMODAudioLinkSettings::~UFMODAudioLinkSettings() {}
// ********** End Class UFMODAudioLinkSettings *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_BuildAgent1_work_9e39292ae975f8fb_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODAudioLink_Public_FMODAudioLinkSettings_h__Script_FMODStudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAudioLinkSettings, TEXT("UFMODAudioLinkSettings"), &Z_Registration_Info_UClass_UFMODAudioLinkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAudioLinkSettings), 543684047U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_9e39292ae975f8fb_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODAudioLink_Public_FMODAudioLinkSettings_h__Script_FMODStudio_e7f8c53a95a5fa1a239d8a737b4bfd4f5db8659f{
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
