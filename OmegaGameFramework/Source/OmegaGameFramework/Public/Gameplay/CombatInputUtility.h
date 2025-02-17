// Copyright Studio Syndicat 2021. All Rights Reserved.

// This handles the input events for a combatant component.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OmegaAbility.h"
#include "CombatInputUtility.generated.h"

class UCombatantComponent;
class UInputComponent;
class UEnhancedInputComponent;
class UInputAction;

class AOmegAbility;

/**
 * 
 */
UCLASS()
class OMEGAGAMEFRAMEWORK_API UCombatInputUtility : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION()
	void Execute();

	UPROPERTY()
	class UCombatantComponent* CombatOwner;

	UPROPERTY()
	TSubclassOf<AOmegaAbility> BoundAblityClass;
};
