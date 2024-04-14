#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "StreamingUnit.generated.h"

class UWorld;

UCLASS(Blueprintable)
class ABSOLVER_API UStreamingUnit : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> m_WorldsToLoad;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Offsets[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_ObjectiveAvailability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiTheme;
    
    UStreamingUnit();

};

