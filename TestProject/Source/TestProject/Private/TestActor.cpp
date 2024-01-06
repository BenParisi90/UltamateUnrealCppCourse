// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"
#include "TestProject/DebugMacros.h"


// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
	/*
	UE_LOG(LogTemp, Warning, TEXT("Begin Play Called"))

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item on screen message!"));
	}
	*/

	UWorld* World = GetWorld();
	

	//SetActorLocation(FVector(0.f, 0.f, 50.f));
	//SetActorRotation(FRotator(0.f, 45.f, 0.f));

	//FVector Location = GetActorLocation();
	//FVector Forward = GetActorForwardVector();

	//DRAW_SPHERE(Location);
	//DRAW_LINE(Location, Location + (Forward * 100));
	//DRAW_POINT(Location + (Forward * 100));
	//DRAW_VECTOR(Location, Location + (Forward * 100));
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime += DeltaTime;

	float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant); // period = 2*pi/K
	AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));

	//Movement rate in units of cm/s
	//float MovementRate = 50.f;
	//float RotationRate = 45.f;

	//MovementRate * DeltaTime (cm/s) * (s/frame) = (cm/frame)
	//AddActorWorldOffset(FVector(MovementRate * DeltaTime, 0.f, 0.f));
	//AddActorWorldRotation(FRotator(0.f, RotationRate * DeltaTime, 0.f));
	DRAW_SPHERE_SingleFrame(GetActorLocation());
	DRAW_VECTOR_SingleFrame(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100)
}

