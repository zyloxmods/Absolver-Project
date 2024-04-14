#include "SCActorManager.h"

USCActorManager::USCActorManager() {
}

void USCActorManager::OnTargetableEndPlayCallback(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

void USCActorManager::OnActorDestroyed(AActor* _actorDestroyed) {
}

void USCActorManager::BPF_RegisterLootBoxSequenceActor(AActor* _context, ALevelSequenceActor* _sequence) {
}

void USCActorManager::BPF_RegisterLootBoxBlackroom(AActor* _context, ALootboxes_BlackRoom* _BlackRoom) {
}

void USCActorManager::BPF_RegisterIntroPreviewBlackRoom(AActor* _context, AIntroPreview_BlackRoom* _BlackRoom) {
}

void USCActorManager::BPF_RegisterAppearanceCustoBlackRoom(AActor* _context, AAppearanceCusto_BlackRoom* _BlackRoom) {
}

ALevelSequenceActor* USCActorManager::BPF_GetLootBoxSequenceActor(AActor* _context) {
    return NULL;
}

ALootboxes_BlackRoom* USCActorManager::BPF_GetLootBoxBlackroom(AActor* _context) {
    return NULL;
}

AIntroPreview_BlackRoom* USCActorManager::BPF_GetIntroPreviewBlackRoom(AActor* _context) {
    return NULL;
}

AAppearanceCusto_BlackRoom* USCActorManager::BPF_GetAppearanceCustoBlackRoom(AActor* _context) {
    return NULL;
}


