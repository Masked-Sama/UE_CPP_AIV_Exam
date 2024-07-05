// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIVProjectCPP/PlatformerCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerCard() {}
// Cross Module References
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_APlatformerCard();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_APlatformerCard_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIVProjectCPP();
// End Cross Module References
	void APlatformerCard::StaticRegisterNativesAPlatformerCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformerCard);
	UClass* Z_Construct_UClass_APlatformerCard_NoRegister()
	{
		return APlatformerCard::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIVProjectCPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerCard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformerCard.h" },
		{ "ModuleRelativePath", "PlatformerCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerCard_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlatformerCard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformerCard_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerCard, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerCard_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_APlatformerCard_Statics::NewProp_StaticMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformerCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerCard_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformerCard_Statics::ClassParams = {
		&APlatformerCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlatformerCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerCard_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformerCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlatformerCard()
	{
		if (!Z_Registration_Info_UClass_APlatformerCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformerCard.OuterSingleton, Z_Construct_UClass_APlatformerCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformerCard.OuterSingleton;
	}
	template<> AIVPROJECTCPP_API UClass* StaticClass<APlatformerCard>()
	{
		return APlatformerCard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerCard);
	APlatformerCard::~APlatformerCard() {}
	struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformerCard, APlatformerCard::StaticClass, TEXT("APlatformerCard"), &Z_Registration_Info_UClass_APlatformerCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformerCard), 113745631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerCard_h_1839083203(TEXT("/Script/AIVProjectCPP"),
		Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
