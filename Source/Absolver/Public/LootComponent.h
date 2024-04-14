#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LootBaseItemStruct.h"
#include "Templates/SubclassOf.h"
#include "LootComponent.generated.h"

class APickUpActor;
class UQuestItemData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API ULootComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootBaseItemStruct> m_Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestItemData*> m_QuestItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_AttacksToLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APickUpActor> m_PickUpClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowPickupMenu;
    
public:
    ULootComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    APickUpActor* BPF_SpawnLoot();
    
};

