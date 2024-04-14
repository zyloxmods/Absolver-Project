#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "Interfaces/OnlinePresenceInterface.h"
#include "EInvitationState.h"
#include "WidgetData.h"
#include "EBPOnlinePresenceState.h"
#include "SCFriend.generated.h"

UCLASS(Blueprintable)
class USCFriend : public UWidgetData {
    GENERATED_BODY()
public:
    USCFriend();

    UFUNCTION(BlueprintCallable)
    void BPF_SendInvitation(float _repeatDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPlayingThisGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsOnline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsJoinable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetUserAttribute(const FString& _attribute, FString& _result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBPOnlinePresenceState BPF_GetState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInvitationState BPF_GetInvitationState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBPUniqueNetId BPF_GetID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetDisplayName();
    
};

