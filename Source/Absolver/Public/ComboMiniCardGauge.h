#pragma once
#include "CoreMinimal.h"
#include "ComboMiniCard.h"
#include "ComboMiniCardGauge.generated.h"

class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UComboMiniCardGauge : public UComboMiniCard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProgressBar* m_MainProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProgressBar* m_ContourProgressBar;
    
    UComboMiniCardGauge();

    UFUNCTION(BlueprintCallable)
    void BPF_ResetFilling();
    
};

