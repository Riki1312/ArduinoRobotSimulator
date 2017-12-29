// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTC0M_ArduinoSourceCode_generated_h
#error "ArduinoSourceCode.generated.h already included, missing '#pragma once' in ArduinoSourceCode.h"
#endif
#define PROJECTC0M_ArduinoSourceCode_generated_h

#define ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCPP_Loop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CPP_Loop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCPP_Setup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CPP_Setup(); \
		P_NATIVE_END; \
	}


#define ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCPP_Loop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CPP_Loop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCPP_Setup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CPP_Setup(); \
		P_NATIVE_END; \
	}


#define ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_EVENT_PARMS \
	struct ArduinoSourceCode_eventBP_FDatiSensori_Parms \
	{ \
		TArray<float> ReturnValue; \
	}; \
	struct ArduinoSourceCode_eventBP_FMovimento_Parms \
	{ \
		float forza; \
	}; \
	struct ArduinoSourceCode_eventBP_FRotazione_Parms \
	{ \
		float forza; \
	};


#define ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_CALLBACK_WRAPPERS
#define ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArduinoSourceCode(); \
	friend PROJECTC0M_API class UClass* Z_Construct_UClass_AArduinoSourceCode(); \
public: \
	DECLARE_CLASS(AArduinoSourceCode, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ProjectC0M"), NO_API) \
	DECLARE_SERIALIZER(AArduinoSourceCode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAArduinoSourceCode(); \
	friend PROJECTC0M_API class UClass* Z_Construct_UClass_AArduinoSourceCode(); \
public: \
	DECLARE_CLASS(AArduinoSourceCode, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ProjectC0M"), NO_API) \
	DECLARE_SERIALIZER(AArduinoSourceCode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArduinoSourceCode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArduinoSourceCode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArduinoSourceCode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArduinoSourceCode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArduinoSourceCode(AArduinoSourceCode&&); \
	NO_API AArduinoSourceCode(const AArduinoSourceCode&); \
public:


#define ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArduinoSourceCode(AArduinoSourceCode&&); \
	NO_API AArduinoSourceCode(const AArduinoSourceCode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArduinoSourceCode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArduinoSourceCode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArduinoSourceCode)


#define ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_PRIVATE_PROPERTY_OFFSET
#define ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_9_PROLOG \
	ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_EVENT_PARMS


#define ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_RPC_WRAPPERS \
	ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_CALLBACK_WRAPPERS \
	ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_INCLASS \
	ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_CALLBACK_WRAPPERS \
	ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_INCLASS_NO_PURE_DECLS \
	ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectC0M_Source_ProjectC0M_Public_ArduinoSourceCode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
