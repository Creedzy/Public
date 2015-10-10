// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Spell.h"
#include "GameFramework/Actor.h"
#include "SpellBook.generated.h"


UCLASS()
class INCREDIBALL_API ASpellBook : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpellBook();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	TArray<class Spell*> SpellInventory;
	
};
