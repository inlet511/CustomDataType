// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "UnrealEd.h"
#include "MyDataTypeFactory.generated.h"

/**
 * 
 */
UCLASS()
class TESTEDITOR_API UMyDataTypeFactory : public UFactory
{
	GENERATED_UCLASS_BODY()
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

};
