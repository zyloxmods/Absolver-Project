#include "SCAnimNode_SaveBoneTransform.h"

FSCAnimNode_SaveBoneTransform::FSCAnimNode_SaveBoneTransform() {
    this->meSaveBone = ESaveBone::Attack1_LeftLeg;
    this->meTransformSpace = ECoordinateSystem::World;
}

