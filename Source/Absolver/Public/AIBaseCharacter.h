#pragma once
#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "AIBaseCharacter.generated.h"

class AAISpawner;
class UAIComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AAIBaseCharacter : public ABaseCharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIComponent* m_AIComponent;
    
public:
    AAIBaseCharacter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void Spawned(AAISpawner* _spawner);
    
};

