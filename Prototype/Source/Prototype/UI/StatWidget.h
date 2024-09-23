// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StatWidget.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPE_API UStatWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	//button
	class UButton* HPDown;
	class UButton* HPUp;
	class UButton* MPDown;
	class UButton* MPUp;
	class UButton* STRDown;
	class UButton* STRUp;
	class UButton* DEXDown;
	class UButton* DEXUp;
	class UButton* INTDown;
	class UButton* INTUp;

	// stat Num
	class UTextBlock* HPNum;
	class UTextBlock* MPNum;
	class UTextBlock* STRNum;
	class UTextBlock* DEXNum;
	class UTextBlock* INTNum;
	
	class UTextBlock* PlName;
	class UTextBlock* PlLevel;


	void HPUpdate(int32 HP);
	void MPUpdate(int32 MP);
	void STRUpdate(int32 STR);
	void DEXUpdate(int32 DEX);
	void INTUpdate(int32 INT);
	
	
	void HPDownClick();
	void HPUpClick();
	void MPDownClick();
	void MpUpClick();
	void STRDownClick();
	void STRUpClick();
	void DEXDownClick();
	void DEXUpClick();
	void INTDownClick();
	void INTUpClick();

};
