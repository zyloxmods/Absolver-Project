#pragma once
#include "CoreMinimal.h"
#include "AdversarialGameState.h"
#include "OneVersusOneRoundInfo.h"
#include "OneVersusOneGameState.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AOneVersusOneGameState : public AAdversarialGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FOneVersusOneRoundInfo> m_RoundInfos;
    
    AOneVersusOneGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_SetCacheMatchState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAFriendlyMatch() const;
    
};

