#pragma once
#include "CoreMinimal.h"
#include "MTMeshCommand.h"
#include "RawMeshPoint.h"
#include "MTMeshCommand_RemoveFace.generated.h"

UCLASS(Blueprintable)
class UMTMeshCommand_RemoveFace : public UMTMeshCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FaceWedgeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRawMeshPoint> FacePoints;
    
    UMTMeshCommand_RemoveFace();

};

