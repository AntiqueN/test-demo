#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "DarknessDemoPlayerController.generated.h"

/** Forward declaration to improve compiling times */
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS()
class ADarknessDemoPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ADarknessDemoPlayerController();

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* InputMappingContext;

protected:
	//~ Begin APlayerController interface
	virtual void BeginPlay() override;
	//~ End APlayerController interface
};


