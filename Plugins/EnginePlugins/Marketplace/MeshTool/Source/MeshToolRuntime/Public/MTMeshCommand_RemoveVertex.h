#pragma once
#include "CoreMinimal.h"
#include "MTMeshCommand.h"
#include "RawMeshPoint.h"
#include "MTMeshCommand_RemoveVertex.generated.h"

UCLASS(Blueprintable)
class UMTMeshCommand_RemoveVertex : public UMTMeshCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawMeshPoint PointToRemove;
    
    UMTMeshCommand_RemoveVertex();

};

