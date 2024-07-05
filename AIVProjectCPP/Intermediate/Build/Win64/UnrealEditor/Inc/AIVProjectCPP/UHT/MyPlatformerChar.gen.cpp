// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIVProjectCPP/MyPlatformerChar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlatformerChar() {}
// Cross Module References
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_AMyPlatformerChar();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_AMyPlatformerChar_NoRegister();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_AMyTextRenderActor_NoRegister();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_UICollectibles_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIVProjectCPP();
// End Cross Module References
	void AMyPlatformerChar::StaticRegisterNativesAMyPlatformerChar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlatformerChar);
	UClass* Z_Construct_UClass_AMyPlatformerChar_NoRegister()
	{
		return AMyPlatformerChar::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlatformerChar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectiblesCollected_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollectiblesCollected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlatformerChar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AIVProjectCPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlatformerChar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlatformerChar.h" },
		{ "ModuleRelativePath", "MyPlatformerChar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_PlatformMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "MyPlatformerChar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_PlatformMappingContext = { "PlatformMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlatformerChar, PlatformMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_PlatformMappingContext_MetaData), Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_PlatformMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "MyPlatformerChar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlatformerChar, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "MyPlatformerChar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlatformerChar, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "MyPlatformerChar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlatformerChar, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interact Action */" },
#endif
		{ "ModuleRelativePath", "MyPlatformerChar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interact Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlatformerChar, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_InteractAction_MetaData), Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_InteractAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_TeleportAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Teleport Action */" },
#endif
		{ "ModuleRelativePath", "MyPlatformerChar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Teleport Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_TeleportAction = { "TeleportAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlatformerChar, TeleportAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_TeleportAction_MetaData), Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_TeleportAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_SweepDistance_MetaData[] = {
		{ "ModuleRelativePath", "MyPlatformerChar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_SweepDistance = { "SweepDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlatformerChar, SweepDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_SweepDistance_MetaData), Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_SweepDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "MyPlatformerChar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlatformerChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlatformerChar, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_RenderActor_MetaData[] = {
		{ "Category", "MyPlatformerChar" },
		{ "ModuleRelativePath", "MyPlatformerChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_RenderActor = { "RenderActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlatformerChar, RenderActor), Z_Construct_UClass_AMyTextRenderActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_RenderActor_MetaData), Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_RenderActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_CollectiblesCollected_MetaData[] = {
		{ "ModuleRelativePath", "MyPlatformerChar.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_CollectiblesCollected = { "CollectiblesCollected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlatformerChar, CollectiblesCollected), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_CollectiblesCollected_MetaData), Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_CollectiblesCollected_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlatformerChar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_PlatformMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_TeleportAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_SweepDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_RenderActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlatformerChar_Statics::NewProp_CollectiblesCollected,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyPlatformerChar_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UICollectibles_NoRegister, (int32)VTABLE_OFFSET(AMyPlatformerChar, IICollectibles), false },  // 588612786
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlatformerChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlatformerChar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlatformerChar_Statics::ClassParams = {
		&AMyPlatformerChar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyPlatformerChar_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlatformerChar_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlatformerChar_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyPlatformerChar()
	{
		if (!Z_Registration_Info_UClass_AMyPlatformerChar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlatformerChar.OuterSingleton, Z_Construct_UClass_AMyPlatformerChar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPlatformerChar.OuterSingleton;
	}
	template<> AIVPROJECTCPP_API UClass* StaticClass<AMyPlatformerChar>()
	{
		return AMyPlatformerChar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlatformerChar);
	AMyPlatformerChar::~AMyPlatformerChar() {}
	struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_MyPlatformerChar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_MyPlatformerChar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlatformerChar, AMyPlatformerChar::StaticClass, TEXT("AMyPlatformerChar"), &Z_Registration_Info_UClass_AMyPlatformerChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlatformerChar), 424626969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_MyPlatformerChar_h_1939207666(TEXT("/Script/AIVProjectCPP"),
		Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_MyPlatformerChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_MyPlatformerChar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
