// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIVProjectCPP/AIVProjectCPPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIVProjectCPPGameMode() {}
// Cross Module References
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_AAIVProjectCPPGameMode();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_AAIVProjectCPPGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AIVProjectCPP();
// End Cross Module References
	void AAIVProjectCPPGameMode::StaticRegisterNativesAAIVProjectCPPGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIVProjectCPPGameMode);
	UClass* Z_Construct_UClass_AAIVProjectCPPGameMode_NoRegister()
	{
		return AAIVProjectCPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAIVProjectCPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIVProjectCPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIVProjectCPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIVProjectCPPGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIVProjectCPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AIVProjectCPPGameMode.h" },
		{ "ModuleRelativePath", "AIVProjectCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIVProjectCPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIVProjectCPPGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIVProjectCPPGameMode_Statics::ClassParams = {
		&AAIVProjectCPPGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIVProjectCPPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIVProjectCPPGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAIVProjectCPPGameMode()
	{
		if (!Z_Registration_Info_UClass_AAIVProjectCPPGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIVProjectCPPGameMode.OuterSingleton, Z_Construct_UClass_AAIVProjectCPPGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIVProjectCPPGameMode.OuterSingleton;
	}
	template<> AIVPROJECTCPP_API UClass* StaticClass<AAIVProjectCPPGameMode>()
	{
		return AAIVProjectCPPGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIVProjectCPPGameMode);
	AAIVProjectCPPGameMode::~AAIVProjectCPPGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_AIVProjectCPPGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_AIVProjectCPPGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIVProjectCPPGameMode, AAIVProjectCPPGameMode::StaticClass, TEXT("AAIVProjectCPPGameMode"), &Z_Registration_Info_UClass_AAIVProjectCPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIVProjectCPPGameMode), 2921538797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_AIVProjectCPPGameMode_h_325806501(TEXT("/Script/AIVProjectCPP"),
		Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_AIVProjectCPPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_AIVProjectCPPGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
