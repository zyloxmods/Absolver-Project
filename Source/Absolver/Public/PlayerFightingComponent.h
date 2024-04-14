#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFightingActionState.h"
#include "MatchmakingZoneStatus.h"
#include "PlayerFightingComponent.generated.h"

class AActor;
class AFightingCharacter;
class UCompassDB;
class UEquipmentSelectionData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UPlayerFightingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDialogStatusChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFightingCharacter*> m_EnemyBehindList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Dialog, meta=(AllowPrivateAccess=true))
    bool m_bIsInDialog;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogStatusChanged OnDialogStatusChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEquipmentSelectionData* m_DefaultEquipmentSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CombatStyle, meta=(AllowPrivateAccess=true))
    uint8 m_uiCombatStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLockMoveFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCompassDB* m_CompassDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnemyBehindDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnemyBehindCosAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepMatchmakingZoneStatus, meta=(AllowPrivateAccess=true))
    FMatchmakingZoneStatus m_MatchmakingZoneStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFakePlayer;
    
public:
    UPlayerFightingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetZoneStatus(const FMatchmakingZoneStatus& _matchmakingZoneStatus);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChangeCombatStyle(uint8 _uiNewCombatStyle);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetChangedCallback(AActor* _oldTarget, AActor* _newTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnRepMatchmakingZoneStatus();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Dialog();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CombatStyle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFightingActionState GetCurrentActionState() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsInEndOfMovesetTutorial(bool _bActivate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerSetIsInDialog(bool _bInDialog);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceEnterMeditation();
    
};

