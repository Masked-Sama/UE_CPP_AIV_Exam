// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIVProjectCPP/ICollectibles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICollectibles() {}
// Cross Module References
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_UICollectibles();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_UICollectibles_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIVProjectCPP();
// End Cross Module References
	void UICollectibles::StaticRegisterNativesUICollectibles()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UICollectibles);
	UClass* Z_Construct_UClass_UICollectibles_NoRegister()
	{
		return UICollectibles::StaticClass();
	}
	struct Z_Construct_UClass_UICollectibles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UICollectibles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIVProjectCPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UICollectibles_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UICollectibles_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ICollectibles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UICollectibles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IICollectibles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UICollectibles_Statics::ClassParams = {
		&UICollectibles::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UICollectibles_Statics::Class_MetaDataParams), Z_Construct_UClass_UICollectibles_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UICollectibles()
	{
		if (!Z_Registration_Info_UClass_UICollectibles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UICollectibles.OuterSingleton, Z_Construct_UClass_UICollectibles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UICollectibles.OuterSingleton;
	}
	template<> AIVPROJECTCPP_API UClass* StaticClass<UICollectibles>()
	{
		return UICollectibles::StaticClass();
	}
	UICollectibles::UICollectibles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UICollectibles);
	UICollectibles::~UICollectibles() {}
	struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_ICollectibles_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_ICollectibles_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UICollectibles, UICollectibles::StaticClass, TEXT("UICollectibles"), &Z_Registration_Info_UClass_UICollectibles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UICollectibles), 588612786U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_ICollectibles_h_1310981984(TEXT("/Script/AIVProjectCPP"),
		Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_ICollectibles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_ICollectibles_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
