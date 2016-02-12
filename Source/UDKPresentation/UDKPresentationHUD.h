// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "UDKPresentationHUD.generated.h"

UCLASS()
class AUDKPresentationHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUDKPresentationHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

