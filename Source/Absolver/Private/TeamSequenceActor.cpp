#include "TeamSequenceActor.h"

ATeamSequenceActor::ATeamSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bStayOnBlackScreen = false;
}

void ATeamSequenceActor::OnSequenceEnded() {
}

void ATeamSequenceActor::OnAssetLoaded() {
}

void ATeamSequenceActor::BPF_Stop() {
}

void ATeamSequenceActor::BPF_SpawnPlayersAtLocations(uint8 _uiTeam, const TArray<USceneComponent*>& _locations, UClass* _actorClass) {
}

void ATeamSequenceActor::BPF_SpawnGenericActorsAtLocationsPerAvailablePlayers(uint8 _uiTeam, const TArray<USceneComponent*>& _locations, UClass* _actorClass, TArray<AActor*>& _outCreatedActor) {
}

void ATeamSequenceActor::BPF_SetController(AFightingPlayerController* _controller) {
}

bool ATeamSequenceActor::BPF_IsLoading() {
    return false;
}





bool ATeamSequenceActor::BPE_GetIsFinished_Implementation() const {
    return false;
}


