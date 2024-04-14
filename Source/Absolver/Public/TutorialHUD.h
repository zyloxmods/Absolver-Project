#pragma once
#include "CoreMinimal.h"
#include "ETutorialHUDState.h"
#include "ETutorialUnlockState.h"
#include "HUDUserWidget.h"
#include "TutorialDataRow.h"
#include "TutorialUnlockStruct.h"
#include "TutorialHUD.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UTutorialHUD : public UHUDUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateChanged, ETutorialHUDState, _state);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChanged m_OnStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_TutorialDB;
    
    UTutorialHUD();

    UFUNCTION(BlueprintCallable)
    void BPF_ShowTutorialHUD();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCurrentTutorialHUDState(ETutorialHUDState _newState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SelectTutoAtIndex(int32 _iTutoIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_HideTutorialHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> BPF_GetUnlockedTutorialsRowName() const;
    
    UFUNCTION(BlueprintCallable)
    FName BPF_GetTutoRowNameAtIndex(int32 _iTutoIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, FTutorialUnlockStruct> BPF_GetTutorialUnlockStateMap() const;
    
    UFUNCTION(BlueprintCallable)
    ETutorialUnlockState BPF_GetTutorialUnlockStateAtIndex(int32 _TutoIndex);
    
    UFUNCTION(BlueprintCallable)
    ETutorialUnlockState BPF_GetTutorialUnlockState(FName _tutoRowName);
    
    UFUNCTION(BlueprintCallable)
    ETutorialHUDState BPF_GetTutorialHUDState();
    
    UFUNCTION(BlueprintCallable)
    FTutorialDataRow BPF_GetTutorialDataRowFromDB(FName _rowName);
    
    UFUNCTION(BlueprintCallable)
    FName BPF_GetSelectedTutoRowName();
    
    UFUNCTION(BlueprintCallable)
    FTutorialDataRow BPF_GetSelectedTutorialDataRowFromDB();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUnlockedTutorialListUpdated(bool bOnlyUpdateUnlockState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTutorialHUDStateChanged(ETutorialHUDState _newState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTriggeredTuto(FName _tutoRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSelectedTutoIndexChanged(int32 _newSelectedTutoIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnInputControllerTypeChanged();
    
};

