// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CheckPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef AIVPROJECTCPP_CheckPoint_generated_h
#error "CheckPoint.generated.h already included, missing '#pragma once' in CheckPoint.h"
#endif
#define AIVPROJECTCPP_CheckPoint_generated_h

#define FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_SPARSE_DATA
#define FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_ACCESSORS
#define FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACheckPoint(); \
	friend struct Z_Construct_UClass_ACheckPoint_Statics; \
public: \
	DECLARE_CLASS(ACheckPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIVProjectCPP"), NO_API) \
	DECLARE_SERIALIZER(ACheckPoint)


#define FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckPoint(ACheckPoint&&); \
	NO_API ACheckPoint(const ACheckPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACheckPoint) \
	NO_API virtual ~ACheckPoint();


#define FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_9_PROLOG
#define FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_SPARSE_DATA \
	FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_ACCESSORS \
	FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIVPROJECTCPP_API UClass* StaticClass<class ACheckPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ceret_OneDrive_Desktop_AIVProjectCPP_Source_AIVProjectCPP_CheckPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
