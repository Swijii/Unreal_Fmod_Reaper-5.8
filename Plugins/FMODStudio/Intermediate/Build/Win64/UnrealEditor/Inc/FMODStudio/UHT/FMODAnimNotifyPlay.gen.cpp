// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODAnimNotifyPlay.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODAnimNotifyPlay() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAnimNotifyPlay(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAnimNotifyPlay(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UFMODAnimNotifyPlay ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UFMODAnimNotifyPlay_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DisplayName", "Play FMOD Event" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FMODAnimNotifyPlay.h" },
		{ "ModuleRelativePath", "Classes/FMODAnimNotifyPlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[] = {
		{ "Category", "FMOD Anim Notify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If this sound should follow its owner\n" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAnimNotifyPlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this sound should follow its owner" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachName_MetaData[] = {
		{ "Category", "FMOD Anim Notify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Socket or bone name to attach sound to\n" },
#endif
		{ "EditCondition", "bFollow" },
		{ "ModuleRelativePath", "Classes/FMODAnimNotifyPlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket or bone name to attach sound to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "Category", "FMOD Anim Notify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound to Play\n" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAnimNotifyPlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to Play" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UFMODAnimNotifyPlay constinit property declarations **********************
	static void NewProp_bFollow_SetBit(void* Obj)
	{
		((UFMODAnimNotifyPlay*)Obj)->bFollow = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollow;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttachName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFMODAnimNotifyPlay constinit property declarations ************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAnimNotifyPlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UFMODAnimNotifyPlay Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFMODAnimNotifyPlay), &UHT_STATICS::NewProp_bFollow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollow_MetaData), NewProp_bFollow_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AttachName = { "AttachName", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAnimNotifyPlay, AttachName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachName_MetaData), NewProp_AttachName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAnimNotifyPlay, Event), Z_Construct_UClass_UFMODEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFollow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AttachName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UFMODAnimNotifyPlay Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAnimNotify,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UFMODAnimNotifyPlay,
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
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODAnimNotifyPlay;
UClass* Z_Construct_UClass_UFMODAnimNotifyPlay(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UFMODAnimNotifyPlay;
		if (!Z_Registration_Info_UClass_UFMODAnimNotifyPlay.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("FMODAnimNotifyPlay"),
				Z_Registration_Info_UClass_UFMODAnimNotifyPlay.InnerSingleton,
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
		return Z_Registration_Info_UClass_UFMODAnimNotifyPlay.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UFMODAnimNotifyPlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAnimNotifyPlay.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODAnimNotifyPlay.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFMODAnimNotifyPlay);
UFMODAnimNotifyPlay::~UFMODAnimNotifyPlay() {}
// ********** End Class UFMODAnimNotifyPlay ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAnimNotifyPlay_h__Script_FMODStudio_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAnimNotifyPlay, TEXT("UFMODAnimNotifyPlay"), &Z_Registration_Info_UClass_UFMODAnimNotifyPlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAnimNotifyPlay), 1775607001U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAnimNotifyPlay_h__Script_FMODStudio_ddd55004d670f9d8ab350eec5628856943591d6e{
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
