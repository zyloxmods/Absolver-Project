#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/StaticMeshActor.h"
#include "Killzone.generated.h"

class AActor;
class AFightingCharacter;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AKillzone : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_boxComponent;
    
public:
    AKillzone(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnBoxTouched(UPrimitiveComponent* _overlappedComp, AActor* _Other, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPF_IsKillzoneActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnBoxTouched(AFightingCharacter* _char, const FVector& _vImpactpoint);
    
};

