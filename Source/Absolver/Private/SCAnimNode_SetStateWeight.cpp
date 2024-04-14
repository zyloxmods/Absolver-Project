#include "SCAnimNode_SetStateWeight.h"

FSCAnimNode_SetStateWeight::FSCAnimNode_SetStateWeight() {
    this->miStateIndex = 0;
    this->mfWeight = 0.00f;
    this->mbOverrideVariableWeightLayer = false;
    this->miOverridenLayer = 0;
}

