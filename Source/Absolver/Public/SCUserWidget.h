#pragma once
#include "CoreMinimal.h"
#include "EPlatform.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EUIInputModes.h"
#include "EditorPreviewWidget.h"
#include "Templates/SubclassOf.h"
#include "SCUserWidget.generated.h"

class AFightingCharacter;
class AFightingPlayerController;
class UAltarInteractionComponent;
class UAttackComponent;
class UDefenseComponent;
class UHealthComponent;
class UInventoryComponent;
class UMentoringManager;
class UMenuDB;
class UPanelWidget;
class USocialComponent;
class USocialManager;
class UStatsComponent;
class UThePlainesGameInstance;
class UWidgetAnimation;
class UWidgetData;
class UWorld;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API USCUserWidget : public UEditorPreviewWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FVisibilityChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityChanged m_OnVisible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityChanged m_OnHidden;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_ActiveVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetData* m_Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidgetData> m_DataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eControllerInputModeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eMouseInputModeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eFocusedVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNotifyPawnChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNotifyUIInputModeChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUpdateDataOnCharacterProgression;
    
public:
    USCUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDataUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetData(UWidgetData* _data);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PlayAnimationFromCurrentTime(UWidgetAnimation* _inAnimation, int32 _iNumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyDataUpdatedToChildren(UPanelWidget* _root);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyDataUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsVisibleInTree();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPlayerLeaderInPvpAndHasAllies();
    
    UFUNCTION(BlueprintCallable)
    void BPF_GiveFocusIfNeeded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUIInputModes BPF_GetUIInputMode() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UThePlainesGameInstance* BPF_GetThePlainesGameInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStatsComponent* BPF_GetStatsComponent();
    
    UFUNCTION(BlueprintCallable)
    USocialManager* BPF_GetSocialManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USocialComponent* BPF_GetSocialComponent();
    
protected:
    UFUNCTION(BlueprintCallable)
    FString BPF_GetPlayerName();
    
    UFUNCTION(BlueprintCallable)
    FString BPF_GetPlayerBuildName();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlatform BPF_GetPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuDB* BPF_GetMenuDB();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMentoringManager* BPF_GetMentoringManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* BPF_GetInventoryComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHealthComponent* BPF_GetHealthComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingPlayerController* BPF_GetFightingPlayerController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingCharacter* BPF_GetFightingCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDefenseComponent* BPF_GetDefenseComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetData* BPF_GetData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* BPF_GetCurrentWorld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackComponent* BPF_GetAttackComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAltarInteractionComponent* BPF_GetAltarInteractionComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CheckControllerHasAnyFocus();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UnbindFromDelegates();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUIInputModeChanged(EUIInputModes _eMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnPawnChanged(AFightingCharacter* _character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnDataUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GiveFocus();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BindToDelegates(bool _bPawnOnly);
    
};

