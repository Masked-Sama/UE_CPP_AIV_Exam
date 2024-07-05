// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIVProjectCPP/PlatformerBoxV2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerBoxV2() {}
// Cross Module References
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_APlatformerBoxV2();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_APlatformerBoxV2_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIVProjectCPP();
// End Cross Module References
	void APlatformerBoxV2::StaticRegisterNativesAPlatformerBoxV2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformerBoxV2);
	UClass* Z_Construct_UClass_APlatformerBoxV2_NoRegister()
	{
		return APlatformerBoxV2::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerBoxV2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformStaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerBoxV2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIVProjectCPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerBoxV2_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerBoxV2_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "PlatformerBoxV2.h" },
		{ "ModuleRelativePath", "PlatformerBoxV2.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerBoxV2_Statics::NewProp_PlatformStaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlatformerBoxV2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformerBoxV2_Statics::NewProp_PlatformStaticMeshComponent = { "PlatformStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerBoxV2, PlatformStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerBoxV2_Statics::NewProp_PlatformStaticMeshComponent_MetaData), Z_Construct_UClass_APlatformerBoxV2_Statics::NewProp_PlatformStaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerBoxV2_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlatformerBoxV2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformerBoxV2_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerBoxV2, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerBoxV2_Statics::NewProp_Root_MetaData), Z_Construct_UClass_APlatformerBoxV2_Statics::NewProp_Root_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformerBoxV2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerBoxV2_Statics::NewProp_PlatformStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerBoxV2_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerBoxV2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerBoxV2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformerBoxV2_Statics::ClassParams = {
		&APlatformerBoxV2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlatformerBoxV2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerBoxV2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerBoxV2_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformerBoxV2_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerBoxV2_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlatformerBoxV2()
	{
		if (!Z_Registration_Info_UClass_APlatformerBoxV2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformerBoxV2.OuterSingleton, Z_Construct_UClass_APlatformerBoxV2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformerBoxV2.OuterSingleton;
	}
	template<> AIVPROJECTCPP_API UClass* StaticClass<APlatformerBoxV2>()
	{
		return APlatformerBoxV2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerBoxV2);
	APlatformerBoxV2::~APlatformerBoxV2() {}
	struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerBoxV2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerBoxV2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformerBoxV2, APlatformerBoxV2::StaticClass, TEXT("APlatformerBoxV2"), &Z_Registration_Info_UClass_APlatformerBoxV2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformerBoxV2), 879731921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerBoxV2_h_719066923(TEXT("/Script/AIVProjectCPP"),
		Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerBoxV2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerBoxV2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
