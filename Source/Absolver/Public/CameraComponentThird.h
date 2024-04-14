#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "BaseComponent.h"
#include "CameraComponentThird.generated.h"

class ABaseCharacter;
class UBlackboardComponent;
class UCameraDB;
class UCameraLagStruct;
class UMaterialParameterCollection;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UCameraComponentThird : public UCameraComponent, public IBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraLagStruct* m_sActualLagParameters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraDB* m_CameraDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMouseYawScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMousePitchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_MaterialParameterCollectionCameraDither;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CameraDistanceMPCParameterName;
    
public:
    UCameraComponentThird(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseCharacter* BPF_GetPlayerWatched() const;
    
    UFUNCTION(BlueprintCallable)
    UBlackboardComponent* BPF_GetBlackBoardComponent();
    

    // Fix for true pure virtual functions not being implemented
};

