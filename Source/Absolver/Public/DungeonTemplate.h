#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LayoutsConnections.h"
#include "LayoutsPerDepth.h"
#include "DungeonTemplate.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UDungeonTemplate : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLayoutsPerDepth> m_LayoutTemplatesPerDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLayoutsConnections> m_LayoutConnectionsPerDepth;
    
    UDungeonTemplate();

};

