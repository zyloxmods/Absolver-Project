#include "SchoolMemberButton.h"

USchoolMemberButton::USchoolMemberButton() {
}

void USchoolMemberButton::BPF_SetErrorButton() {
}

bool USchoolMemberButton::BPF_IsLoadingButton() {
    return false;
}

bool USchoolMemberButton::BPF_IsErrorButton() {
    return false;
}

FSchoolMember USchoolMemberButton::BPF_GetSchoolMember() {
    return FSchoolMember{};
}


