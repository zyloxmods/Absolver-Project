#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionTextStruct.h"
#include "InteractionObjectComponent.generated.h"

class APlayerController;
class UBaseItemData;
class UInteractionObjectComponent;
class UPrimitiveComponent;
class UProgressionDoorData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UInteractionObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUseObject, APlayerController*, PlayerController);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsableChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTextStructChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestroyComponent, UInteractionObjectComponent*, _component);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUseObject OnUseInteractionObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUseObject OnUseInteractionObjectFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUseObject OnBecomeCurrentInteractionObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnTextStructChanged OnTextChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnUsableChanged OnUsableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDestroyComponent OnDestroyComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNbKeysNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBaseItemData*> m_SpecialItemsNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProgressionDoorData* m_ProgressionDoorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionTextStruct m_InteractionTextStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseLockedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_LockedText;
    
public:
    UInteractionObjectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_SetMainDetectionPrimitive(UPrimitiveComponent* _component);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsUsable(bool _bCanUse);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInteractionTextStruct(const FInteractionTextStruct& _struct);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsUsingLockedText() const;
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsUsable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UProgressionDoorData* BPF_GetProgressionDoorData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetLockedText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInteractionTextStruct BPF_GetInteractionTextStruct() const;
    
};

