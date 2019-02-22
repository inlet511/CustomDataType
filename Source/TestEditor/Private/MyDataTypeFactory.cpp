// Fill out your copyright notice in the Description page of Project Settings.

#include "MyDataTypeFactory.h"
#include "MyDataType.h"

#define LOCTEXT_NAMESPACE "UExampleDataAssetFactory"
UMyDataTypeFactory::UMyDataTypeFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UMyDataType::StaticClass();
}

UObject* UMyDataTypeFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UMyDataType* NewObjectAsset = NewObject<UMyDataType>(InParent, Class, Name, Flags | RF_Transactional);
	return NewObjectAsset;
}

#undef LOCTEXT_NAMESPACE


