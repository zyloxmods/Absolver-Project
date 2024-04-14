#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KeyPass.generated.h"

class APlayerController;
class UInteractionObjectComponent;
class ULootComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AKeyPass : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionObjectComponent* m_InteractionObjectComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULootComponent* m_LootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=On_RepCollected, meta=(AllowPrivateAccess=true))
    bool m_bCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForAllPlayers;
    
public:
    AKeyPass(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UseInteractiveObject(APlayerController* _controller);
    
    UFUNCTION(BlueprintCallable)
    void On_RepCollected();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnKeyCollected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_KeyLareadyCollected();
    
};

