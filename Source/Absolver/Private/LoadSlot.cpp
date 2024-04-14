#include "LoadSlot.h"

ULoadSlot::ULoadSlot() {
}

uint8 ULoadSlot::BPF_GetSlotIndex() {
    return 0;
}

FString ULoadSlot::BPF_GetSaveName() const {
    return TEXT("");
}

ULoadChoices* ULoadSlot::BPF_GetLoadPanel() {
    return NULL;
}



