// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"
#include "TestProject/DebugMacros.h"


// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;
}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
	// Logging debug messages to the screen and output window
	/*
	UE_LOG(LogTemp, Warning, TEXT("Begin Play Called"))

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item on screen message!"));
	}
	//int32 AvgInt = Avg<int32>(1, 3);
	//UE_LOG(LogTemp, Warning, TEXT("Avg of 1 and 3: %d"), AvgInt);

	//float AvgFloat = Avg<float>(3.45f, 7.86f);
	//UE_LOG(LogTemp, Warning, TEXT("Avg of 3.85 and 7.46: %f"), AvgFloat);
	*/

	//UWorld* World = GetWorld();
	
	// Set starting position of actor
	//SetActorLocation(FVector(0.f, 0.f, 50.f));
	//SetActorRotation(FRotator(0.f, 45.f, 0.f));
	
	// Show star position with debug spheres
	//FVector Location = GetActorLocation();
	//FVector Forward = GetActorForwardVector();
	//DRAW_SPHERE(Location);
	//DRAW_LINE(Location, Location + (Forward * 100));
	//DRAW_POINT(Location + (Forward * 100));
	//DRAW_VECTOR(Location, Location + (Forward * 100));
}

float ATestActor::TransformedSin()
{
	return Amplitude * FMath::Sin(RunningTime * TimeConstant); // period = 2*pi/K
}

float ATestActor::TransformedCosin()
{
	return Amplitude * FMath::Cos(RunningTime * TimeConstant); // period = 2*pi/K
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Sin wave movement based on delta time
	RunningTime += DeltaTime;
	//float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant); // period = 2*pi/K
	//AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));

	//Movement rate in units of cm/s
	//float MovementRate = 50.f;
	//float RotationRate = 45.f;

	//MovementRate * DeltaTime (cm/s) * (s/frame) = (cm/frame)
	//AddActorWorldOffset(FVector(MovementRate * DeltaTime, 0.f, 0.f));
	//AddActorWorldRotation(FRotator(0.f, RotationRate * DeltaTime, 0.f));
	//DRAW_SPHERE_SingleFrame(GetActorLocation());
	//DRAW_VECTOR_SingleFrame(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100)

	//FVector AvgVector = Avg<FVector>(GetActorLocation(), FVector::ZeroVector);
	//DRAW_POINT_SingleFrame(AvgVector)
}

