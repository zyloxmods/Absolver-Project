#pragma once
#include "CoreMinimal.h"
#include "ConnectionTemplate.h"
#include "LayerConnectionTemplate.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API ULayerConnectionTemplate : public UConnectionTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDrop;
    
    ULayerConnectionTemplate();

};

