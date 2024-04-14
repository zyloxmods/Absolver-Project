#include "GameModePortal.h"
#include "InteractionObjectComponent.h"

AGameModePortal::AGameModePortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_InteractionObjectComponent = CreateDefaultSubobject<UInteractionObjectComponent>(TEXT("InteractionObjectComponent"));
    this->m_eGameModeType = EGameModeTypes::Mode1v1;
    this->m_bRankedGame = false;
}

void AGameModePortal::UseInteractiveObject(APlayerController* _controller) {
}


