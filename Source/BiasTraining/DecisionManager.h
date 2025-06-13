// Fill out your copyright notice in the Description page of Project Settings.

/*#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecisionManager.generated.h"

UCLASS()
class BIASTRAINING_API ADecisionManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecisionManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};*/

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecisionManager.generated.h"

UCLASS(Blueprintable)
class BIASTRAINING_API ADecisionManager : public AActor
{
	GENERATED_BODY()

public:
	ADecisionManager();

	// Expose to Blueprints so UI buttons can call this
	UFUNCTION(BlueprintCallable, Category = "Bias")
	void RecordChoice(const FString& BiasKey);

protected:
	// In-memory log, serialize this later
	UPROPERTY()
	TArray<FString> ChoiceLog;
};
