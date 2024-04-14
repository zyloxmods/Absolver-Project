#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Buffer.h"
#include "EOrderType.h"
#include "OrderTransformData.h"
#include "OrderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UOrderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UOrderComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateOrder(uint8 _uiOrderID, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlayOrder(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelOrderByType(EOrderType _eOrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelOrderByIDList(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bFromServer);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelOrderByID(uint8 _uiOrderID, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, bool _bFromServer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAckOrderID(uint8 _uiOrderID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MultiCastUpdateOrder(uint8 _uiOrderID, EOrderType _eOrderType, FBuffer _ReplicatedBuffer, FUniqueNetIdRepl _callerPlayerId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastPlayOrder(EOrderType _eOrderType, uint8 _uiForcedID, FBuffer _ReplicatedBuffer, int64 _iTimeLaunch, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster, uint8 _uiOrderIDToInsertBefore);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MultiCastFirstOrderTransformData(uint8 _uiOrderID, FOrderTransformData _orderTransformData);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastCancelOrderByType(EOrderType _eOrderType, bool _bCancelFirstOnly, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, const TArray<uint8>& _orderIdExceptions);
    
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastCancelOrderByIDList(const TArray<uint8>& _OrderIDList, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId);
    
    UFUNCTION(NetMulticast, Reliable)
    void MultiCastCancelOrderByID(uint8 _uiOrderID, int64 _iTimeCancel, FUniqueNetIdRepl _callerPlayerId, bool _bRemoteRunOnMaster);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayOrderRejected(uint8 _uiOrderID);
    
};

