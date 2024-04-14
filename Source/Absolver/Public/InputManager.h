#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputManager.generated.h"

class UInputPad;
class UInputsDB;

UCLASS(Blueprintable)
class ABSOLVER_API UInputManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputsDB* m_inputsDB;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputPad*> m_pads;
    
public:
    UInputManager();

};

