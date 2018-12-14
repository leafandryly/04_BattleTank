// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "BattleTank.h"


//Tick
	//Super


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possessing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possessing :%s"), *(ControlledTank->GetName()));
	}
}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardCrosshair();
	UE_LOG(LogTemp, Warning, TEXT("Player controller ticking"));
}

ATank* ATankPlayerController::GetControlledTank()const
{
	return Cast<ATank>(GetPawn());

	
}

void ATankPlayerController::AimTowardCrosshair()
{
	if (!GetControlledTank()) { return; }
	//get world location through linetrace
	//if it hits landscape
		//tell controlled tank aim at this point
}