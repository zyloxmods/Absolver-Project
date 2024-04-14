#pragma once
#include "CoreMinimal.h"
#include "MTMeshCommand.h"
#include "RawMeshPoint.h"
#include "MTMeshCommand_AppendFace.generated.h"

UCLASS(Blueprintable)
class UMTMeshCommand_AppendFace : public UMTMeshCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRawMeshPoint> FacePoints;
    
    UMTMeshCommand_AppendFace();

};

