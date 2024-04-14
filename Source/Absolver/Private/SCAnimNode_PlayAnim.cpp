#include "SCAnimNode_PlayAnim.h"

FSCAnimNode_PlayAnim::FSCAnimNode_PlayAnim() {
    this->mbMirrorAnimation = false;
    this->miMetaStateID = 0;
    this->miAnimSubStateID = 0;
    this->miTransitionGlobalType = 0;
    this->mbUseStartCursor = false;
    this->mfStartCursor = 0.00f;
    this->mMirrorAnimDB = NULL;
}

