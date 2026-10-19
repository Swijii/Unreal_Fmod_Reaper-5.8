// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/Interfaces/CombatActivatable.h"

#ifdef MYPROJECT_CombatActivatable_generated_h
#error "CombatActivatable.generated.h already included, missing '#pragma once' in CombatActivatable.h"
#endif
#define MYPROJECT_CombatActivatable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Interface UCombatActivatable ***************************************************
#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatActivatable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeactivateInteraction); \
	DECLARE_FUNCTION(execActivateInteraction); \
	DECLARE_FUNCTION(execToggleInteraction);


struct Z_Construct_UClass_UCombatActivatable_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_UCombatActivatable(ETypeConstructPhase);

#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatActivatable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API UCombatActivatable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatActivatable(UCombatActivatable&&) = delete; \
	UCombatActivatable(const UCombatActivatable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, UCombatActivatable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatActivatable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatActivatable) \
	virtual ~UCombatActivatable() = default;


#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatActivatable_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	friend struct ::Z_Construct_UClass_UCombatActivatable_Statics; \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_UCombatActivatable(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCombatActivatable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UCombatActivatable) \
	DECLARE_SERIALIZER(UCombatActivatable)


#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatActivatable_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatActivatable_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatActivatable_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatActivatable_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatActivatable() {} \
public: \
	typedef UCombatActivatable UClassType; \
	typedef ICombatActivatable ThisClass; \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatActivatable_h_13_PROLOG
#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatActivatable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatActivatable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatActivatable_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatActivatable;

// ********** End Interface UCombatActivatable *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatActivatable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
