/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDSPContext : NSObject <NSCopying> {
    NSString * _cardholderName;
    NSData * _challengeResponse;
    NSData * _cryptogram;
    NSString * _phoneNumber;
    NSString * _primaryAppleAccountFirstName;
    NSString * _primaryAppleAccountLastName;
    NSString * _secureElementID;
}

@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic, copy) NSData *challengeResponse;
@property (nonatomic, copy) NSData *cryptogram;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *primaryAppleAccountFirstName;
@property (nonatomic, copy) NSString *primaryAppleAccountLastName;
@property (nonatomic, copy) NSString *secureElementID;

- (void).cxx_destruct;
- (id)cardholderName;
- (id)challengeResponse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cryptogram;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)phoneNumber;
- (id)primaryAppleAccountFirstName;
- (id)primaryAppleAccountLastName;
- (id)secureElementID;
- (void)setCardholderName:(id)arg1;
- (void)setChallengeResponse:(id)arg1;
- (void)setCryptogram:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPrimaryAppleAccount:(id)arg1;
- (void)setPrimaryAppleAccountFirstName:(id)arg1;
- (void)setPrimaryAppleAccountLastName:(id)arg1;
- (void)setSecureElementID:(id)arg1;

@end
