// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GravityPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PACK_API AGravityPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void UpdateRotation(float DeltaTime) override;

	//����ת������ռ�ת��Ϊ�����ռ䡣
	UFUNCTION(BlueprintPure)
	static FRotator GetGravityRelativeRotation(FRotator Rotation, FVector GravityDirection);

	// ����ת�������ռ�ת��Ϊ����ռ䡣
	UFUNCTION(BlueprintPure)
	static FRotator GetGravityWorldRotation(FRotator Rotation, FVector GravityDirection);


private:
	FVector LastFrameGravity = FVector::ZeroVector;
};
