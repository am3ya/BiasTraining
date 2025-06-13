// Fill out your copyright notice in the Description page of Project Settings.


/*#include "DecisionManager.h"

// Sets default values
ADecisionManager::ADecisionManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecisionManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecisionManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}*/

#include "DecisionManager.h"

ADecisionManager::ADecisionManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ADecisionManager::RecordChoice(const FString& BiasKey)
{
	ChoiceLog.Add(BiasKey);
	UE_LOG(LogTemp, Log, TEXT("Logged bias: %s"), *BiasKey);
}


