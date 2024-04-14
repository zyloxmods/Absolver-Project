#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "EJoinMethod.h"
#include "FightingPlayerState.generated.h"

class AFightingPlayerState;
class UDamageType;

UCLASS(Blueprintable)
class AFightingPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSchoolLevelChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNameChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchoolLevelChanged OnSchoolLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameChanged OnPlayerNameChanged;
    
private:
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EJoinMethod m_eJoinMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SchoolLevel, meta=(AllowPrivateAccess=true))
    int32 m_iSchoolLevel;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint16 m_uDispatcherToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamNumber, meta=(AllowPrivateAccess=true))
    int32 m_iTeamNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iNumKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iNumDeaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiRespawnZoneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bQuitter: 1;
    
public:
    AFightingPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamNumber();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SchoolLevel();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void InformAboutKill(AFightingPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AFightingPlayerState* KilledPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKills() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastDeath(AFightingPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, AFightingPlayerState* KilledPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetTeam(int32 _iTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMentor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInSchool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDisciple() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetSchoolLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetDeaths() const;
    
};

