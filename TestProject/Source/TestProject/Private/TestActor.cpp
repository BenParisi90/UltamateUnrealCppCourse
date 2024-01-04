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
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();
	
	DRAW_SPHERE(Location);
	//DRAW_LINE(Location, Location + (Forward * 100));
	//DRAW_POINT(Location + (Forward * 100));
	DRAW_VECTOR(Location, Location + (Forward * 100));
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

