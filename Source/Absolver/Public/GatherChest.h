#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractiveInterface.h"
#include "GatherChest.generated.h"

class AController;
class APickUpActor;
class APlayerController;
class UBoxComponent;
class UDataTable;
class UInteractionObjectComponent;
class ULootComponent;
class USCNavModifierComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AGatherChest : public AActor/*, public IInteractiveInterface */{
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLooted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iChestIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_LootData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_FragmentLootData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iDifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiTheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iSeedForLoots;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionObjectComponent* m_InteractionObjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULootComponent* m_LootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_InteractionTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCNavModifierComponent* m_NavModifierComponent;
    
public:
    AGatherChest(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnChestOpen(APlayerController* _controller);
    
    UFUNCTION(BlueprintCallable)
    void OnChestLootedCallBack(APickUpActor* _pickedActor, AController* _picker);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void NetMulticastOnChestOpen(APlayerController* _controller);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnLoots();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnChestOpened(APlayerController* _controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnChestLooted(APlayerController* _controller);
    

    // Fix for true pure virtual functions not being implemented
};

