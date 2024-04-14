#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AIZoneVolume.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AAIZoneVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBufferZone;
    
public:
    AAIZoneVolume(const FObjectInitializer& ObjectInitializer);

};

