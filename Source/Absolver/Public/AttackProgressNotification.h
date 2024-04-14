#pragma once
#include "CoreMinimal.h"
#include "BaseNotification.h"
#include "AttackProgressNotification.generated.h"

class UAttackProgressNotification;

UCLASS(Blueprintable)
class UAttackProgressNotification : public UBaseNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDiscovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iBaseXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iGainedXP;
    
    UAttackProgressNotification();

    UFUNCTION(BlueprintCallable)
    UAttackProgressNotification* BPF_InitUnlocked(FName _attack);
    
    UFUNCTION(BlueprintCallable)
    UAttackProgressNotification* BPF_InitProgress(FName _attack, int32 _iBaseXP, int32 _iGainedXP);
    
    UFUNCTION(BlueprintCallable)
    UAttackProgressNotification* BPF_InitDiscovered(FName _attack);
    
};

