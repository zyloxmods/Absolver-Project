#include "SCSpectatorPawn.h"

ASCSpectatorPawn::ASCSpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fSpeedFactorModifier = 0.10f;
    this->m_fFOVModifier = 10.00f;
}


