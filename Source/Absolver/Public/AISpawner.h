#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AILevel.h"
#include "AnimContainer.h"
#include "ECharacterSex.h"
#include "EFactionsEnums.h"
#include "EFirstSpawnMethod.h"
#include "IdleAnimPerSex.h"
#include "Templates/SubclassOf.h"
#include "AISpawner.generated.h"

class AAIZoneVolume;
class ABaseCharacter;
class UArchetypeAsset;
class UEquipmentSelectionData;
class USCSaveGameComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AAISpawner : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseCharacter> m_SpawningClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UArchetypeAsset*> m_Archetypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAILevel> m_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEquipmentSelectionData* m_EquipmentSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSex m_eSex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionsEnums m_eFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseRespawnFxAtSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFirstSpawnMethod m_eFirstSpawnMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIZoneVolume* m_ZoneOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_IdleAnims[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIdleAnimPerSex> m_IdleAnimsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCSaveGameComponent* m_SaveGameComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreAlertPropagation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bLooted;
    
public:
    AAISpawner(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnEndPlayAI(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_WantsSpawn(UArchetypeAsset* _archetype, int32 _ilevel, int32 _iAIIdxInSpawner);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanRespawn(bool _canRespawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasSpawnedAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRespawnFinished(AActor* _ActorAIRespawned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnIADown(AActor* _ActorAI);
    
};

