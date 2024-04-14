#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCSessionManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class ABSOLVER_API USCSessionManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WelcomeScreenMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MainMenuMap;
    
public:
    USCSessionManager();

};

