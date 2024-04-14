#include "OrderComponent.h"

UOrderComponent::UOrderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
}

void UOrderComponent::ServerUpdateOrder_Implementation(uint8 _uiOrderID, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId) {
}
bool UOrderComponent::ServerUpdateOrder_Validate(uint8 _uiOrderID, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId) {
    return true;
}

void UOrderComponent::ServerPlayOrder_Implementation(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore) {
}
bool UOrderComponent::ServerPlayOrder_Validate(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore) {
    return true;
}

void UOrderComponent::ServerCancelOrderByType_Implementation(EOrderType _eOrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer) {
}
bool UOrderComponent::ServerCancelOrderByType_Validate(EOrderType _eOrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer) {
    return true;
}

void UOrderComponent::ServerCancelOrderByIDList_Implementation(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer) {
}
bool UOrderComponent::ServerCancelOrderByIDList_Validate(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer) {
    return true;
}

void UOrderComponent::ServerCancelOrderByID_Implementation(uint8 _uiOrderID, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, bool _bFromServer) {
}
bool UOrderComponent::ServerCancelOrderByID_Validate(uint8 _uiOrderID, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, bool _bFromServer) {
    return true;
}

void UOrderComponent::ServerAckOrderID_Implementation(uint8 _uiOrderID) {
}
bool UOrderComponent::ServerAckOrderID_Validate(uint8 _uiOrderID) {
    return true;
}

void UOrderComponent::MultiCastUpdateOrder_Implementation(uint8 _uiOrderID, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId) {
}

void UOrderComponent::MultiCastPlayOrder_Implementation(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore) {
}

void UOrderComponent::MultiCastFirstOrderTransformData_Implementation(uint8 _uiOrderID, FOrderTransformData _orderTransformData) {
}

void UOrderComponent::MultiCastCancelOrderByType_Implementation(EOrderType _eOrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, const TArray<uint8>& _orderIdExceptions) {
}

void UOrderComponent::MultiCastCancelOrderByIDList_Implementation(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId) {
}

void UOrderComponent::MultiCastCancelOrderByID_Implementation(uint8 _uiOrderID, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster) {
}

void UOrderComponent::ClientPlayOrderRejected_Implementation(uint8 _uiOrderID) {
}


