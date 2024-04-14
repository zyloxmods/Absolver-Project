#include "UsableItemData.h"

UUsableItemData::UUsableItemData() {
    this->m_fCooldown = 0.00f;
    this->m_uiShardsCost = 0;
    this->m_eHandPose[0] = EHandPoses::HammerGrip;
    this->m_eHandPose[1] = EHandPoses::HammerGrip;
    this->m_eHandPose[2] = EHandPoses::HammerGrip;
    this->m_UsableItemClass = NULL;
    this->m_Description = FText::FromString(TEXT("Item Description"));
    this->m_iTargetRecquirements = 255;
}


