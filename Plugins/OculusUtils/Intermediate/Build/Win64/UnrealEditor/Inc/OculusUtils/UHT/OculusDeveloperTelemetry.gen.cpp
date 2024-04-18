// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusUtils/Public/OculusDeveloperTelemetry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusDeveloperTelemetry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OCULUSUTILS_API UClass* Z_Construct_UClass_UOculusDeveloperTelemetry();
	OCULUSUTILS_API UClass* Z_Construct_UClass_UOculusDeveloperTelemetry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusUtils();
// End Cross Module References
	void UOculusDeveloperTelemetry::StaticRegisterNativesUOculusDeveloperTelemetry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusDeveloperTelemetry);
	UClass* Z_Construct_UClass_UOculusDeveloperTelemetry_NoRegister()
	{
		return UOculusDeveloperTelemetry::StaticClass();
	}
	struct Z_Construct_UClass_UOculusDeveloperTelemetry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPrompted_MetaData[];
#endif
		static void NewProp_bHasPrompted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPrompted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusUtils,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Oculus Developer Telemetry" },
		{ "IncludePath", "OculusDeveloperTelemetry.h" },
		{ "ModuleRelativePath", "Public/OculusDeveloperTelemetry.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "OculusDeveloperTelemetry" },
		{ "ModuleRelativePath", "Public/OculusDeveloperTelemetry.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Enabling telemetry will transmit data to Oculus about your usage of its samples and tools." },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UOculusDeveloperTelemetry*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusDeveloperTelemetry), &Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bIsEnabled_MetaData), Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bIsEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bHasPrompted_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusDeveloperTelemetry.h" },
	};
#endif
	void Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bHasPrompted_SetBit(void* Obj)
	{
		((UOculusDeveloperTelemetry*)Obj)->bHasPrompted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bHasPrompted = { "bHasPrompted", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusDeveloperTelemetry), &Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bHasPrompted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bHasPrompted_MetaData), Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bHasPrompted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::NewProp_bHasPrompted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusDeveloperTelemetry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::ClassParams = {
		&UOculusDeveloperTelemetry::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusDeveloperTelemetry()
	{
		if (!Z_Registration_Info_UClass_UOculusDeveloperTelemetry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusDeveloperTelemetry.OuterSingleton, Z_Construct_UClass_UOculusDeveloperTelemetry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusDeveloperTelemetry.OuterSingleton;
	}
	template<> OCULUSUTILS_API UClass* StaticClass<UOculusDeveloperTelemetry>()
	{
		return UOculusDeveloperTelemetry::StaticClass();
	}
	UOculusDeveloperTelemetry::UOculusDeveloperTelemetry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusDeveloperTelemetry);
	UOculusDeveloperTelemetry::~UOculusDeveloperTelemetry() {}
	struct Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusDeveloperTelemetry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusDeveloperTelemetry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusDeveloperTelemetry, UOculusDeveloperTelemetry::StaticClass, TEXT("UOculusDeveloperTelemetry"), &Z_Registration_Info_UClass_UOculusDeveloperTelemetry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusDeveloperTelemetry), 2399059596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusDeveloperTelemetry_h_2030237889(TEXT("/Script/OculusUtils"),
		Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusDeveloperTelemetry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusDeveloperTelemetry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
