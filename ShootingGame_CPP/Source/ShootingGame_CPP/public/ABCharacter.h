// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ShootingGame_CPP.h"
#include "GameFramework/Character.h"
#include "ABCharacter.generated.h"

UCLASS()
class SHOOTINGGAME_CPP_API AABCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AABCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:
	UPROPERTY()
	class UABAnimInstance* ABAnim;

};
