#pragma once
#include "CoreMinimal.h"
#include "SocialLoadFriendsErrorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSocialLoadFriendsErrorDelegate, const FText&, _error);

