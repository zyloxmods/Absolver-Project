#pragma once
#include "CoreMinimal.h"
#include "MTMeshCommand.h"
#include "VertexTransformPoint.h"
#include "MTMeshCommand_TranslateVerts.generated.h"

UCLASS(Blueprintable)
class UMTMeshCommand_TranslateVerts : public UMTMeshCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVertexTransformPoint> TransformPoints;
    
    UMTMeshCommand_TranslateVerts();

};

