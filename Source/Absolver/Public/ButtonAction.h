#pragma once
#include "CoreMinimal.h"
#include "EActionMouseButtons.h"
#include "EControllerIconAxisTypes.h"
#include "EUIInputModes.h"
#include "InputAction.h"
#include "ButtonAction.generated.h"

class UGenericInputData;
class UTexture2D;

USTRUCT(BlueprintType)
struct ABSOLVER_API FButtonAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIInputModes m_eInputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerIconAxisTypes m_eAxisType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGenericInputData*> m_InputDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionMouseButtons m_Mouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_MouseModeTexture;
    
    FButtonAction();
};

