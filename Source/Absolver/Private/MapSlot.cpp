#include "MapSlot.h"

UMapSlot::UMapSlot() {
}

FString UMapSlot::BPF_GetWorldToLoadAsPackage() {
    return TEXT("");
}

TSoftObjectPtr<UWorld> UMapSlot::BPF_GetWorldToLoad() {
    return NULL;
}

UMapChoices* UMapSlot::BPF_GetMapPanel() {
    return NULL;
}



