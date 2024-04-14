#pragma once
#include "CoreMinimal.h"
#include "BaseItemData.h"
#include "EGearRarity.h"
#include "ResourceItemData.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UResourceItemData : public UBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iFragmentsNb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGearRarity m_eRarity;
    
    UResourceItemData();

};

