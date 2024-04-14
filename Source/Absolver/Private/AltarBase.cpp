#include "AltarBase.h"
#include "InteractionObjectComponent.h"
#include "SCSaveGameComponent.h"

AAltarBase::AAltarBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_InteractionObjectComponent = CreateDefaultSubobject<UInteractionObjectComponent>(TEXT("InteractionObjectComponent"));
    this->m_SaveGameComponent = CreateDefaultSubobject<USCSaveGameComponent>(TEXT("SaveComponent"));
}

void AAltarBase::UseInteractiveObject(APlayerController* _controller) {
}

void AAltarBase::UpdatedFromSave() {
}

void AAltarBase::OnDangerStateChanged(EDangerStates _ePrevDangerState, EDangerStates _eNewDangerState) {
}





