#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "ThePlainesLevel.generated.h"

class ABlenderManager;
class UAkAudioBank;

UCLASS(Blueprintable)
class ABSOLVER_API AThePlainesLevel : public ALevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABlenderManager* m_BlenderManager;
    
private:
  //  UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    TArray<UAkAudioBank*> m_AudioBanksToLoad;
    
public:
    AThePlainesLevel(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_AllSoundBanksLoaded();
    
};

