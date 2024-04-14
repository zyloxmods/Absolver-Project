#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DominationArea.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class ABSOLVER_API ADominationArea : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_bIsNetReady;
    
public:
    ADominationArea(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetNetReady(bool _bReady);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsNetReady();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<AFightingCharacter*> BPF_GetAllFightingCharacters();
    
};

