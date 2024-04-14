#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ResourcesTexturesData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ABSOLVER_API UResourcesTexturesData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_FragmentText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_FragmentTexture;
    
    UResourcesTexturesData();

};

