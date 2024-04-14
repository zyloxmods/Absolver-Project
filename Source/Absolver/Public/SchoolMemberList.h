#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SchoolMember.h"
#include "SchoolMemberList.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API USchoolMemberList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSchoolMember> m_Members;
    
    USchoolMemberList();

    UFUNCTION(BlueprintCallable)
    void BPF_ResetError();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Clear();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddMembers(const TArray<FSchoolMember> _members);
    
};

