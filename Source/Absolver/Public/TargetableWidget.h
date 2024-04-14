#pragma once
#include "CoreMinimal.h"
#include "ERelationshipTypes.h"
#include "SCUserWidget.h"
#include "TargetableWidget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UTargetableWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UTargetableWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_SetRelatedActor(AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetRelatedActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RelatedActorRelationshipChanged(ERelationshipTypes _eRelation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RelatedActorChanged(AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnGrantedToAbsolver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_FightDetectionWarning();
    
};

