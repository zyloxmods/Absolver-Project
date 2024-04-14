#pragma once
#include "CoreMinimal.h"
#include "EGameModeTypes.h"
#include "SCUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoopGameModeWidget.generated.h"

class UCoopGameModeMemberWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UCoopGameModeWidget : public USCUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCoopGameModeMemberWidget> m_MemberWidgetClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCoopGameModeMemberWidget*> m_CoopMemberWidget;
    
public:
    UCoopGameModeWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_SetGameMode(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_FillCoopMembers();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearCoopMember();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddMemberWidget(UCoopGameModeMemberWidget* _coopMemberWidget);
    
};

