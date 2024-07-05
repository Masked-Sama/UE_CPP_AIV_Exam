// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIVProjectCPP/PlatformSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformSaveGame() {}
// Cross Module References
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_UPlatformSaveGame();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_UPlatformSaveGame_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_AIVProjectCPP();
// End Cross Module References
	void UPlatformSaveGame::StaticRegisterNativesUPlatformSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformSaveGame);
	UClass* Z_Construct_UClass_UPlatformSaveGame_NoRegister()
	{
		return UPlatformSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerRotator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_AIVProjectCPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformSaveGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlatformSaveGame.h" },
		{ "ModuleRelativePath", "PlatformSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "PlatformSaveGame" },
		{ "ModuleRelativePath", "PlatformSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformSaveGame, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerLocation_MetaData), Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerScale_MetaData[] = {
		{ "Category", "PlatformSaveGame" },
		{ "ModuleRelativePath", "PlatformSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerScale = { "PlayerScale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformSaveGame, PlayerScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerScale_MetaData), Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerRotator_MetaData[] = {
		{ "Category", "PlatformSaveGame" },
		{ "ModuleRelativePath", "PlatformSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerRotator = { "PlayerRotator", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformSaveGame, PlayerRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerRotator_MetaData), Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerRotator_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformSaveGame_Statics::NewProp_PlayerRotator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformSaveGame_Statics::ClassParams = {
		&UPlatformSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlatformSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlatformSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlatformSaveGame()
	{
		if (!Z_Registration_Info_UClass_UPlatformSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformSaveGame.OuterSingleton, Z_Construct_UClass_UPlatformSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformSaveGame.OuterSingleton;
	}
	template<> AIVPROJECTCPP_API UClass* StaticClass<UPlatformSaveGame>()
	{
		return UPlatformSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformSaveGame);
	UPlatformSaveGame::~UPlatformSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformSaveGame, UPlatformSaveGame::StaticClass, TEXT("UPlatformSaveGame"), &Z_Registration_Info_UClass_UPlatformSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformSaveGame), 2777884827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformSaveGame_h_1927893233(TEXT("/Script/AIVProjectCPP"),
		Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
