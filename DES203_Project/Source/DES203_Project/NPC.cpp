// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC.h"
#include "DES203_ProjectGameMode.h"

void ANPC::Interact_Implementation()
{
	ToggleDialogueHud();
}

void ANPC::ToggleDialogueHud()
{
	ADES203_ProjectGameMode* GM = Cast<ADES203_ProjectGameMode>(GetWorld()->GetAuthGameMode());

	if (GM->GetHudState() == GM->HS_Ingame)
	{
		GM->CurrentNPC = this;
		GM->ChangeHUDState(GM->HS_Dialogue);
		//GLog->Log("Dialog Open");
	}
	else
	{
		GM->CurrentNPC = nullptr;
		GM->ChangeHUDState(GM->HS_Ingame);
		//GLog->Log("Dialog not Open");
	}
}
