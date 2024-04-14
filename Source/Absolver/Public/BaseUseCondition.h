#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMainBehaviors.h"
#include "EOrderType.h"
#include "EQuadrantTypes.h"
#include "EWeaponFamilies.h"
#include "BaseUseCondition.generated.h"

class UEffectData;
class UUsableItemData;

UCLASS(Abstract, Blueprintable)
class ABSOLVER_API UBaseUseCondition : public UObject {
    GENERATED_BODY()
public:
    UBaseUseCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFulfilled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSurroundingPlayersNumInRange(float _fRange, int32& _iOutPlayersInside, int32& _iOutTotalPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsTargetUsingPower(UUsableItemData* _targetUsingPower) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsTargetPlayingOrder(EOrderType _eOrderType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsStaminaRatioBelow(float _fStaminaThreshold) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsHealthRatioBelow(float _fHealthThreshold) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEffectActiveOnTarget(UEffectData* _effect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEffectActiveOnQuerier(UEffectData* _effect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDistFromTargetMatchMood(EMainBehaviors _eMood) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDistFromTargetMatchCurrentMood() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDamageTakenRatioBelow(float _fDmgTakenThreshold, float _fTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAttackIncoming(EWeaponFamilies& _eOutAttackNature, float& _fOutTimeTillStrike) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasAttackTicket() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDistFromTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDifficultyLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDamageTaken(float _fTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuadrantTypes BPF_GetCurrentQuadrant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMainBehaviors BPF_GetCurrentMood(float& _fOutTimeSpendInMood) const;
    
};

