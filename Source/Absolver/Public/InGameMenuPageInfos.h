#pragma once
#include "CoreMinimal.h"
#include "ECharacterProgressionRewardTypes.h"
#include "EMenuEnum.h"
#include "InGameMenuPageInfos.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FInGameMenuPageInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuEnum m_Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAccessibleFromSubMenus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterProgressionRewardTypes m_eAvailabilityReward;
    
    FInGameMenuPageInfos();
};

