#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ArchetypeDescription.h"
#include "ECharacterSex.h"
#include "Templates/SubclassOf.h"
#include "AIComponent.generated.h"

class AAISpawner;
class AFightingCharacter;
class UBehaviorTree;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UAIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnedDelegate, AAISpawner*, Spawner);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnedDelegate OnSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Spawner, meta=(AllowPrivateAccess=true))
    AAISpawner* m_Spawner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Archetype, meta=(AllowPrivateAccess=true))
    FArchetypeDescription m_ArchetypeDescription;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFightingCharacter> m_FightingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* m_Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiMatchMakingZone;
    
public:
    UAIComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetArchetypeData(const FArchetypeDescription& _data, ECharacterSex _eSex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Spawner();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Archetype();
    
    UFUNCTION(BlueprintCallable)
    void EquipmentLoadedCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetArchetypeResource();
    
};

