#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "SCActorManager.generated.h"

class AActor;
class AAppearanceCusto_BlackRoom;
class AIntroPreview_BlackRoom;
class ALevelSequenceActor;
class ALootboxes_BlackRoom;

UCLASS(Blueprintable)
class ABSOLVER_API USCActorManager : public UObject {
    GENERATED_BODY()
public:
    USCActorManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnTargetableEndPlayCallback(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* _actorDestroyed);
    
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_RegisterLootBoxSequenceActor(AActor* _context, ALevelSequenceActor* _sequence);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_RegisterLootBoxBlackroom(AActor* _context, ALootboxes_BlackRoom* _BlackRoom);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_RegisterIntroPreviewBlackRoom(AActor* _context, AIntroPreview_BlackRoom* _BlackRoom);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_RegisterAppearanceCustoBlackRoom(AActor* _context, AAppearanceCusto_BlackRoom* _BlackRoom);
    
    UFUNCTION(BlueprintCallable)
    static ALevelSequenceActor* BPF_GetLootBoxSequenceActor(AActor* _context);
    
    UFUNCTION(BlueprintCallable)
    static ALootboxes_BlackRoom* BPF_GetLootBoxBlackroom(AActor* _context);
    
    UFUNCTION(BlueprintCallable)
    static AIntroPreview_BlackRoom* BPF_GetIntroPreviewBlackRoom(AActor* _context);
    
    UFUNCTION(BlueprintCallable)
    static AAppearanceCusto_BlackRoom* BPF_GetAppearanceCustoBlackRoom(AActor* _context);
    
};

