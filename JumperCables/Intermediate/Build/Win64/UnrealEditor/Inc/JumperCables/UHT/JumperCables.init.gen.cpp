// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumperCables_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	JUMPERCABLES_API UFunction* Z_Construct_UDelegateFunction_JumperCables_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_JumperCables;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_JumperCables()
	{
		if (!Z_Registration_Info_UPackage__Script_JumperCables.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_JumperCables_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/JumperCables",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x73A51F40,
			0x737B0E40,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_JumperCables.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_JumperCables.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_JumperCables(Z_Construct_UPackage__Script_JumperCables, TEXT("/Script/JumperCables"), Z_Registration_Info_UPackage__Script_JumperCables, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x73A51F40, 0x737B0E40));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
