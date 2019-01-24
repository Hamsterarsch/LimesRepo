//

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerAIController.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class LIMES_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();


protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
