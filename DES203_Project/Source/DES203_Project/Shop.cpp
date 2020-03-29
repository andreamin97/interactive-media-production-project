// Fill out your copyright notice in the Description page of Project Settings.

#include "Shop.h"
#include "DES203_ProjectGameMode.h"
#include"DES203_ProjectCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Pickup.h"

AShop::AShop()
{
	ShopInventory.SetNum(5);
}

void AShop::BeginPlay()
{
	Super::BeginPlay();


	for (int i = 0; i <= 4; i++)
	{
		if(Cast<APickup>(ShopInventory[i]))
			ShopInventory[i]->OnPickedUp();
	}
}

void AShop::Interact_Implementation()
{
	ToggleShopHUD();

}

void AShop::SellItem(int Slot)
{
	ADES203_ProjectCharacter* Character = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

	if (Character->AddItemToInventory(ShopInventory[Slot]))
	{
		ShopInventory[Slot] = nullptr;
	}
}

void AShop::ToggleShopHUD()
{
	ADES203_ProjectGameMode* GM = Cast<ADES203_ProjectGameMode>(GetWorld()->GetAuthGameMode());

	if (GM->GetHudState() == GM->HS_Ingame)
	{
		GM->CurrentShop = this;
		GM->ChangeHUDState(GM->HS_Shop_General);
	}
	else
	{
		GM->CurrentShop = nullptr;
		GM->ChangeHUDState(GM->HS_Ingame);
	}
}
