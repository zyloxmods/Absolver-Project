#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "VoiceOver.h"
#include "VoiceOverActor.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AVoiceOverActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceOver m_CurrentVoiceOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBetweenVoiceOvers;
    
    AVoiceOverActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadingCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnDelayAfterSequenceExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentSequenceFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_PlayVoiceOver(const FVoiceOver& _voiceOver);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSequenceFinished();
    
};

