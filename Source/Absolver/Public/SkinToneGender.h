#pragma once
#include "CoreMinimal.h"
#include "SkinToneGender.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSkinToneGender {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_SkinTones[2];
    
    ABSOLVER_API FSkinToneGender();
};

