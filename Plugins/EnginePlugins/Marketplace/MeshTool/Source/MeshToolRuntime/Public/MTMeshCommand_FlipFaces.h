#pragma once
#include "CoreMinimal.h"
#include "MTMeshCommand.h"
#include "MTMeshCommand_FlipFaces.generated.h"

UCLASS(Blueprintable)
class UMTMeshCommand_FlipFaces : public UMTMeshCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FaceWedgeIndices;
    
    UMTMeshCommand_FlipFaces();

};

