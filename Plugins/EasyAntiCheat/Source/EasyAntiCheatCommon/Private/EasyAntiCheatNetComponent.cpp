#include "EasyAntiCheatNetComponent.h"

UEasyAntiCheatNetComponent::UEasyAntiCheatNetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bAutoActivate = true;
}

void UEasyAntiCheatNetComponent::ServerMessage_Implementation(const TArray<uint8>& Message) {
}
bool UEasyAntiCheatNetComponent::ServerMessage_Validate(const TArray<uint8>& Message) {
    return true;
}

void UEasyAntiCheatNetComponent::ClientMessage_Implementation(const TArray<uint8>& Message) {
}


