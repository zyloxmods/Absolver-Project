#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EScalabilityTypes.h"
#include "MenuWidget.h"
#include "GraphOptionsMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UGraphOptionsMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FScalabilityChanged, EScalabilityTypes, Scalability, int32, NewValue);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentResIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> m_ResList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalabilityChanged OnScalabilityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FText> m_WindowModes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_ScreenPercentageRange;
    
public:
    UGraphOptionsMenu();

    UFUNCTION(BlueprintCallable)
    void BPF_ScalabilitySettingsChanged(EScalabilityTypes _eSetting, int32 _iValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResolutionChanged(int32 _iIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCVarForSlider(const FString& _var);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentDisplayMode();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CVarChangedFromSlider(const FString& _var, float _value);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AutoDetectSettings();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AcceptSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_IsVSyncChecked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 BPE_GetSelectedDisplayMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_CurrentVsyncValue(bool _bValue);
    
};

