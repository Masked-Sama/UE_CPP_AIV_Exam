// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTextRenderActor.h"

#include "Components/TextRenderComponent.h"

void AMyTextRenderActor::BeginPlay()
{
	Super::BeginPlay();
	this->GetTextRender()->SetText(FText::FromString("You collected: 0 /4"));
}

void AMyTextRenderActor::ChangeCounter()
{
	FString IntAsString = FString::FromInt(Collectibles);
	this->GetTextRender()->SetText(FText::FromString("You collected: " + IntAsString + " /4"));
}

void AMyTextRenderActor::UpdateCounter(int value)
{
	Collectibles = value;
	ChangeCounter();
}
