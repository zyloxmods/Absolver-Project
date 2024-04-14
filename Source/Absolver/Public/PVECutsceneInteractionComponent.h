#pragma once
#include "CoreMinimal.h"
#include "InteractionObjectComponent.h"
#include "PVECutsceneInteractionComponent.generated.h"

class ATeamSequenceActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UPVECutsceneInteractionComponent : public UInteractionObjectComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeamSequenceActor* m_CutsceneToLaunch;
    
    UPVECutsceneInteractionComponent(const FObjectInitializer& ObjectInitializer);

};

