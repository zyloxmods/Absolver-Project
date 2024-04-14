#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttacksCombo.h"
#include "SharedAttacksCombo.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API USharedAttacksCombo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAttacksCombo m_Combo;
    
    USharedAttacksCombo();

};

