#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GatherTrap.h"
#include "HurtBox.generated.h"

class AActor;
class USCNavModifierComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AHurtBox : public AGatherTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCNavModifierComponent* m_NavModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fKnockback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceKnockbackDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBeforeNextHurt;
    
public:
    AHurtBox(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnFightingCharDestroyedCallBack(AActor* _destroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetStunTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetKnockback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector BPF_GetForcedKnockbackDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDamage() const;
    
};

