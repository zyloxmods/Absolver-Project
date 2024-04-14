#pragma once
#include "CoreMinimal.h"
#include "AdversarialGameState.h"
#include "EObjectiveType.h"
#include "GameStateSeed.h"
#include "PlayerRestartPoints.h"
#include "RoomStateDescription.h"
#include "PVEGameState.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API APVEGameState : public AAdversarialGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRoomCleared, int32, roomCleared);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRestartingGame);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomCleared OnRoomWaitingToBeClearedUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestartingGame OnRestartingGame;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRoomStateDescription> m_RoomStates;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseRoomForStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentRoomWithAllPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RoomWaitingToBeCleared, meta=(AllowPrivateAccess=true))
    int32 m_iRoomWaitingToBeCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayerRestartPoints> m_respawnPoints;
    
public:
    APVEGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RoomWaitingToBeCleared();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastSetSeedAndStartGeneration_EditorOnly(const FGameStateSeed& _gameStateSeed);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRestartingGame();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsBossRoom(int32 _iRoom, bool& _containsBoss) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EObjectiveType BPF_GetRoomObjectiveType(int32 _iRoomIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetMaxDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentRoomWithAllPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentRoom() const;
    
};

