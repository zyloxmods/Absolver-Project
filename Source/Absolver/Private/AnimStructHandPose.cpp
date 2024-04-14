#include "AnimStructHandPose.h"

FAnimStructHandPose::FAnimStructHandPose() {
    this->m_eHandPoseBlendInType1 = EHandPoseBlendInTypes::Attack;
    this->m_eHandPoseBlendInType2 = EHandPoseBlendInTypes::Attack;
    this->m_eHandPoseBlendOutType1 = EHandPoseBlendOutTypes::Meditation;
    this->m_eHandPoseBlendOutType2 = EHandPoseBlendOutTypes::Meditation;
}

