#include "ParryMatch.h"

UParryMatch::UParryMatch() {
}

bool UParryMatch::BPE_DoesParrySideMatch_Implementation(EParrySide _eParrySide, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin) const {
    return false;
}

bool UParryMatch::BPE_DoesParryHeightMatch_Implementation(EParryHeight _eParryHeight, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin) const {
    return false;
}


