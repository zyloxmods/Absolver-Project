#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MapConfig.h"
#include "MapConfigDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UMapConfigDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapConfig> m_MapConfig;
    
    UMapConfigDB();

};

