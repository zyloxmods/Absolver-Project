#pragma once
#include "CoreMinimal.h"
#include "EDownState.h"
#include "InteractiveInterface.h"
#include "InteractiveObject.h"
#include "ReviveInteractiveObject.generated.h"

class AActor;

UCLASS(Blueprintable)
class ABSOLVER_API AReviveInteractiveObject : public AInteractiveObject/*, public IInteractiveInterface */ {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReviveActor, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_ReviveActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Rescuer, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_RescuerActor;
    
public:
    AReviveInteractiveObject(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReviveActor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Rescuer();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MultiCastWantDestruction(bool _bToDeath);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInSameTeamAsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInSamCoopGroupAsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetReviveActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_TeamOfLocalPlayerComputed(bool _bSameTeam, bool _bSameCoopGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnWantDestruction(bool _bToDeath);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnReviveStop(bool _bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnReviveStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCreation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_DownStateChanged(EDownState _eNewDownState);
    

    // Fix for true pure virtual functions not being implemented
};

