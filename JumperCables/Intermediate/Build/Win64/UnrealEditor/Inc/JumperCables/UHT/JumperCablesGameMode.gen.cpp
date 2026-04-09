// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumperCablesGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeJumperCablesGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
JUMPERCABLES_API UClass* Z_Construct_UClass_AJumperCablesGameMode();
JUMPERCABLES_API UClass* Z_Construct_UClass_AJumperCablesGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_JumperCables();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AJumperCablesGameMode ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AJumperCablesGameMode;
UClass* AJumperCablesGameMode::GetPrivateStaticClass()
{
	using TClass = AJumperCablesGameMode;
	if (!Z_Registration_Info_UClass_AJumperCablesGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("JumperCablesGameMode"),
			Z_Registration_Info_UClass_AJumperCablesGameMode.InnerSingleton,
			StaticRegisterNativesAJumperCablesGameMode,
			sizeof(TClass),
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
	return Z_Registration_Info_UClass_AJumperCablesGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AJumperCablesGameMode_NoRegister()
{
	return AJumperCablesGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AJumperCablesGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "JumperCablesGameMode.h" },
		{ "ModuleRelativePath", "JumperCablesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AJumperCablesGameMode constinit property declarations ********************
// ********** End Class AJumperCablesGameMode constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJumperCablesGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AJumperCablesGameMode_Statics
UObject* (*const Z_Construct_UClass_AJumperCablesGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_JumperCables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumperCablesGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJumperCablesGameMode_Statics::ClassParams = {
	&AJumperCablesGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJumperCablesGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AJumperCablesGameMode_Statics::Class_MetaDataParams)
};
void AJumperCablesGameMode::StaticRegisterNativesAJumperCablesGameMode()
{
}
UClass* Z_Construct_UClass_AJumperCablesGameMode()
{
	if (!Z_Registration_Info_UClass_AJumperCablesGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJumperCablesGameMode.OuterSingleton, Z_Construct_UClass_AJumperCablesGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJumperCablesGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AJumperCablesGameMode);
AJumperCablesGameMode::~AJumperCablesGameMode() {}
// ********** End Class AJumperCablesGameMode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesGameMode_h__Script_JumperCables_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJumperCablesGameMode, AJumperCablesGameMode::StaticClass, TEXT("AJumperCablesGameMode"), &Z_Registration_Info_UClass_AJumperCablesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJumperCablesGameMode), 1099504843U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesGameMode_h__Script_JumperCables_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesGameMode_h__Script_JumperCables_4134915500{
	TEXT("/Script/JumperCables"),
	Z_CompiledInDeferFile_FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesGameMode_h__Script_JumperCables_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Precious_Donkor_Games_UnrealProjects_JumperCables_Source_JumperCables_JumperCablesGameMode_h__Script_JumperCables_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
