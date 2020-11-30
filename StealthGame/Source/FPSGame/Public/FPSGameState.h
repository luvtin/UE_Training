// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "FPSGameState.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AFPSGameState : public AGameStateBase
{
	GENERATED_BODY()

public:

	//当函数经服务器调用时，消息会发送至所有客户端并执行，包括服务器也会运行
	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnMissionCompleted(APawn* InstigatorPawn, bool bMissionSuccess);

};
