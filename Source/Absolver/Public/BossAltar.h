#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AltarBase.h"
#include "BossAltar.generated.h"

class AActor;
class APlayerStart;
class ASpawnerGroup;

UCLASS(Blueprintable)
class ABSOLVER_API ABossAltar : public AAltarBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSituationCleared);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSituationCleared OnSituationCleared;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawnerGroup*> m_AssociatedSituations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerStart* m_RespawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_OutroEndTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiOuttroEndZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_OutroCinematicLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_SituationWalls;
    
public:
    ABossAltar(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OutroLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OutroCinematicCompleted();
    
    UFUNCTION(BlueprintCallable)
    void IntroCinematicCompleted();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ReadyToLeaveCompletedSituation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SituationStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SituationCompleted(bool _success);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BPE_GetBossOutroCinematic();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BPE_GetBossCinematic();
    
};

