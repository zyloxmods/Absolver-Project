#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMenuEnum.h"
#include "BaseNotification.generated.h"

UCLASS(Blueprintable)
class UBaseNotification : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuEnum m_eOpenMenu;
    
    UBaseNotification();

};

