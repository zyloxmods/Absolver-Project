#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCProceduralControllerComponent.generated.h"

class APVEGameState;
class AProceduralPathBlockers;
class ATeamSequenceActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API USCProceduralControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameStateReplicated, APVEGameState*, GameState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStateReplicated OnGameStateReplicated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GameState, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APVEGameState> m_GameState;
    
public:
    USCProceduralControllerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnLockedDoor(AProceduralPathBlockers* _blocker);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestCutsceneLaunch(ATeamSequenceActor* _sequence);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_GameState();
    
};

