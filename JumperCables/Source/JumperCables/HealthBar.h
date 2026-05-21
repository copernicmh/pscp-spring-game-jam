#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HealthBar.generated.h"

class UProgressBar;
class UTextBlock;

/**
 * 
 */
UCLASS()
class JUMPERCABLES_API UHealthBar : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, meta = (Bindwidget))
	TObjectPtr<UTextBlock> HealthText;

	UPROPERTY(EditAnywhere, meta = (Bindwidget))
	TObjectPtr<UProgressBar> HealthBar;


public:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void SetHealthBar(float CurrentHealth, float MaxHealth);

	UFUNCTION()
	float getCurrentHealth();

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	float theCurrentHealth;
	
};
