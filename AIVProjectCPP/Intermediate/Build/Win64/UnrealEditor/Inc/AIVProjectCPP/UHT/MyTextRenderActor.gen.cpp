// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIVProjectCPP/MyTextRenderActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTextRenderActor() {}
// Cross Module References
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_AMyTextRenderActor();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_AMyTextRenderActor_NoRegister();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_UUpdateCollectiblesCounter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATextRenderActor();
	UPackage* Z_Construct_UPackage__Script_AIVProjectCPP();
// End Cross Module References
	void AMyTextRenderActor::StaticRegisterNativesAMyTextRenderActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTextRenderActor);
	UClass* Z_Construct_UClass_AMyTextRenderActor_NoRegister()
	{
		return AMyTextRenderActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyTextRenderActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTextRenderActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATextRenderActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIVProjectCPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTextRenderActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTextRenderActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Attachment" },
		{ "IncludePath", "MyTextRenderActor.h" },
		{ "ModuleRelativePath", "MyTextRenderActor.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyTextRenderActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUpdateCollectiblesCounter_NoRegister, (int32)VTABLE_OFFSET(AMyTextRenderActor, IUpdateCollectiblesCounter), false },  // 1109644671
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTextRenderActor_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTextRenderActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTextRenderActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTextRenderActor_Statics::ClassParams = {
		&AMyTextRenderActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTextRenderActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTextRenderActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyTextRenderActor()
	{
		if (!Z_Registration_Info_UClass_AMyTextRenderActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTextRenderActor.OuterSingleton, Z_Construct_UClass_AMyTextRenderActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTextRenderActor.OuterSingleton;
	}
	template<> AIVPROJECTCPP_API UClass* StaticClass<AMyTextRenderActor>()
	{
		return AMyTextRenderActor::StaticClass();
	}
	AMyTextRenderActor::AMyTextRenderActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTextRenderActor);
	AMyTextRenderActor::~AMyTextRenderActor() {}
	struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_MyTextRenderActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_MyTextRenderActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTextRenderActor, AMyTextRenderActor::StaticClass, TEXT("AMyTextRenderActor"), &Z_Registration_Info_UClass_AMyTextRenderActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTextRenderActor), 1420551887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_MyTextRenderActor_h_3200362543(TEXT("/Script/AIVProjectCPP"),
		Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_MyTextRenderActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_MyTextRenderActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
