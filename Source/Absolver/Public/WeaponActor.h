#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EWeaponSlot.h"
#include "GearDataRow.h"
#include "WeaponActor.generated.h"

class UShapeComponent;

UCLASS(Abstract, Blueprintable)
class ABSOLVER_API AWeaponActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* m_ShapeComponent;
    
public:
    AWeaponActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnOwnerDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponSlot BPF_GetWeaponSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetWeaponSetIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGearDataRow BPF_GetGearDataRow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetAttachmentSocketName() const;
    
};

