// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/FMODEventControlSection.h"

#ifdef FMODSTUDIO_FMODEventControlSection_generated_h
#error "FMODEventControlSection.generated.h already included, missing '#pragma once' in FMODEventControlSection.h"
#endif
#define FMODSTUDIO_FMODEventControlSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFMODEventControlChannel ******************************************
struct Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics;
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlChannel(ETypeConstructPhase);

#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FFMODEventControlChannel(ETypeConstructPhase::Inner); } \
	typedef FMovieSceneByteChannel Super;


struct FFMODEventControlChannel;
// ********** End ScriptStruct FFMODEventControlChannel ********************************************

// ********** Begin Class UFMODEventControlSection *************************************************
struct Z_Construct_UClass_UFMODEventControlSection_Statics;
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection(ETypeConstructPhase);

#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_INCLASS \
private: \
	friend struct ::Z_Construct_UClass_UFMODEventControlSection_Statics; \
	friend FMODSTUDIO_API UClass* ::Z_Construct_UClass_UFMODEventControlSection(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UFMODEventControlSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FMODStudio"), Z_Construct_UClass_UFMODEventControlSection) \
	DECLARE_SERIALIZER(UFMODEventControlSection)


#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FMODSTUDIO_API UFMODEventControlSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODEventControlSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FMODSTUDIO_API, UFMODEventControlSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODEventControlSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFMODEventControlSection(UFMODEventControlSection&&) = delete; \
	UFMODEventControlSection(const UFMODEventControlSection&) = delete; \
	FMODSTUDIO_API virtual ~UFMODEventControlSection();


#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_50_PROLOG
#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_INCLASS \
	FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFMODEventControlSection;

// ********** End Class UFMODEventControlSection ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h

// ********** Begin Enum EFMODEventControlKey ******************************************************
#define FOREACH_ENUM_EFMODEVENTCONTROLKEY(op) \
	op(EFMODEventControlKey::Stop) \
	op(EFMODEventControlKey::Play) \
	op(EFMODEventControlKey::Pause) 

enum class EFMODEventControlKey : uint8;
template<> struct TIsUEnumClass<EFMODEventControlKey> { enum { Value = true }; };
template<> UE_NODEBUG FMODSTUDIO_NON_ATTRIBUTED_API UEnum* StaticEnum<EFMODEventControlKey>();
// ********** End Enum EFMODEventControlKey ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
