#pragma once
#include "CoreMinimal.h"
#include "ELootBoxType.h"
#include "LootBoxTypeCountStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FLootBoxTypeCountStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELootBoxType m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCount;
    
    FLootBoxTypeCountStruct();
};

