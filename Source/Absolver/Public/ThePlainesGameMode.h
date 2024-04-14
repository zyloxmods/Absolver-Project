#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Templates/SubclassOf.h"
#include "ThePlainesGameMode.generated.h"

class AController;
class APlayerController;
class URewardScreenWidget;

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API AThePlainesGameMode : public AGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ForcedPlayerStart;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGMDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URewardScreenWidget> m_RewardWidgetClass;
    
public:
    AThePlainesGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void KillAllAis();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APlayerController*> BPF_GetPlayers();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceRestartPlayerAtStartNull(AController* _controller);
    
};

