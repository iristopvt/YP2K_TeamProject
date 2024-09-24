// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/StatWidget.h"


//cheol
#include "Components/Button.h"
#include "Components/Image.h"
#include "Player/MyPlayer.h"
#include "Components/TextBlock.h"

#include "Components/UniformGridPanel.h"

#include "Component/StatComponent.h"

void UStatWidget::NativeConstruct()
{
	
	Super::NativeConstruct();

	auto array = SlotGrid->GetAllChildren();

	for (auto widget : array)
	{
		auto btn = Cast<UButton>(widget);
		if (btn)
		{
			_slotBtns.Add(btn);
			_slotBtnText.Add(Cast<UTextBlock>(btn->GetChildAt(0)));
		}
	}

	AMyPlayer* player = Cast<AMyPlayer>(GetOwningPlayerPawn());


}

void UStatWidget::PlLevelUpdate(int32 Level)
{
	if (PlLevel)
	{
		PlLevel->SetText(FText::AsNumber(Level));
	}
}

void UStatWidget::HPUpdate(int32 HP)
{
	if (HPNum)
	{
		HPNum->SetText(FText::AsNumber(HP));
	}
}

void UStatWidget::MPUpdate(int32 MP)
{
	if (MPNum != nullptr)
	{
		MPNum->SetText(FText::AsNumber(MP));
	}
}

void UStatWidget::STRUpdate(int32 STR)
{
	if (STRNum != nullptr)
	{
		STRNum->SetText(FText::AsNumber(STR));
	}
}

void UStatWidget::DEXUpdate(int32 DEX)
{
	if (DEXNum != nullptr)
	{
		DEXNum->SetText(FText::AsNumber(DEX));
	}
}

void UStatWidget::INTUpdate(int32 INT)
{
	if (INTNum != nullptr)
	{
		INTNum->SetText(FText::AsNumber(INT));
	}
}

void UStatWidget::BonusPointUpdate(int32 BonusPoint)
{
	if (BonusNum != nullptr)
	{
		BonusNum->SetText(FText::AsNumber(BonusPoint));
	}
}

void UStatWidget::HPDownClick()
{
	
}

void UStatWidget::HPUpClick()
{
	
}

