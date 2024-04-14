#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPUniqueNetId.h"
#include "AdvancedVoiceLibrary.generated.h"

UCLASS(Blueprintable)
class UAdvancedVoiceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAdvancedVoiceLibrary();

    UFUNCTION(BlueprintCallable)
    static bool UnRegisterRemoteTalker(const FBPUniqueNetId& UniqueNetId);
    
    UFUNCTION(BlueprintCallable)
    static void UnRegisterLocalTalker(uint8 LocalPlayerNum);
    
    UFUNCTION(BlueprintCallable)
    static void UnRegisterAllLocalTalkers();
    
    UFUNCTION(BlueprintCallable)
    static bool UnMuteRemoteTalker(uint8 LocalUserNum, const FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
    
    UFUNCTION(BlueprintCallable)
    static void StopNetworkedVoice(uint8 LocalPlayerNum);
    
    UFUNCTION(BlueprintCallable)
    static void StartNetworkedVoice(uint8 LocalPlayerNum);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllRemoteTalkers();
    
    UFUNCTION(BlueprintCallable)
    static bool RegisterRemoteTalker(const FBPUniqueNetId& UniqueNetId);
    
    UFUNCTION(BlueprintCallable)
    static bool RegisterLocalTalker(uint8 LocalPlayerNum);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterAllLocalTalkers();
    
    UFUNCTION(BlueprintCallable)
    static bool MuteRemoteTalker(uint8 LocalUserNum, const FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRemotePlayerTalking(const FBPUniqueNetId& UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerMuted(uint8 LocalUserNumChecking, const FBPUniqueNetId& UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocalPlayerTalking(uint8 LocalPlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsHeadsetPresent(bool& bHasHeadset, uint8 LocalPlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNumLocalTalkers(int32& NumLocalTalkers);
    
};

