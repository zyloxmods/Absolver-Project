#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "TargetableWidgetUpdaterComponent.generated.h"

class AActor;
class UTargetableWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UTargetableWidgetUpdaterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTargetableWidget> m_TargetWidgetToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDisplayDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTargetableWidget*> m_WidgetPool;
    
public:
    UTargetableWidgetUpdaterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnRegisterTargetActor(AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTargetActor(AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    UTargetableWidget* BPF_GetAssociatedWidget(AActor* _actor);
    
};

