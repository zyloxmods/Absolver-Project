#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawningVolume.generated.h"

class UShapeComponent;

UCLASS(Blueprintable)
class ABSOLVER_API ASpawningVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* m_ShapeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowSpawnIfCharacterOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSpawnIfNothingUnder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSecurityMargin;
    
public:
    ASpawningVolume(const FObjectInitializer& ObjectInitializer);

};

