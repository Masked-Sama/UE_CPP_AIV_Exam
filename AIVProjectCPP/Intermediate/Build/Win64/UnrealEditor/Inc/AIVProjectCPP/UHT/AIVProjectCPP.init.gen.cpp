// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIVProjectCPP_init() {}
	AIVPROJECTCPP_API UFunction* Z_Construct_UDelegateFunction_AIVProjectCPP_CardDetected__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AIVProjectCPP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AIVProjectCPP()
	{
		if (!Z_Registration_Info_UPackage__Script_AIVProjectCPP.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AIVProjectCPP_CardDetected__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AIVProjectCPP",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x10F3EEB5,
				0xF9DEA496,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AIVProjectCPP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AIVProjectCPP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AIVProjectCPP(Z_Construct_UPackage__Script_AIVProjectCPP, TEXT("/Script/AIVProjectCPP"), Z_Registration_Info_UPackage__Script_AIVProjectCPP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x10F3EEB5, 0xF9DEA496));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
