// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSGameMode.generated.h"

UCLASS()
class AFPSGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	//在编辑器蓝图类中选定创建的蓝图Actor
	UPROPERTY(EditDefaultsOnly, Category = "Spectating")
		TSubclassOf<AActor> SpectatingViewpointClass;

public:

	AFPSGameMode();

	void CompleteMission(APawn* InstigatorPawn, bool bMissionSuccess);

	//蓝图可实现事件
	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
		void OnMissionCompleted(APawn* InstigatorPawn, bool bMissionSuccess);

};



