#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "USerStreamingActions.h"
#include "ProceduralStreamingManager.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AProceduralStreamingManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUSerStreamingActions> m_StreamingActionsPerController;
    
public:
    AProceduralStreamingManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

