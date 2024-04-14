#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SchoolMember.h"
#include "SchoolMemberHelper.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API USchoolMemberHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USchoolMemberHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsInSchool(const FSchoolMember& _member);
    
};

