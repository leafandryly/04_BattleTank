// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATank*GetControlledTank()const;
	
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Start the tank moving the barrel so that the shot would hit
	//where the crosshair intersects the world
	void AimTowardCrosshair();

	//return an OUT parameter if hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;
};
