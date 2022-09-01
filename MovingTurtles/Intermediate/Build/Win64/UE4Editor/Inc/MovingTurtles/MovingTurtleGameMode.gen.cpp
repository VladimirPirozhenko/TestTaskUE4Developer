// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovingTurtles/MovingTurtleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingTurtleGameMode() {}
// Cross Module References
	MOVINGTURTLES_API UClass* Z_Construct_UClass_AMovingTurtleGameMode_NoRegister();
	MOVINGTURTLES_API UClass* Z_Construct_UClass_AMovingTurtleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_MovingTurtles();
// End Cross Module References
	void AMovingTurtleGameMode::StaticRegisterNativesAMovingTurtleGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMovingTurtleGameMode_NoRegister()
	{
		return AMovingTurtleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMovingTurtleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingTurtleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovingTurtles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingTurtleGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MovingTurtleGameMode.h" },
		{ "ModuleRelativePath", "MovingTurtleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingTurtleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingTurtleGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingTurtleGameMode_Statics::ClassParams = {
		&AMovingTurtleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMovingTurtleGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingTurtleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingTurtleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingTurtleGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingTurtleGameMode, 2190213331);
	template<> MOVINGTURTLES_API UClass* StaticClass<AMovingTurtleGameMode>()
	{
		return AMovingTurtleGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingTurtleGameMode(Z_Construct_UClass_AMovingTurtleGameMode, &AMovingTurtleGameMode::StaticClass, TEXT("/Script/MovingTurtles"), TEXT("AMovingTurtleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingTurtleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
