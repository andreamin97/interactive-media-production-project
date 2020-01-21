// Fill out your copyright notice in the Description page of Project Settings.

#include "DES203_ProjectCharacter.h"
#include "DES203_Project.h"
#include "Kismet/GameplayStatics.h"
#include "Pickup.h"

APickup::APickup()
{
	//set up mesh, name and value
	InteractableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	InteractableMesh->SetSimulatePhysics(true);

	itemName = FString("Enter item name");
	HelpText = FString("Press F to pickup");
	value = 0;
}

void APickup::BeginPlay()
{

	HelpText = FString::Printf(TEXT("%s: press F to pickup"), *itemName);

}

void APickup::Interact_Implementation()
{

	ADES203_ProjectCharacter* Character = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

	if (Character->AddItemToInventory(this))
	{
		OnPickedUp();
	}

}

void APickup::OnPickedUp()
{

	InteractableMesh->SetVisibility(false);
	InteractableMesh->SetSimulatePhysics(false);
	InteractableMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void APickup::Use_Implementation()
{
	// You must override this
	GLog->Log("Unimplemented");
}
	