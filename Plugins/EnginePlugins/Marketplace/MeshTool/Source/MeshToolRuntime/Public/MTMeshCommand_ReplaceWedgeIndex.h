#pragma once
#include "CoreMinimal.h"
#include "MTMeshCommand.h"
#include "RawMeshPoint.h"
#include "MTMeshCommand_ReplaceWedgeIndex.generated.h"

UCLASS(Blueprintable)
class UMTMeshCommand_ReplaceWedgeIndex : public UMTMeshCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawMeshPoint OldPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawMeshPoint NewPoint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ReplaceIndex;
    
    UMTMeshCommand_ReplaceWedgeIndex();

};

