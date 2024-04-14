#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ETintEnum.h"
#include "TintData.h"
#include "TintDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UTintDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETintEnum, FTintData> m_TintsData;
    
    UTintDB();

};

