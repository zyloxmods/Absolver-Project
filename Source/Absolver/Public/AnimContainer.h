#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct ABSOLVER_API FAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_SpeedPerFrame;
    
    FAnimContainer();
};

