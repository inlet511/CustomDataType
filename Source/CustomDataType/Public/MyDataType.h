// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyDataType.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMDATATYPE_API UMyDataType : public UObject
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnyWhere)
	FString StringProperty;

	UPROPERTY(EditAnyWhere)
	float FloatProperty;

};
