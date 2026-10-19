// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/Interfaces/CombatAttacker.h"

#ifdef MYPROJECT_CombatAttacker_generated_h
#error "CombatAttacker.generated.h already included, missing '#pragma once' in CombatAttacker.h"
#endif
#define MYPROJECT_CombatAttacker_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCombatAttacker ******************************************************
#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatAttacker_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckChargedAttack); \
	DECLARE_FUNCTION(execCheckCombo); \
	DECLARE_FUNCTION(execDoAttackTrace);


struct Z_Construct_UClass_UCombatAttacker_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_UCombatAttacker(ETypeConstructPhase);

#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatAttacker_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API UCombatAttacker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatAttacker(UCombatAttacker&&) = delete; \
	UCombatAttacker(const UCombatAttacker&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, UCombatAttacker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatAttacker); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatAttacker) \
	virtual ~UCombatAttacker() = default;


#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatAttacker_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	friend struct ::Z_Construct_UClass_UCombatAttacker_Statics; \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_UCombatAttacker(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCombatAttacker, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UCombatAttacker) \
	DECLARE_SERIALIZER(UCombatAttacker)


#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatAttacker_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatAttacker_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatAttacker_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatAttacker_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatAttacker() {} \
public: \
	typedef UCombatAttacker UClassType; \
	typedef ICombatAttacker ThisClass; \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatAttacker_h_13_PROLOG
#define FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatAttacker_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatAttacker_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatAttacker_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatAttacker;

// ********** End Interface UCombatAttacker ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Swiji_Unreal_Fmod_Reaper_5_8_Source_MyProject_Variant_Combat_Interfaces_CombatAttacker_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
