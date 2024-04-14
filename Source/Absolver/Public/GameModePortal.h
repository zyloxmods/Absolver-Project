#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EGameModeTypes.h"
#include "InteractiveInterface.h"
#include "GameModePortal.generated.h"

class APlayerController;
class UInteractionObjectComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AGameModePortal : public AActor/*, public IInteractiveInterface */{
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionObjectComponent* m_InteractionObjectComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeTypes m_eGameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRankedGame;
    
public:
    AGameModePortal(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UseInteractiveObject(APlayerController* _controller);
    

    // Fix for true pure virtual functions not being implemented
};

