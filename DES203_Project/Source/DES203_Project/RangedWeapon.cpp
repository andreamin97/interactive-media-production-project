// Fill out your copyright notice in the Description page of Project Settings.


#include "RangedWeapon.h"

void ARangedWeapon::Shoot()
{
	while (bIsShooting) {
		GLog->Log(FString::Printf("Pew"));
	}
}
