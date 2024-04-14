#pragma once
#include "CoreMinimal.h"
#include "EInGameMenuPages.h"
#include "SCButton.h"
#include "TabButton.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UTabButton : public USCButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInGameMenuPages m_eLinkedPage;
    
public:
    UTabButton();

};

