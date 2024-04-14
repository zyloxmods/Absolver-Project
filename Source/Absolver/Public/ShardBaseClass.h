#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShardBaseClass.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AShardBaseClass : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_TensionShardMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_FullMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_FullMatInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_WireMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_WireMatInstance;
    
public:
    AShardBaseClass(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetWireMatInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetFullMatInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShardFrozenStatusChanged(bool _bFrozen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShardFilledStatusChanged(bool _bFilled);
    
};

