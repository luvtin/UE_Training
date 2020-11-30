// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameState.h"
#include "FPSPlayerController.h"
#include "Engine/World.h"

void AFPSGameState::MulticastOnMissionCompleted_Implementation(APawn* InstigatorPawn, bool bMissionSuccess)
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
	{
		AFPSPlayerController* PC = Cast<AFPSPlayerController>(It->Get());
		if (PC && PC->IsLocalController())
		{
			PC->OnMissionCompleted(InstigatorPawn, bMissionSuccess);


			//½ûÓÃÊäÈë
			APawn* MyPawn = PC->GetPawn();
			if (MyPawn)
			{
				MyPawn->DisableInput(PC);
			}
		}
	}
}