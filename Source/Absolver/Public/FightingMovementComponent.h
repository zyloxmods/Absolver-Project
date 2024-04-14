#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BaseComponent.h"
#include "EFallLevel.h"
#include "EMoveStatus.h"
#include "ESpeedState.h"
#include "FightingMovementComponent.generated.h"

class UBaseMovementDB;
class UChangeQuadrantDB;
class UDodgeDB;
class UEffectData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UFightingMovementComponent : public UCharacterMovementComponent, public IBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDodgeDB* m_DodgeDB;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveStatusChange, meta=(AllowPrivateAccess=true))
    EMoveStatus m_eMoveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseMovementDB* m_BaseMovementDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChangeQuadrantDB* m_ChangeQuadrantDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFlyModeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFlyModeRushSpeed;
    
public:
    UFightingMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetMoveStatus(EMoveStatus _eMoveStatus);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPopDesyncFromServer(uint8 _uiResyncID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MoveStatusChange();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData);
    
    UFUNCTION(BlueprintCallable)
    FVector GetRealVelocity();
    
    UFUNCTION(BlueprintCallable)
    float GetRealSpeed();
    
    UFUNCTION(BlueprintCallable)
    FVector GetRealHorizontalVelocity();
    
    UFUNCTION(BlueprintCallable)
    float GetRealHorizontalSpeed();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMoveStatus(EMoveStatus _eMoveStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsRushing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFreeMoveOverallAnimSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFreeMoveMinSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFreeMoveMaxSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFreeMoveAnimSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFallLevel BPF_GetFallLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpeedState BPF_GetCurrentSpeedState() const;
    

    // Fix for true pure virtual functions not being implemented
};

