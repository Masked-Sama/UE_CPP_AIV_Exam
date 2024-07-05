// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIVProjectCPP/PlatformerGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerGameModeBase() {}
// Cross Module References
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_APlatformerGameModeBase();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_APlatformerGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AIVProjectCPP();
// End Cross Module References
	void APlatformerGameModeBase::StaticRegisterNativesAPlatformerGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformerGameModeBase);
	UClass* Z_Construct_UClass_APlatformerGameModeBase_NoRegister()
	{
		return APlatformerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIVProjectCPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlatformerGameModeBase.h" },
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformerGameModeBase_Statics::ClassParams = {
		&APlatformerGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformerGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APlatformerGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APlatformerGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformerGameModeBase.OuterSingleton, Z_Construct_UClass_APlatformerGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformerGameModeBase.OuterSingleton;
	}
	template<> AIVPROJECTCPP_API UClass* StaticClass<APlatformerGameModeBase>()
	{
		return APlatformerGameModeBase::StaticClass();
	}
	APlatformerGameModeBase::APlatformerGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerGameModeBase);
	APlatformerGameModeBase::~APlatformerGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformerGameModeBase, APlatformerGameModeBase::StaticClass, TEXT("APlatformerGameModeBase"), &Z_Registration_Info_UClass_APlatformerGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformerGameModeBase), 996672618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerGameModeBase_h_872574313(TEXT("/Script/AIVProjectCPP"),
		Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
