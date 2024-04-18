// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusUtils/Public/OculusUtilsLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusUtilsLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	OCULUSUTILS_API UClass* Z_Construct_UClass_UBuildInfo();
	OCULUSUTILS_API UClass* Z_Construct_UClass_UBuildInfo_NoRegister();
	OCULUSUTILS_API UClass* Z_Construct_UClass_UOculusUtilsLibrary();
	OCULUSUTILS_API UClass* Z_Construct_UClass_UOculusUtilsLibrary_NoRegister();
	OCULUSUTILS_API UEnum* Z_Construct_UEnum_OculusUtils_ETickUntilInputPin();
	UPackage* Z_Construct_UPackage__Script_OculusUtils();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETickUntilInputPin;
	static UEnum* ETickUntilInputPin_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETickUntilInputPin.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETickUntilInputPin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusUtils_ETickUntilInputPin, (UObject*)Z_Construct_UPackage__Script_OculusUtils(), TEXT("ETickUntilInputPin"));
		}
		return Z_Registration_Info_UEnum_ETickUntilInputPin.OuterSingleton;
	}
	template<> OCULUSUTILS_API UEnum* StaticEnum<ETickUntilInputPin>()
	{
		return ETickUntilInputPin_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusUtils_ETickUntilInputPin_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusUtils_ETickUntilInputPin_Statics::Enumerators[] = {
		{ "ETickUntilInputPin::Start", (int64)ETickUntilInputPin::Start },
		{ "ETickUntilInputPin::Break", (int64)ETickUntilInputPin::Break },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusUtils_ETickUntilInputPin_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Break.Name", "ETickUntilInputPin::Break" },
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
		{ "Start.Name", "ETickUntilInputPin::Start" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusUtils_ETickUntilInputPin_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusUtils,
		nullptr,
		"ETickUntilInputPin",
		"ETickUntilInputPin",
		Z_Construct_UEnum_OculusUtils_ETickUntilInputPin_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusUtils_ETickUntilInputPin_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusUtils_ETickUntilInputPin_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusUtils_ETickUntilInputPin_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusUtils_ETickUntilInputPin()
	{
		if (!Z_Registration_Info_UEnum_ETickUntilInputPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETickUntilInputPin.InnerSingleton, Z_Construct_UEnum_OculusUtils_ETickUntilInputPin_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETickUntilInputPin.InnerSingleton;
	}
	void UBuildInfo::StaticRegisterNativesUBuildInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildInfo);
	UClass* Z_Construct_UClass_UBuildInfo_NoRegister()
	{
		return UBuildInfo::StaticClass();
	}
	struct Z_Construct_UClass_UBuildInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageChangelist_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageChangelist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageDateAndTime_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageDateAndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuildInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusUtils,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildInfo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Build configuration from the project's game configuration.\n */" },
#endif
		{ "IncludePath", "OculusUtilsLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Build configuration from the project's game configuration." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageChangelist_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Source control changelist */" },
#endif
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source control changelist" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageChangelist = { "PackageChangelist", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildInfo, PackageChangelist), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageChangelist_MetaData), Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageChangelist_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageDateAndTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Build date and time (Pacific time) \"YYYYMMDD HHMMSS\" */" },
#endif
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Build date and time (Pacific time) \"YYYYMMDD HHMMSS\"" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageDateAndTime = { "PackageDateAndTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildInfo, PackageDateAndTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageDateAndTime_MetaData), Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageDateAndTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuildInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageChangelist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageDateAndTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuildInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildInfo_Statics::ClassParams = {
		&UBuildInfo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBuildInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBuildInfo_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuildInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBuildInfo()
	{
		if (!Z_Registration_Info_UClass_UBuildInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildInfo.OuterSingleton, Z_Construct_UClass_UBuildInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuildInfo.OuterSingleton;
	}
	template<> OCULUSUTILS_API UClass* StaticClass<UBuildInfo>()
	{
		return UBuildInfo::StaticClass();
	}
	UBuildInfo::UBuildInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildInfo);
	UBuildInfo::~UBuildInfo() {}
	DEFINE_FUNCTION(UOculusUtilsLibrary::execTickUntil)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ETickUntilInputPin,Z_Param_InputPin);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOculusUtilsLibrary::TickUntil(Z_Param_WorldContextObject,ETickUntilInputPin(Z_Param_InputPin),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusUtilsLibrary::execSortComponentsByName)
	{
		P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_Components);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UActorComponent*>*)Z_Param__Result=UOculusUtilsLibrary::SortComponentsByName(Z_Param_Out_Components);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusUtilsLibrary::execGetOculusBuildInfo)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SourceControlChangelist);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_BuildDateTimeString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusUtilsLibrary::GetOculusBuildInfo(Z_Param_Out_SourceControlChangelist,Z_Param_Out_BuildDateTimeString);
		P_NATIVE_END;
	}
	void UOculusUtilsLibrary::StaticRegisterNativesUOculusUtilsLibrary()
	{
		UClass* Class = UOculusUtilsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOculusBuildInfo", &UOculusUtilsLibrary::execGetOculusBuildInfo },
			{ "SortComponentsByName", &UOculusUtilsLibrary::execSortComponentsByName },
			{ "TickUntil", &UOculusUtilsLibrary::execTickUntil },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics
	{
		struct OculusUtilsLibrary_eventGetOculusBuildInfo_Parms
		{
			FString SourceControlChangelist;
			FString BuildDateTimeString;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceControlChangelist;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildDateTimeString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::NewProp_SourceControlChangelist = { "SourceControlChangelist", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusUtilsLibrary_eventGetOculusBuildInfo_Parms, SourceControlChangelist), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::NewProp_BuildDateTimeString = { "BuildDateTimeString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusUtilsLibrary_eventGetOculusBuildInfo_Parms, BuildDateTimeString), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusUtilsLibrary_eventGetOculusBuildInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusUtilsLibrary_eventGetOculusBuildInfo_Parms), &Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::NewProp_SourceControlChangelist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::NewProp_BuildDateTimeString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Oculus Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the Oculus store version. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Oculus store version." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusUtilsLibrary, nullptr, "GetOculusBuildInfo", nullptr, nullptr, Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::OculusUtilsLibrary_eventGetOculusBuildInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::OculusUtilsLibrary_eventGetOculusBuildInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics
	{
		struct OculusUtilsLibrary_eventSortComponentsByName_Parms
		{
			TArray<UActorComponent*> Components;
			TArray<UActorComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusUtilsLibrary_eventSortComponentsByName_Parms, Components), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_Components_MetaData), Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_Components_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusUtilsLibrary_eventSortComponentsByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_Components_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_Components,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Oculus Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the array of components sorted by name. */" },
#endif
		{ "ComponentClass", "ActorComponent" },
		{ "DeterminesOutputType", "Components" },
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the array of components sorted by name." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusUtilsLibrary, nullptr, "SortComponentsByName", nullptr, nullptr, Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::OculusUtilsLibrary_eventSortComponentsByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::OculusUtilsLibrary_eventSortComponentsByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics
	{
		struct OculusUtilsLibrary_eventTickUntil_Parms
		{
			const UObject* WorldContextObject;
			ETickUntilInputPin InputPin;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputPin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusUtilsLibrary_eventTickUntil_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::NewProp_InputPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::NewProp_InputPin = { "InputPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusUtilsLibrary_eventTickUntil_Parms, InputPin), Z_Construct_UEnum_OculusUtils_ETickUntilInputPin, METADATA_PARAMS(0, nullptr) }; // 2291360514
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusUtilsLibrary_eventTickUntil_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::NewProp_InputPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::NewProp_InputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|FlowControl" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Executes the \"Completed\" pin every tick until Break is hit. Calling Start again while it is still ticking will be ignored.\n\x09* \n\x09* @param WorldContextObject\x09World context.\n\x09* @param InputPin\x09Which pin is being called.\n\x09* @param LatentInfo \x09The latent action.\n\x09*/" },
#endif
		{ "ExpandEnumAsExecs", "InputPin" },
		{ "Keywords", "sleep" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes the \"Completed\" pin every tick until Break is hit. Calling Start again while it is still ticking will be ignored.\n\n@param WorldContextObject     World context.\n@param InputPin       Which pin is being called.\n@param LatentInfo     The latent action." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusUtilsLibrary, nullptr, "TickUntil", nullptr, nullptr, Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::OculusUtilsLibrary_eventTickUntil_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::OculusUtilsLibrary_eventTickUntil_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusUtilsLibrary);
	UClass* Z_Construct_UClass_UOculusUtilsLibrary_NoRegister()
	{
		return UOculusUtilsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOculusUtilsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusUtilsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusUtils,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusUtilsLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusUtilsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo, "GetOculusBuildInfo" }, // 1484817995
		{ &Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName, "SortComponentsByName" }, // 2197260558
		{ &Z_Construct_UFunction_UOculusUtilsLibrary_TickUntil, "TickUntil" }, // 2638704843
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusUtilsLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusUtilsLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Oculus Utils Blueprint Library.\n */" },
#endif
		{ "IncludePath", "OculusUtilsLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Oculus Utils Blueprint Library." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusUtilsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusUtilsLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusUtilsLibrary_Statics::ClassParams = {
		&UOculusUtilsLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusUtilsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusUtilsLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusUtilsLibrary()
	{
		if (!Z_Registration_Info_UClass_UOculusUtilsLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusUtilsLibrary.OuterSingleton, Z_Construct_UClass_UOculusUtilsLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusUtilsLibrary.OuterSingleton;
	}
	template<> OCULUSUTILS_API UClass* StaticClass<UOculusUtilsLibrary>()
	{
		return UOculusUtilsLibrary::StaticClass();
	}
	UOculusUtilsLibrary::UOculusUtilsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusUtilsLibrary);
	UOculusUtilsLibrary::~UOculusUtilsLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusUtilsLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusUtilsLibrary_h_Statics::EnumInfo[] = {
		{ ETickUntilInputPin_StaticEnum, TEXT("ETickUntilInputPin"), &Z_Registration_Info_UEnum_ETickUntilInputPin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2291360514U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusUtilsLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuildInfo, UBuildInfo::StaticClass, TEXT("UBuildInfo"), &Z_Registration_Info_UClass_UBuildInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildInfo), 853678610U) },
		{ Z_Construct_UClass_UOculusUtilsLibrary, UOculusUtilsLibrary::StaticClass, TEXT("UOculusUtilsLibrary"), &Z_Registration_Info_UClass_UOculusUtilsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusUtilsLibrary), 3439426691U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusUtilsLibrary_h_3509100256(TEXT("/Script/OculusUtils"),
		Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusUtilsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusUtilsLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusUtilsLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kutla_Documents_Unreal_Projects_Unreal_HandGameplay_main_5_3_Plugins_OculusUtils_Source_OculusUtils_Public_OculusUtilsLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
