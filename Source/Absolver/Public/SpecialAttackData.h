#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EAvoidType.h"
#include "EParrySide.h"
#include "SpecialAttackData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ABSOLVER_API USpecialAttackData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_AvoidPictos[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_ParryPictos[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_GuardBreakPicto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_InterruptPicto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_AbsorbPicto;
    
    USpecialAttackData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetParryPicto(EParrySide _eParryType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetAvoidPicto(EAvoidType _eAvoidType);
    
};

