#pragma once
#include "CoreMinimal.h"
#include "BaseRoomTemplate.h"
#include "EProceduralConnectionType.h"
#include "ConnectionTemplate.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UConnectionTemplate : public UBaseRoomTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EProceduralConnectionType m_eConnectionType;
    
    UConnectionTemplate();

};

