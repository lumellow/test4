// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor_CPP.h"

// Sets default values
AMyActor_CPP::AMyActor_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

