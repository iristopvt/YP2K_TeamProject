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

	//te
	UPROPERTY(meta = (BindWidget))
	class UUniformGridPanel* SlotGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UButton*> _slotBtns;
	TArray<class UTextBlock*> _slotBtnText;
	

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
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* HPNum;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* MPNum;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* STRNum;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* DEXNum;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* INTNum;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* BonusNum;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* PlLevel;

	class UTextBlock* PlName;

	UFUNCTION(BlueprintCallable)
	void PlLevelUpdate(int32 Level);
	UFUNCTION(BlueprintCallable)
	void HPUpdate(int32 HP);
	UFUNCTION(BlueprintCallable)
	void MPUpdate(int32 MP);
	UFUNCTION(BlueprintCallable)
	void STRUpdate(int32 STR);
	UFUNCTION(BlueprintCallable)
	void DEXUpdate(int32 DEX);
	UFUNCTION(BlueprintCallable)
	void INTUpdate(int32 INT);
	UFUNCTION(BlueprintCallable)
	void BonusPointUpdate(int32 BonusPoint);
	
	
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
