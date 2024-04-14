#pragma once
#include "CoreMinimal.h"
#include "Components/ProgressBar.h"
#include "RatingProgressBar.generated.h"

UCLASS(Blueprintable)
class URatingProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iImageCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSteps;
    
    URatingProgressBar();

};

