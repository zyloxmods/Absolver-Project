#pragma once
#include "CoreMinimal.h"
#include "MTMeshCommand.h"
#include "MTRawMesh.h"
#include "MTMeshCommand_ReplaceMesh.generated.h"

UCLASS(Blueprintable)
class UMTMeshCommand_ReplaceMesh : public UMTMeshCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMTRawMesh OldRawMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMTRawMesh NewRawMesh;
    
    UMTMeshCommand_ReplaceMesh();

};

