// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusUtils/Public/ContinuousOverlapSphereComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContinuousOverlapSphereComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	OCULUSUTILS_API UClass* Z_Construct_UClass_UContinuousOverlapSphereComponent();
	OCULUSUTILS_API UClass* Z_Construct_UClass_UContinuousOverlapSphereComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusUtils();
// End Cross Module References
	void UContinuousOverlapSphereComponent::StaticRegisterNativesUContinuousOverlapSphereComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContinuousOverlapSphereComponent);
	UClass* Z_Construct_UClass_UContinuousOverlapSphereComponent_NoRegister()
	{
		return UContinuousOverlapSphereComponent::StaticClass();
	}
	struct Z_Construct_UClass_UContinuousOverlapSphereComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContinuousOverlapSphereComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusUtils,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousOverlapSphereComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContinuousOverlapSphereComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Used similarly to SphereComponent, but modified to use continuous \"collision\" for triggering overlaps.\n * Useful for fast-moving spheres with non-overlap collision disabled.\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "ContinuousOverlapSphereComponent.h" },
		{ "ModuleRelativePath", "Public/ContinuousOverlapSphereComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used similarly to SphereComponent, but modified to use continuous \"collision\" for triggering overlaps.\nUseful for fast-moving spheres with non-overlap collision disabled." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContinuousOverlapSphereComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContinuousOverlapSphereComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContinuousOverlapSphereComponent_Statics::ClassParams = {
		&UContinuousOverlapSphereComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContinuousOverlapSphereComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UContinuousOverlapSphereComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UContinuousOverlapSphereComponent()
	{
		if (!Z_Registration_Info_UClass_UContinuousOverlapSphereComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContinuousOverlapSphereComponent.OuterSingleton, Z_Construct_UClass_UContinuousOverlapSphereComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContinuousOverlapSphereComponent.OuterSingleton;
	}
	template<> OCULUSUTILS_API UClass* StaticClass<UContinuousOverlapSphereComponent>()
	{
		return UContinuousOverlapSphereComponent::StaticClass();
	}
	UContinuousOverlapSphereComponent::UContinuousOverlapSphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContinuousOverlapSphereComponent);
	UContinuousOverlapSphereComponent::~UContinuousOverlapSphereComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_ContinuousOverlapSphereComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_ContinuousOverlapSphereComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContinuousOverlapSphereComponent, UContinuousOverlapSphereComponent::StaticClass, TEXT("UContinuousOverlapSphereComponent"), &Z_Registration_Info_UClass_UContinuousOverlapSphereComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContinuousOverlapSphereComponent), 1583882829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_ContinuousOverlapSphereComponent_h_279033564(TEXT("/Script/OculusUtils"),
		Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_ContinuousOverlapSphereComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_ContinuousOverlapSphereComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
