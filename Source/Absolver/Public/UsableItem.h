#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EItemUseState.h"
#include "ItemEffects.h"
#include "UsableItem.generated.h"

class UShapeComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AUsableItem : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* m_ShapeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ItemAttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemEffects> m_Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMatchesWithAvoid;
    
public:
    AUsableItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemUseState BPF_GetItemUseState() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPF_ComputeAttackKnockbackCoeff(AActor* _instigator, AActor* Target, const FName& _AttackName, const FHitResult& _hitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InterruptItemUseAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InstantUse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EndUsePhase();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EndItemUseAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BeginUsePhase();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BeginItemUseAction();
    
};

