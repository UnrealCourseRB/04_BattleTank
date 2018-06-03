// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController Not Possessing a Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController Possessing: %s"), *(ControlledTank->GetName()));
	}
	UE_LOG(LogTemp, Warning, TEXT("AIController Begin Play"));
}


ATank * ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}