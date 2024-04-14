#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MTMeshCommand.generated.h"

UCLASS(Abstract, Blueprintable)
class UMTMeshCommand : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipUndo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipRedo;
    
    UMTMeshCommand();

};

