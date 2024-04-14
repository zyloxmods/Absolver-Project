#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "MTRawMesh.h"
#include "EditableStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MESHTOOLRUNTIME_API UEditableStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMTRawMesh> RawMeshes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshSectionInfoMap SectionInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImportVersion;
    
    UEditableStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

