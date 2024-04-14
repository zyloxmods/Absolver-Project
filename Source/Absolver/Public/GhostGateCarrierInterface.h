#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SubZoneShortcutStruct.h"
#include "GhostGateCarrierInterface.generated.h"

class UShapeComponent;
class UStaticMeshComponent;

UINTERFACE(Blueprintable)
class ABSOLVER_API UGhostGateCarrierInterface : public UInterface {
    GENERATED_BODY()
};

class ABSOLVER_API IGhostGateCarrierInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSubZoneShortcutStruct GetSubzoneShortcut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UStaticMeshComponent* GetStaticMeshComponentDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetColliderScale();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UShapeComponent* GetColliderRegularDoor();
    
};

