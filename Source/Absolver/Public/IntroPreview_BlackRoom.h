#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IntroPreview_BlackRoom.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AIntroPreview_BlackRoom : public AActor {
    GENERATED_BODY()
public:
    AIntroPreview_BlackRoom(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_EnableTextureStreamingLoc();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisableTextureStreamingLoc();
    
};

