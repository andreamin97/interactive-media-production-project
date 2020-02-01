// Fill out your copyright notice in the Description page of Project Settings.

#include "DES203_ProjectCharacter.h"
#include "DES203_ProjectPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "DrawDebugHelpers.h"
#include "Components/ArrowComponent.h"
#include "Math/TransformNonVectorized.h"
#include "Math/Vector.h"
#include "RangedWeapon.h"

ARangedWeapon::ARangedWeapon() 
{
	range = 300.0f;
}

void ARangedWeapon::Use_Implementation()
{
	if (ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0)))
	{
		GLog->Log("Equipped Weapon");
		MyCharacter->MainWeapon = this;
		MyCharacter->MainWeapon->AttachToComponent(MyCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, FName("WeaponSocket"));
		InteractableMesh->SetVisibility(true);
	}
}

void ARangedWeapon::Shoot()
{
	ADES203_ProjectPlayerController* PC = Cast<ADES203_ProjectPlayerController>(GetWorld()->GetFirstPlayerController());

	FVector Start = this->GetActorLocation();
	FVector End = PC->GetMouseLoc();
	
	End -= Start;
	//End.X -= Start.X;
	//End.Y -= Start.Y;

	End.Normalize(1.0);
	End *= range;

	End += Start;
	//End.X += Start.X;
	//End.Y += Start.Y;

	End.Z = Start.Z;

	FHitResult hitResult;
	FCollisionQueryParams CollisionParams;

	

	if (GetWorld()->LineTraceSingleByChannel(hitResult, Start, End, ECC_Visibility, CollisionParams))
	{
		DrawDebugLine(GetWorld(), Start, hitResult.Location, FColor::Red, false, 1.0f, 10.0f);
	}
	else
	{
		DrawDebugLine(GetWorld(), Start, End, FColor::Blue, false, 1.0f, 10.0f);
	}

}

void ARangedWeapon::OnPickedUp()
{
	Super::OnPickedUp();

	ADES203_ProjectPlayerController* PC = Cast<ADES203_ProjectPlayerController>(GetWorld()->GetFirstPlayerController());

	PC->AttackSpeed = 1 / attacksPerSecond;
}
