/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSData, NSString;

@interface FTRelayInitateMessage : FTMessage  {
    NSData *_selfPushToken;
    NSNumber *_selfNatType;
    NSNumber *_selfNATIP;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_peerNatType;
    NSNumber *_peerNATIP;
    NSNumber *_relayType;
    NSData *_relayConnectionId;
    NSData *_relayTransactionIdAlloc;
    NSData *_relayTokenAllocReq;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSNumber * peerRelayPort;
@property(copy) NSData * peerRelayIP;
@property(copy) NSNumber * selfRelayPort;
@property(copy) NSData * selfRelayIP;
@property(copy) NSData * relayTokenAllocReq;
@property(copy) NSData * relayTransactionIdAlloc;
@property(copy) NSData * relayConnectionId;
@property(copy) NSNumber * relayType;
@property(copy) NSNumber * peerNATIP;
@property(copy) NSNumber * peerNatType;
@property(copy) NSData * peerPushToken;
@property(copy) NSString * peerID;
@property(copy) NSNumber * selfNATIP;
@property(copy) NSNumber * selfNatType;
@property(copy) NSData * selfPushToken;


- (id)peerID;
- (id)bagKey;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (void)setSelfPushToken:(id)arg1;
- (id)selfNatType;
- (id)peerNatType;
- (void)setPeerNatType:(id)arg1;
- (void)setPeerPushToken:(id)arg1;
- (id)selfNATIP;
- (void)setSelfNatType:(id)arg1;
- (id)selfRelayIP;
- (id)peerRelayIP;
- (id)peerRelayPort;
- (void)setPeerRelayPort:(id)arg1;
- (void)setPeerRelayIP:(id)arg1;
- (id)selfRelayPort;
- (void)setSelfRelayPort:(id)arg1;
- (void)setSelfRelayIP:(id)arg1;
- (id)relayTokenAllocReq;
- (void)setRelayTokenAllocReq:(id)arg1;
- (id)relayTransactionIdAlloc;
- (void)setRelayTransactionIdAlloc:(id)arg1;
- (id)relayConnectionId;
- (void)setRelayConnectionId:(id)arg1;
- (id)relayType;
- (void)setRelayType:(id)arg1;
- (id)peerNATIP;
- (void)setPeerNATIP:(id)arg1;
- (id)peerPushToken;
- (void)setPeerID:(id)arg1;
- (void)setSelfNATIP:(id)arg1;
- (id)selfPushToken;
- (id)requiredKeys;
- (id)messageBody;

@end