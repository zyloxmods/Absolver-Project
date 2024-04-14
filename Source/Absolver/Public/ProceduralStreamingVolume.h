#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AnchorStreamingAction.h"
#include "ProceduralStreamingVolume.generated.h"

class APlayerStart;

UCLASS(Blueprintable)
class ABSOLVER_API AProceduralStreamingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnchorStreamingAction> m_StreamingPerAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerStart* m_AssociatedPlayerStart;
    
    AProceduralStreamingVolume(const FObjectInitializer& ObjectInitializer);

};

