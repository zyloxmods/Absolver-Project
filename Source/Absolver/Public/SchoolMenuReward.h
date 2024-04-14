#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "ECharacterProgressionRewardTypes.h"
#include "School.h"
#include "SchoolMenuReward.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API USchoolMenuReward : public UButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterProgressionRewardTypes m_eReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchool m_School;
    
    USchoolMenuReward();

    UFUNCTION(BlueprintCallable)
    void BPF_SetSchool(const FSchool& _school);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetReward(ECharacterProgressionRewardTypes _eReward);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetLevel(int32 _ilevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetIcon();
    
};

