#pragma once
#include "CoreMinimal.h"
#include "GatherTrap.h"
#include "EffectZone.generated.h"

class AFightingCharacter;
class UEffectData;

UCLASS(Blueprintable)
class ABSOLVER_API AEffectZone : public AGatherTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEffectData*> m_Effects;
    
public:
    AEffectZone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_RemoveEffects(AFightingCharacter* _fightingChar);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyEffects(AFightingCharacter* _fightingChar);
    
};

