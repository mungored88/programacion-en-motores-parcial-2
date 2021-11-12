// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parcial2/Public/MyCharacterInC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterInC() {}
// Cross Module References
	PARCIAL2_API UClass* Z_Construct_UClass_AMyCharacterInC_NoRegister();
	PARCIAL2_API UClass* Z_Construct_UClass_AMyCharacterInC();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Parcial2();
// End Cross Module References
	void AMyCharacterInC::StaticRegisterNativesAMyCharacterInC()
	{
	}
	UClass* Z_Construct_UClass_AMyCharacterInC_NoRegister()
	{
		return AMyCharacterInC::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacterInC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacterInC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Parcial2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterInC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacterInC.h" },
		{ "ModuleRelativePath", "Public/MyCharacterInC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterInC_Statics::NewProp_VerticalAxis_MetaData[] = {
		{ "Category", "MyCharacterInC" },
		{ "Comment", "//Variables\n//atributo, por eso va sin ; es para poder ver la variable desde blueprints\n" },
		{ "ModuleRelativePath", "Public/MyCharacterInC.h" },
		{ "ToolTip", "Variables\natributo, por eso va sin ; es para poder ver la variable desde blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterInC_Statics::NewProp_VerticalAxis = { "VerticalAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterInC, VerticalAxis), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterInC_Statics::NewProp_VerticalAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterInC_Statics::NewProp_VerticalAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacterInC_Statics::NewProp_HorizontalAxis_MetaData[] = {
		{ "Category", "MyCharacterInC" },
		{ "ModuleRelativePath", "Public/MyCharacterInC.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacterInC_Statics::NewProp_HorizontalAxis = { "HorizontalAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacterInC, HorizontalAxis), METADATA_PARAMS(Z_Construct_UClass_AMyCharacterInC_Statics::NewProp_HorizontalAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterInC_Statics::NewProp_HorizontalAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacterInC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterInC_Statics::NewProp_VerticalAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterInC_Statics::NewProp_HorizontalAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacterInC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacterInC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacterInC_Statics::ClassParams = {
		&AMyCharacterInC::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyCharacterInC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterInC_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCharacterInC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterInC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCharacterInC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCharacterInC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCharacterInC, 2746723383);
	template<> PARCIAL2_API UClass* StaticClass<AMyCharacterInC>()
	{
		return AMyCharacterInC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacterInC(Z_Construct_UClass_AMyCharacterInC, &AMyCharacterInC::StaticClass, TEXT("/Script/Parcial2"), TEXT("AMyCharacterInC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacterInC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
