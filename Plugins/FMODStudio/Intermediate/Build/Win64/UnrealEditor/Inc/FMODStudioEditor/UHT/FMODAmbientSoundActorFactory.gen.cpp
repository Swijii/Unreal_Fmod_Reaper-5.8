// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODAmbientSoundActorFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODAmbientSoundActorFactory() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UActorFactory(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudioEditor(ETypeConstructPhase);
FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory(ETypeConstructPhase);
FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UFMODAmbientSoundActorFactory ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/** FMOD Ambient Sound Actor Factory.\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FMODAmbientSoundActorFactory.h" },
		{ "ModuleRelativePath", "Classes/FMODAmbientSoundActorFactory.h" },
		{ "ToolTip", "FMOD Ambient Sound Actor Factory." },
	};
#endif // WITH_METADATA

// ********** Begin Class UFMODAmbientSoundActorFactory constinit property declarations ************
// ********** End Class UFMODAmbientSoundActorFactory constinit property declarations **************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAmbientSoundActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorFactory,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudioEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UFMODAmbientSoundActorFactory,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000830ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory;
UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UFMODAmbientSoundActorFactory;
		if (!Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("FMODAmbientSoundActorFactory"),
				Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.InnerSingleton,
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
		return Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFMODAmbientSoundActorFactory);
UFMODAmbientSoundActorFactory::~UFMODAmbientSoundActorFactory() {}
// ********** End Class UFMODAmbientSoundActorFactory **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h__Script_FMODStudioEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAmbientSoundActorFactory, TEXT("UFMODAmbientSoundActorFactory"), &Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAmbientSoundActorFactory), 2280044095U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h__Script_FMODStudioEditor_8500a170052d0fb84a467e58f35cd35619c5bf67{
	TEXT("/Script/FMODStudioEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
