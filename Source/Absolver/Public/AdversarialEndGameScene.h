#pragma once
#include "CoreMinimal.h"
#include "EEndGameResult.h"
#include "TeamSequenceActor.h"
#include "AdversarialEndGameScene.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AAdversarialEndGameScene : public ATeamSequenceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndGameResult m_iResult;
    
public:
    AAdversarialEndGameScene(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PlayDummyAnimation();
    
};

