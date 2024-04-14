#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lootboxes_BlackRoom.generated.h"

class UMaterialInstanceDynamic;
class UTexture2D;
class UThePlainesGameInstance;

UCLASS(Blueprintable)
class ABSOLVER_API ALootboxes_BlackRoom : public AActor {
    GENERATED_BODY()
public:
    ALootboxes_BlackRoom(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LoadTextureAsyncForMaterial(TSoftObjectPtr<UTexture2D> _texture, UMaterialInstanceDynamic* _material, FName _paramName, UThePlainesGameInstance* _instance);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableTextureStreamingLoc();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisableTextureStreamingLoc();
    
};

