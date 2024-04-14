#pragma once
#include "CoreMinimal.h"
#include "HUDUserWidget.h"
#include "NetworkStatusWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UNetworkStatusWidget : public UHUDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsOnline;
    
public:
    UNetworkStatusWidget();

};

