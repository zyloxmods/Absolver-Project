#pragma once
#include "CoreMinimal.h"
#include "EDownState.h"
#include "MenuWidget.h"
#include "HUDDown.generated.h"

class UHealthComponent;

UCLASS(Blueprintable, EditInlineNew)
class UHUDDown : public UMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVanishPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCanBeRevivedTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_CanBeRevivedTimerAsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Second;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_TextSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDownState m_eDownState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iResourceBeforeDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iResourceLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanVanish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeBeforeVanishActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRespawnTimeNoDown;
    
public:
    UHUDDown();

private:
    UFUNCTION(BlueprintCallable)
    void OnDownStateChanged(UHealthComponent* _healthComponent, EDownState _eNewDownState, bool _bInCoop);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetResourceLostFeedback(int32 _ResourceLost);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetResourceBeforeDownFeedback(int32 _ResourceBeforeDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UpdateLifeCount(int32 _iLives);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnReviveStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnReviveEnded(bool _bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DownStateChanged(EDownState _eNewDownState, EDownState _ePrevDownState, bool _bInCoop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ChangeLivesVisibillity(bool _bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_CanVanishChange(bool _bCanVanish);
    
};

