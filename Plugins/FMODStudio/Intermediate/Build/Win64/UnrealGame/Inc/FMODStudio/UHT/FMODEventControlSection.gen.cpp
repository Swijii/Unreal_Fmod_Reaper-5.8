// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/FMODEventControlSection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODEventControlSection() {}

// ********** Begin Cross Module References ********************************************************
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel(ETypeConstructPhase);
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase);
FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventControlKey(ETypeConstructPhase);
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlChannel(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EFMODEventControlKey ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics
template<> FMODSTUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EFMODEventControlKey>()
{
	return Z_Construct_UEnum_FMODStudio_EFMODEventControlKey(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/** Defines the types of FMOD event control keys. */" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
		{ "Pause.Name", "EFMODEventControlKey::Pause" },
		{ "Play.Name", "EFMODEventControlKey::Play" },
		{ "Stop.Name", "EFMODEventControlKey::Stop" },
		{ "ToolTip", "Defines the types of FMOD event control keys." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFMODEventControlKey::Stop", (int64)EFMODEventControlKey::Stop },
		{ "EFMODEventControlKey::Play", (int64)EFMODEventControlKey::Play },
		{ "EFMODEventControlKey::Pause", (int64)EFMODEventControlKey::Pause },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	nullptr,
	"EFMODEventControlKey",
	"EFMODEventControlKey",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EFMODEventControlKey;
UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventControlKey(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EFMODEventControlKey.OuterSingleton)
		{
			ZRIE_EFMODEventControlKey.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODEventControlKey, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("EFMODEventControlKey"));
		}
		return ZRIE_EFMODEventControlKey.OuterSingleton;
	}
	if (!ZRIE_EFMODEventControlKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EFMODEventControlKey.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EFMODEventControlKey.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EFMODEventControlKey ********************************************************

// ********** Begin ScriptStruct FFMODEventControlChannel ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FFMODEventControlChannel>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFMODEventControlChannel); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFMODEventControlChannel constinit property declarations **********
// ********** End ScriptStruct FFMODEventControlChannel constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventControlChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FFMODEventControlChannel>() == std::is_polymorphic<FMovieSceneByteChannel>(), "USTRUCT FFMODEventControlChannel cannot be polymorphic unless super FMovieSceneByteChannel is polymorphic");
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	Z_Construct_UScriptStruct_FMovieSceneByteChannel,
	&NewStructOps,
	"FMODEventControlChannel",
	nullptr,
	0,
	DataSizeOf<FFMODEventControlChannel>(),
	alignof(FFMODEventControlChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODEventControlChannel;
UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlChannel(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FFMODEventControlChannel.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FFMODEventControlChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventControlChannel, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("FMODEventControlChannel"));
		}
		return Z_Registration_Info_UScriptStruct_FFMODEventControlChannel.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FFMODEventControlChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODEventControlChannel.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFMODEventControlChannel.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FFMODEventControlChannel ********************************************

// ********** Begin Class UFMODEventControlSection *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UFMODEventControlSection_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/** FMOD Event control section */" },
		{ "IncludePath", "Sequencer/FMODEventControlSection.h" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
		{ "ToolTip", "FMOD Event control section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlKeys_MetaData[] = {
		{ "Comment", "/** Channel containing the event control keys */" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
		{ "ToolTip", "Channel containing the event control keys" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFMODEventControlSection constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFMODEventControlSection constinit property declarations *******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODEventControlSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UFMODEventControlSection Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ControlKeys = { "ControlKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODEventControlSection, ControlKeys), Z_Construct_UScriptStruct_FFMODEventControlChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlKeys_MetaData), NewProp_ControlKeys_MetaData) }; // 754bbff7f6cb83e8219237be1e42fda080b77c27
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlKeys,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UFMODEventControlSection Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UMovieSceneSection,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UFMODEventControlSection,
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
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODEventControlSection;
UClass* Z_Construct_UClass_UFMODEventControlSection(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UFMODEventControlSection;
		if (!Z_Registration_Info_UClass_UFMODEventControlSection.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("FMODEventControlSection"),
				Z_Registration_Info_UClass_UFMODEventControlSection.InnerSingleton,
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
		return Z_Registration_Info_UClass_UFMODEventControlSection.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UFMODEventControlSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODEventControlSection.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODEventControlSection.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFMODEventControlSection);
UFMODEventControlSection::~UFMODEventControlSection() {}
// ********** End Class UFMODEventControlSection ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h__Script_FMODStudio_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_FMODStudio_EFMODEventControlKey, TEXT("EFMODEventControlKey"), &ZRIE_EFMODEventControlKey, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1250827453U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FFMODEventControlChannel, Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::NewStructOps, TEXT("FMODEventControlChannel"),&Z_Registration_Info_UScriptStruct_FFMODEventControlChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODEventControlChannel), 1967898615U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODEventControlSection, TEXT("UFMODEventControlSection"), &Z_Registration_Info_UClass_UFMODEventControlSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODEventControlSection), 710583182U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h__Script_FMODStudio_a7c25b8fab0f32b6f1635311e7499e4d46508137{
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
