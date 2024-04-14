#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPlayerNumber.h"
#include "EWaveModeMusic.h"
#include "WaveSpawner.generated.h"

class AAISpawner;
class UObjectiveComponent;
class UWaveDescriptionDB;
class UWaveSpawnerConfigDB;

UCLASS(Blueprintable)
class ABSOLVER_API AWaveSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawner*> m_Spawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWaveSpawnerConfigDB* m_ConfigDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iSpawnCountInWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iTotalSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iKillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iTotalToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Started, meta=(AllowPrivateAccess=true))
    bool m_bStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Cleared, meta=(AllowPrivateAccess=true))
    bool m_bCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPlayerNumber m_ePlayerCountAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectiveComponent* m_ObjectiveComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fTimeSinceLastSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWaveDescriptionDB* m_CurrentWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iIdChoosenForWaveSelection;
    
public:
    AWaveSpawner(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Started();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Cleared();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void NetMulticastOnStartMusic(EWaveModeMusic _eMusicToPlay);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_StartWave();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_WaveModeMusic(EWaveModeMusic _eWaveModeMusic);
    
};

