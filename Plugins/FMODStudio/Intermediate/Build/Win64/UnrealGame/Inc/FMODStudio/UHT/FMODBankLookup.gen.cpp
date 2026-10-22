// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODBankLookup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODBankLookup() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDataTable(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBankLookup(ETypeConstructPhase);
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankRow(ETypeConstructPhase);
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankTable(ETypeConstructPhase);
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBankLookup(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FFMODLocalizedBankRow *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FFMODLocalizedBankRow>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFMODLocalizedBankRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFMODLocalizedBankRow constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFMODLocalizedBankRow constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODLocalizedBankRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FFMODLocalizedBankRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFMODLocalizedBankRow cannot be polymorphic unless super FTableRowBase is polymorphic");

// ********** Begin ScriptStruct FFMODLocalizedBankRow Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODLocalizedBankRow, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FFMODLocalizedBankRow Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"FMODLocalizedBankRow",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FFMODLocalizedBankRow>(),
	alignof(FFMODLocalizedBankRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODLocalizedBankRow;
UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankRow(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FFMODLocalizedBankRow.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FFMODLocalizedBankRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODLocalizedBankRow, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("FMODLocalizedBankRow"));
		}
		return Z_Registration_Info_UScriptStruct_FFMODLocalizedBankRow.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FFMODLocalizedBankRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODLocalizedBankRow.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFMODLocalizedBankRow.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FFMODLocalizedBankRow ***********************************************

// ********** Begin ScriptStruct FFMODLocalizedBankTable *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FFMODLocalizedBankTable>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFMODLocalizedBankTable); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Banks_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFMODLocalizedBankTable constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Banks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFMODLocalizedBankTable constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODLocalizedBankTable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FFMODLocalizedBankTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFMODLocalizedBankTable cannot be polymorphic unless super FTableRowBase is polymorphic");

// ********** Begin ScriptStruct FFMODLocalizedBankTable Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Banks = { "Banks", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODLocalizedBankTable, Banks), Z_Construct_UClass_UDataTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Banks_MetaData), NewProp_Banks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Banks,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FFMODLocalizedBankTable Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"FMODLocalizedBankTable",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FFMODLocalizedBankTable>(),
	alignof(FFMODLocalizedBankTable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODLocalizedBankTable;
UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankTable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FFMODLocalizedBankTable.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FFMODLocalizedBankTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODLocalizedBankTable, (UObject*)Z_Construct_UPackage__Script_FMODStudio(ETypeConstructPhase::Outer), TEXT("FMODLocalizedBankTable"));
		}
		return Z_Registration_Info_UScriptStruct_FFMODLocalizedBankTable.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FFMODLocalizedBankTable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODLocalizedBankTable.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFMODLocalizedBankTable.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FFMODLocalizedBankTable *********************************************

// ********** Begin Class UFMODBankLookup **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UFMODBankLookup_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "FMODBankLookup.h" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterBankPath_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterAssetsBankPath_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterStringsBankPath_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFMODBankLookup constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MasterBankPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MasterAssetsBankPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MasterStringsBankPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFMODBankLookup constinit property declarations ****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODBankLookup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UFMODBankLookup Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODBankLookup, DataTable), Z_Construct_UClass_UDataTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MasterBankPath = { "MasterBankPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODBankLookup, MasterBankPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterBankPath_MetaData), NewProp_MasterBankPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MasterAssetsBankPath = { "MasterAssetsBankPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODBankLookup, MasterAssetsBankPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterAssetsBankPath_MetaData), NewProp_MasterAssetsBankPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_MasterStringsBankPath = { "MasterStringsBankPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODBankLookup, MasterStringsBankPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterStringsBankPath_MetaData), NewProp_MasterStringsBankPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MasterBankPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MasterAssetsBankPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MasterStringsBankPath,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UFMODBankLookup Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UFMODBankLookup,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODBankLookup;
UClass* Z_Construct_UClass_UFMODBankLookup(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UFMODBankLookup;
		if (!Z_Registration_Info_UClass_UFMODBankLookup.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("FMODBankLookup"),
				Z_Registration_Info_UClass_UFMODBankLookup.InnerSingleton,
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
		return Z_Registration_Info_UClass_UFMODBankLookup.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UFMODBankLookup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODBankLookup.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODBankLookup.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFMODBankLookup);
UFMODBankLookup::~UFMODBankLookup() {}
// ********** End Class UFMODBankLookup ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h__Script_FMODStudio_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FFMODLocalizedBankRow, Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewStructOps, TEXT("FMODLocalizedBankRow"),&Z_Registration_Info_UScriptStruct_FFMODLocalizedBankRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODLocalizedBankRow), 430196335U) },
		{ Z_Construct_UScriptStruct_FFMODLocalizedBankTable, Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewStructOps, TEXT("FMODLocalizedBankTable"),&Z_Registration_Info_UScriptStruct_FFMODLocalizedBankTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODLocalizedBankTable), 3339685478U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODBankLookup, TEXT("UFMODBankLookup"), &Z_Registration_Info_UClass_UFMODBankLookup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODBankLookup), 2644840188U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h__Script_FMODStudio_6a0bbff2d85e0dfc7850a6bdd5b6064156f4e92f{
	TEXT("/Script/FMODStudio"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
