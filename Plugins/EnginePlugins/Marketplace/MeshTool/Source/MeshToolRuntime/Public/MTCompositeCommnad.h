#pragma once
#include "CoreMinimal.h"
#include "MTMeshCommand.h"
#include "MTCompositeCommnad.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class MESHTOOLRUNTIME_API UMTCompositeCommnad : public UMTMeshCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMTMeshCommand*> Commands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStaticMesh> EditingStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EditingLODIndex;
    
    UMTCompositeCommnad();

};

