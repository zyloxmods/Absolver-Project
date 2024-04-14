#pragma once
#include "CoreMinimal.h"
#include "EMenuEnum.h"
#include "HUDUserWidget.h"
#include "InGameNotification.generated.h"

class UAttackProgressNotification;
class UBaseNotification;
class ULevelUpNotification;
class UMessageNotification;
class UProgressionDoorNotification;
class UProgressionRewardNotification;

UCLASS(Blueprintable, EditInlineNew)
class UInGameNotification : public UHUDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBaseNotification*> m_NotificationStack;
    
public:
    UInGameNotification();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ShowNextNotification();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PushNotification(UBaseNotification* _notification);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopNotification();
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableOpenMenu();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisableOpenMenu();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearPendingNotificationOfTypes(TArray<UClass*> _NotificationTypes);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HideCurrentNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HandleProgressionRewardNotification(const UProgressionRewardNotification* _rewardNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HandleProgressionDoorNotification(const UProgressionDoorNotification* _progressionDoorNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HandleNotification(const UBaseNotification* _messageNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HandleMessageNotification(const UMessageNotification* _messageNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HandleLevelUpNotification(const ULevelUpNotification* _levelUpNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HandleAttackProgressNotification(const UAttackProgressNotification* _attackProgressNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackProgressNotification* BPE_FindOrCreateAttackProgressNotification(const FName& _AttackName);
    
};

