// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ArduinoSourceCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArduinoSourceCode() {}
// Cross Module References
	PROJECTC0M_API UClass* Z_Construct_UClass_AArduinoSourceCode_NoRegister();
	PROJECTC0M_API UClass* Z_Construct_UClass_AArduinoSourceCode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectC0M();
	PROJECTC0M_API UFunction* Z_Construct_UFunction_AArduinoSourceCode_BP_FDatiSensori();
	PROJECTC0M_API UFunction* Z_Construct_UFunction_AArduinoSourceCode_BP_FMovimento();
	PROJECTC0M_API UFunction* Z_Construct_UFunction_AArduinoSourceCode_BP_FRotazione();
	PROJECTC0M_API UFunction* Z_Construct_UFunction_AArduinoSourceCode_CPP_Loop();
	PROJECTC0M_API UFunction* Z_Construct_UFunction_AArduinoSourceCode_CPP_Setup();
// End Cross Module References
	static FName NAME_AArduinoSourceCode_BP_FDatiSensori = FName(TEXT("BP_FDatiSensori"));
	TArray<float> AArduinoSourceCode::BP_FDatiSensori()
	{
		ArduinoSourceCode_eventBP_FDatiSensori_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AArduinoSourceCode_BP_FDatiSensori),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AArduinoSourceCode_BP_FMovimento = FName(TEXT("BP_FMovimento"));
	void AArduinoSourceCode::BP_FMovimento(float forza)
	{
		ArduinoSourceCode_eventBP_FMovimento_Parms Parms;
		Parms.forza=forza;
		ProcessEvent(FindFunctionChecked(NAME_AArduinoSourceCode_BP_FMovimento),&Parms);
	}
	static FName NAME_AArduinoSourceCode_BP_FRotazione = FName(TEXT("BP_FRotazione"));
	void AArduinoSourceCode::BP_FRotazione(float forza)
	{
		ArduinoSourceCode_eventBP_FRotazione_Parms Parms;
		Parms.forza=forza;
		ProcessEvent(FindFunctionChecked(NAME_AArduinoSourceCode_BP_FRotazione),&Parms);
	}
	void AArduinoSourceCode::StaticRegisterNativesAArduinoSourceCode()
	{
		UClass* Class = AArduinoSourceCode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CPP_Loop", (Native)&AArduinoSourceCode::execCPP_Loop },
			{ "CPP_Setup", (Native)&AArduinoSourceCode::execCPP_Setup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AArduinoSourceCode_BP_FDatiSensori()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ArduinoSourceCode_eventBP_FDatiSensori_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "FDatiSensori" },
				{ "ModuleRelativePath", "Public/ArduinoSourceCode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AArduinoSourceCode, "BP_FDatiSensori", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(ArduinoSourceCode_eventBP_FDatiSensori_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AArduinoSourceCode_BP_FMovimento()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_forza = { UE4CodeGen_Private::EPropertyClass::Float, "forza", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ArduinoSourceCode_eventBP_FMovimento_Parms, forza), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_forza,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "FMovimento" },
				{ "ModuleRelativePath", "Public/ArduinoSourceCode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AArduinoSourceCode, "BP_FMovimento", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(ArduinoSourceCode_eventBP_FMovimento_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AArduinoSourceCode_BP_FRotazione()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_forza = { UE4CodeGen_Private::EPropertyClass::Float, "forza", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ArduinoSourceCode_eventBP_FRotazione_Parms, forza), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_forza,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "FRotazione" },
				{ "ModuleRelativePath", "Public/ArduinoSourceCode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AArduinoSourceCode, "BP_FRotazione", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(ArduinoSourceCode_eventBP_FRotazione_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AArduinoSourceCode_CPP_Loop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CPP_ArduinoSourceCode" },
				{ "ModuleRelativePath", "Public/ArduinoSourceCode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AArduinoSourceCode, "CPP_Loop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AArduinoSourceCode_CPP_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CPP_ArduinoSourceCode" },
				{ "ModuleRelativePath", "Public/ArduinoSourceCode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AArduinoSourceCode, "CPP_Setup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AArduinoSourceCode_NoRegister()
	{
		return AArduinoSourceCode::StaticClass();
	}
	UClass* Z_Construct_UClass_AArduinoSourceCode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_ProjectC0M,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AArduinoSourceCode_BP_FDatiSensori, "BP_FDatiSensori" }, // 1953248038
				{ &Z_Construct_UFunction_AArduinoSourceCode_BP_FMovimento, "BP_FMovimento" }, // 2581318322
				{ &Z_Construct_UFunction_AArduinoSourceCode_BP_FRotazione, "BP_FRotazione" }, // 4201890801
				{ &Z_Construct_UFunction_AArduinoSourceCode_CPP_Loop, "CPP_Loop" }, // 491774345
				{ &Z_Construct_UFunction_AArduinoSourceCode_CPP_Setup, "CPP_Setup" }, // 4198804010
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ArduinoSourceCode.h" },
				{ "ModuleRelativePath", "Public/ArduinoSourceCode.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AArduinoSourceCode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AArduinoSourceCode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArduinoSourceCode, 3253053276);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArduinoSourceCode(Z_Construct_UClass_AArduinoSourceCode, &AArduinoSourceCode::StaticClass, TEXT("/Script/ProjectC0M"), TEXT("AArduinoSourceCode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArduinoSourceCode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
