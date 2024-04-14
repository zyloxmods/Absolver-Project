#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "Intro1v1DataRow.h"
#include "IntroButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UIntroButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPreviewButtonPressed);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreviewButtonPressed OnPreviewButtonPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIntro1v1DataRow m_IntroDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIntroEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIntroUnlocked;
    
    UIntroButton();

    UFUNCTION(BlueprintCallable)
    void BPF_OnPreviewButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsIntroEquipped() const;
    
};

