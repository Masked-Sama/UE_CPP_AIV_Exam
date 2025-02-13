// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIVProjectCPP/PlatformerDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerDoor() {}
// Cross Module References
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_APlatformerDoor();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_APlatformerDoor_NoRegister();
	AIVPROJECTCPP_API UClass* Z_Construct_UClass_APlatformerPad_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AIVProjectCPP();
// End Cross Module References
	DEFINE_FUNCTION(APlatformerDoor::execOpenDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoor();
		P_NATIVE_END;
	}
	void APlatformerDoor::StaticRegisterNativesAPlatformerDoor()
	{
		UClass* Class = APlatformerDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenDoor", &APlatformerDoor::execOpenDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlatformerDoor_OpenDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformerDoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlatformerDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformerDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformerDoor, nullptr, "OpenDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformerDoor_OpenDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlatformerDoor_OpenDoor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlatformerDoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlatformerDoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformerDoor);
	UClass* Z_Construct_UClass_APlatformerDoor_NoRegister()
	{
		return APlatformerDoor::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pad_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIVProjectCPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerDoor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlatformerDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlatformerDoor_OpenDoor, "OpenDoor" }, // 1468585718
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerDoor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformerDoor.h" },
		{ "ModuleRelativePath", "PlatformerDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerDoor_Statics::NewProp_Pad_MetaData[] = {
		{ "Category", "PlatformerDoor" },
		{ "ModuleRelativePath", "PlatformerDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformerDoor_Statics::NewProp_Pad = { "Pad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerDoor, Pad), Z_Construct_UClass_APlatformerPad_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerDoor_Statics::NewProp_Pad_MetaData), Z_Construct_UClass_APlatformerDoor_Statics::NewProp_Pad_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformerDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerDoor_Statics::NewProp_Pad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformerDoor_Statics::ClassParams = {
		&APlatformerDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlatformerDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformerDoor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerDoor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlatformerDoor()
	{
		if (!Z_Registration_Info_UClass_APlatformerDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformerDoor.OuterSingleton, Z_Construct_UClass_APlatformerDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformerDoor.OuterSingleton;
	}
	template<> AIVPROJECTCPP_API UClass* StaticClass<APlatformerDoor>()
	{
		return APlatformerDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerDoor);
	APlatformerDoor::~APlatformerDoor() {}
	struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformerDoor, APlatformerDoor::StaticClass, TEXT("APlatformerDoor"), &Z_Registration_Info_UClass_APlatformerDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformerDoor), 3265188308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerDoor_h_10841904(TEXT("/Script/AIVProjectCPP"),
		Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_PlatformerDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
