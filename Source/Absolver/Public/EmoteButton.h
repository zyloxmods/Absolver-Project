#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "EmoteDataRow.h"
#include "EmoteButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UEmoteButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEmoteDataRow m_EmoteDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEmoteEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEmoteUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCurrentSlotEmote;
    
    UEmoteButton();

    UFUNCTION(BlueprintCallable)
    void BPF_PlayEmoteAnim();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsPlayingEmoteAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEmoteEquipped() const;
    
};

