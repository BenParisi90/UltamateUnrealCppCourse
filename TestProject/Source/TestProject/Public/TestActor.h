// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class TESTPROJECT_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ATestActor();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:	
	float RunningTime;
	float Amplitude = 0.25f;
	float TimeConstant = 5.f;

};
