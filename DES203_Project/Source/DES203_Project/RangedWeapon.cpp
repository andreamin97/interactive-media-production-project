// Fill out your copyright notice in the Description page of Project Settings.

#include "DES203_ProjectCharacter.h"
#include "DES203_ProjectPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "DrawDebugHelpers.h"
#include "Components/ArrowComponent.h"
#include "Math/TransformNonVectorized.h"
#include "Math/Vector.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "RangedWeapon.h"

ARangedWeapon::ARangedWeapon() 
{
	PrimaryActorTick.bCanEverTick = true;

	range = 300.0f;

	aimArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("AimArrow"));
	aimArrow->SetupAttachment(InteractableMesh);
	aimArrow->RelativeLocation = ShootPoint;

	laserPointer = CreateDefaultSubobject<UParticleSystemComponent> (TEXT("AimLaser"));
	laserPointer->SetupAttachment(aimArrow);
}

void ARangedWeapon::Tick(float DeltaTime)
{
}

void ARangedWeapon::Use_Implementation()
{
	if (ADES203_ProjectCharacter* MyCharacter = Cast<ADES203_ProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0)))
	{
		ADES203_ProjectPlayerController* PC = Cast<ADES203_ProjectPlayerController>(GetWorld()->GetFirstPlayerController());

		GLog->Log("Equipped Weapon");
		MyCharacter->MainWeapon = this;
		PC->AttackSpeed = 1 / attacksPerSecond;
		MyCharacter->MainWeapon->AttachToComponent(MyCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, FName("WeaponSocket"));
		InteractableMesh->SetVisibility(true);
	}
}

void ARangedWeapon::Shoot_Implementation()
{
	ADES203_ProjectPlayerController* PC = Cast<ADES203_ProjectPlayerController>(GetWorld()->GetFirstPlayerController());

	FHitResult hitResult;
	FCollisionQueryParams CollisionParams;

	FVector Start = aimArrow->GetComponentLocation();
	FVector End = PC->GetMouseLoc();

	End -= Start;

	End.Normalize(1.0);
	End *= range;

	End += Start;

	End.Z = Start.Z;

	

	if (GetWorld()->LineTraceSingleByChannel(hitResult, Start, End, ECC_Visibility, CollisionParams))
	{
		DrawDebugLine(GetWorld(), Start, hitResult.Location, FColor::Red, false, 1.0f, 10.0f);
		
		if (AActor * target = Cast<AActor>(hitResult.Actor))
		{
			if (target->ActorHasTag(FName("Enemy")))
			{
				FDamageEvent DamageEvent;

				target->TakeDamage(damage, DamageEvent, PC, this);
			}
		}
	}
	else
	{
		DrawDebugLine(GetWorld(), Start, End, FColor::Blue, false, 1.0f, 10.0f);
	}
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), shootEffect, aimArrow->GetComponentTransform());
	//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), shootTrace, aimArrow->GetComponentTransform());

}

void ARangedWeapon::OnPickedUp()
{
	Super::OnPickedUp();
}
