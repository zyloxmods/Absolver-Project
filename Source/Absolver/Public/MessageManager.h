#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MessageManager.generated.h"

class UMessengerComponent;

UCLASS(Blueprintable)
class ABSOLVER_API UMessageManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMessengerComponent* m_MessengerComponent;
    
public:
    UMessageManager();

};

