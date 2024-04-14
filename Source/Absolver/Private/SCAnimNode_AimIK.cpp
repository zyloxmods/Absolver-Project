#include "SCAnimNode_AimIK.h"

FSCAnimNode_AimIK::FSCAnimNode_AimIK() {
    this->mfMinDistanceRatio = 0.00f;
    this->mfMaxDistanceRatio = 0.00f;
    this->mbUseDirectWorldPositionForHitTarget = false;
    this->muiNbIterations = 0;
    this->mfAbsoluteAngleTolerance = 0.00f;
    this->mbDebugActivated = false;
    this->meIKSolverType = EAimIKSolverType::Quaternion;
}

