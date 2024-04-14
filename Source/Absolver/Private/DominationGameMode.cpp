#include "DominationGameMode.h"

ADominationGameMode::ADominationGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fDelayToLaunchNewArea = 15.00f;
}

void ADominationGameMode::BPF_SetNumAreaActiveAtTheSameTime(int32 _iNbAreaActive) {
}




