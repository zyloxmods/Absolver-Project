#pragma once
#include "CoreMinimal.h"
#include "MTMeshCommand.h"
#include "MTUVPoint.h"
#include "MTMeshCommand_UpdateUV.generated.h"

UCLASS(Blueprintable)
class UMTMeshCommand_UpdateUV : public UMTMeshCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMTUVPoint> UVPoints;
    
    UMTMeshCommand_UpdateUV();

};

