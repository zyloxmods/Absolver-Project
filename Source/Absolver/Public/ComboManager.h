#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ComboManager.generated.h"

class UAttackPreview;

UCLASS(Blueprintable)
class ABSOLVER_API UComboManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_LoadedAttackdata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_LoadedRushAttackdata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_LoadedDrunkenAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_LoadedSpecialAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAttackPreview*> m_LoadedPreviewAttacks;
    
public:
    UComboManager();

};

