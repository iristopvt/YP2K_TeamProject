// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/StatWidget.h"


//cheol
#include "Components/Button.h"
#include "Components/Image.h"
#include "Player/MyPlayer.h"
#include "Components/TextBlock.h"


#include "Component/StatComponent.h"

void UStatWidget::NativeConstruct()
{

	AMyPlayer* player = Cast<AMyPlayer>(GetOwningPlayerPawn());

	if (player != nullptr && HPNum != nullptr)
	{
		//HPUpdate(player->_StatCom->data->maxHP);
	}
}

void UStatWidget::HPUpdate(int32 HP)
{
	if (HPNum != nullptr)
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
