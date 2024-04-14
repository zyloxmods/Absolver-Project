#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseComponent.h"
#include "EObjectiveType.h"
#include "VoiceOver.h"
#include "GatherComponent.generated.h"

class AGatherBank;
class APlayerController;
class UGatherVoiceOverData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UGatherComponent : public UActorComponent, public IBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRoomOpened, EObjectiveType, _eObjectiveType, float, _fWaveDelay);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRoomCleared, EObjectiveType, _eObjectiveType, int32, _iRoomIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomCleared OnRoomCleared;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomOpened OnRoomOpened;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGatherVoiceOverData* m_VoiceOverData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bAskForStoring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGatherBank* m_bankAsked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIsStoring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AGatherBank* m_currentBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* myController;
    
public:
    UGatherComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void BPF_SetAskForStoring(bool _bAsk, AGatherBank* _bank);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerStopStoring();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerStartStoring(AGatherBank* _bank);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetVoiceOverProgress();
    
    UFUNCTION(BlueprintCallable)
    void BPF_MarkAllVoiceOverDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsStoring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAskingForStoring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetStatueVoiceOverDone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetNextGenericVoiceOver(uint8 _uiTheme, FVoiceOver& _voiceOver);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetMaxDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetCurrentTheme() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGatherBank* BPF_GetCurrentBank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetBossVoiceOver(uint8 _uiTheme, FVoiceOver& _voiceOver);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGatherBank* BPF_GetBankAsked() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ConsumeStatueVoiceOver();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ConsumeNextGenericVoiceOver(const uint8& _uiTheme);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ConsumeBossVoiceOver(const uint8& _uiTheme);
    

    // Fix for true pure virtual functions not being implemented
};

