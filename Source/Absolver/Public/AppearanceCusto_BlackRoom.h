#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AppearanceCusto_BlackRoom.generated.h"

class AFightingCharacter;
class AFightingPlayerController;
class USceneComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AAppearanceCusto_BlackRoom : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFightingCharacter* m_Dummy;
    
public:
    AAppearanceCusto_BlackRoom(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAssetLoaded();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnPlayer(USceneComponent* _locations, UClass* _actorClass, AFightingPlayerController* _controller);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Reset();
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableTextureStreamingLoc();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisableTextureStreamingLoc();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPlayersLoaded();
    
};

