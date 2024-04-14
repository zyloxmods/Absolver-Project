#pragma once
#include "CoreMinimal.h"
#include "LayoutsConnections.generated.h"

class ULayerConnectionTemplate;

USTRUCT(BlueprintType)
struct FLayoutsConnections {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULayerConnectionTemplate*> m_NorthLayoutConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULayerConnectionTemplate*> m_EastLayoutConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULayerConnectionTemplate*> m_SouthLayoutConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULayerConnectionTemplate*> m_WestLayoutConnections;
    
    ABSOLVER_API FLayoutsConnections();
};

