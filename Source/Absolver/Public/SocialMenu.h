#pragma once
#include "CoreMinimal.h"
#include "EPlayerSorting.h"
#include "MenuWidget.h"
#include "SocialMenu.generated.h"

class AFightingCharacter;
class UPagingScrollBox;
class USCFriend;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API USocialMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFriendRefreshFrequency;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USCFriend*> m_FriendCache;
    
public:
    USocialMenu();

    UFUNCTION(BlueprintCallable)
    void BPF_StopFriendRefreshTimer();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartFriendRefreshTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetError();
    
    UFUNCTION(BlueprintCallable)
    void BPF_FillScrollBoxWithRecentPlayers(UPagingScrollBox* _pagingBox);
    
    UFUNCTION(BlueprintCallable)
    void BPF_FillScrollBoxWithFriends(UPagingScrollBox* _pagingBox, const TArray<EPlayerSorting>& _sorting, bool& _bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanInviteNewPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshFriendsRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPlayerJoined(AFightingCharacter* _character);
    
};

