#include "AvoidMatchCondition.h"

UAvoidMatchCondition::UAvoidMatchCondition() {
}

EAvoidTrackingTypes UAvoidMatchCondition::BPE_GetAttackTrackingResponseFromAvoidType_Implementation(EAvoidType _eAvoidType) const {
    return EAvoidTrackingTypes::TrueTarget;
}

bool UAvoidMatchCondition::BPE_DoesAvoidMatch_Implementation(EAvoidType _eAvoidType, EAttackTarget _eAttackTarget, EAttackMovementType _eAttackMovementType, EAttackOrigin _eAttackOrigin) const {
    return false;
}

bool UAvoidMatchCondition::BPE_DoesAvoidDismissesHit_Implementation(EAvoidType _eAvoidType, EAttackMovementType _eAttackMvtType, EAttackTarget _eAttackTarget, ECardinalPoints _eCardPoint) const {
    return false;
}


