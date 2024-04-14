#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CinematicManager.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UCinematicManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFadeDuration;
    
public:
    UCinematicManager();

private:
    UFUNCTION(BlueprintCallable)
    void MovieStopped();
    
};

