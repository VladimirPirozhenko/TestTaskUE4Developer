// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovingTurtles/MovingTurtlesGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingTurtlesGameModeBase() {}
// Cross Module References
	MOVINGTURTLES_API UClass* Z_Construct_UClass_AMovingTurtlesGameModeBase_NoRegister();
	MOVINGTURTLES_API UClass* Z_Construct_UClass_AMovingTurtlesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MovingTurtles();
// End Cross Module References
	void AMovingTurtlesGameModeBase::StaticRegisterNativesAMovingTurtlesGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMovingTurtlesGameModeBase_NoRegister()
	{
		return AMovingTurtlesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMovingTurtlesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingTurtlesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovingTurtles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingTurtlesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MovingTurtlesGameModeBase.h" },
		{ "ModuleRelativePath", "MovingTurtlesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingTurtlesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingTurtlesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingTurtlesGameModeBase_Statics::ClassParams = {
		&AMovingTurtlesGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMovingTurtlesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingTurtlesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingTurtlesGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingTurtlesGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingTurtlesGameModeBase, 2501381037);
	template<> MOVINGTURTLES_API UClass* StaticClass<AMovingTurtlesGameModeBase>()
	{
		return AMovingTurtlesGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingTurtlesGameModeBase(Z_Construct_UClass_AMovingTurtlesGameModeBase, &AMovingTurtlesGameModeBase::StaticClass, TEXT("/Script/MovingTurtles"), TEXT("AMovingTurtlesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingTurtlesGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
