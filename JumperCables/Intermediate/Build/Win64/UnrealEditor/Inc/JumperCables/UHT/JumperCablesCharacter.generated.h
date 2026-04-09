// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JumperCablesCharacter.h"

#ifdef JUMPERCABLES_JumperCablesCharacter_generated_h
#error "JumperCablesCharacter.generated.h already included, missing '#pragma once' in JumperCablesCharacter.h"
#endif
#define JUMPERCABLES_JumperCablesCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AJumperCablesCharacter ***************************************************
#define FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_AJumperCablesCharacter_Statics;
JUMPERCABLES_API UClass* Z_Construct_UClass_AJumperCablesCharacter_NoRegister();

#define FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJumperCablesCharacter(); \
	friend struct ::Z_Construct_UClass_AJumperCablesCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend JUMPERCABLES_API UClass* ::Z_Construct_UClass_AJumperCablesCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AJumperCablesCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/JumperCables"), Z_Construct_UClass_AJumperCablesCharacter_NoRegister) \
	DECLARE_SERIALIZER(AJumperCablesCharacter)


#define FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AJumperCablesCharacter(AJumperCablesCharacter&&) = delete; \
	AJumperCablesCharacter(const AJumperCablesCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJumperCablesCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJumperCablesCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AJumperCablesCharacter) \
	NO_API virtual ~AJumperCablesCharacter();


#define FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesCharacter_h_21_PROLOG
#define FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AJumperCablesCharacter;

// ********** End Class AJumperCablesCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
