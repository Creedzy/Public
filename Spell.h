// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Spell.generated.h"

UCLASS()
class INCREDIBALL_API ASpell : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpell(const FObjectInitializer& ObjectInitializer);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	//Properties of each spell
	UPROPERTY(EditAnywhere, Category = "Area")
		float Range;
	UPROPERTY(BlueprintReadOnly)
		FString SpellName;
	UPROPERTY(BlueprintReadOnly)
		bool isCooldown;
	UPROPERTY(EditAnywhere, Category = "Spell Options")
		float Duration;
	UPROPERTY(EditAnywhere, Category = "Spell Options")
		float Cooldown;
	//Root Component
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly,Category = "Spell")
	TSubobjectPtr<USphereComponent> BaseCollisionComponent;
	//Mesh component that will represent the spell
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Spell")
		TSubobjectPtr<UStaticMeshComponent> SpellMesh;
	
	UFUNCTION(BlueprintImplementableEvent)
		void OnAbilityCasted();
		
	void onPlayerHit();
	UFUNCTION(BlueprintNativeEvent)
	void AbilityCast();
};
