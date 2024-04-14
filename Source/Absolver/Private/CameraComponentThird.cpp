#include "CameraComponentThird.h"

UCameraComponentThird::UCameraComponentThird(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_sActualLagParameters = NULL;
    this->m_CameraDB = NULL;
    this->m_fMouseYawScale = 2.50f;
    this->m_fMousePitchScale = 1.75f;
    this->m_MaterialParameterCollectionCameraDither = NULL;
}

ABaseCharacter* UCameraComponentThird::BPF_GetPlayerWatched() const {
    return NULL;
}

UBlackboardComponent* UCameraComponentThird::BPF_GetBlackBoardComponent() {
    return NULL;
}


