#pragma once
#include "CoreMinimal.h"
#include "MTMeshCommand.h"
#include "RawMeshPoint.h"
#include "MTMeshCommand_AppendVertex.generated.h"

UCLASS(Blueprintable)
class UMTMeshCommand_AppendVertex : public UMTMeshCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawMeshPoint PointToAdd;
    
    UMTMeshCommand_AppendVertex();

};

