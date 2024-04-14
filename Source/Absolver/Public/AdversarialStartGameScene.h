#pragma once
#include "CoreMinimal.h"
#include "TeamSequenceActor.h"
#include "AdversarialStartGameScene.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AAdversarialStartGameScene : public ATeamSequenceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTeamIndex;
    
public:
    AAdversarialStartGameScene(const FObjectInitializer& ObjectInitializer);

};

