/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Account.h>


@interface DeliveryAccount : Account {
}
@property(assign) BOOL shouldUseAuthentication;	// G=0x3855d; S=0x385d9; converted property
@property(assign) unsigned long long maximumMessageBytes;	// G=0x38621; S=0x38655; converted property
+ (id)basicAccountProperties;	// 0x20059
+ (id)supportedDataclasses;	// 0x38ea9
+ (void)_postDeliveryAccountsHaveChanged;	// 0x38dc1
+ (void)reloadDeliveryAccounts;	// 0x38d51
+ (id)deliveryAccounts;	// 0x1ff2d
+ (void)setDeliveryAccounts:(id)accounts;	// 0x38cb5
+ (void)addDeliveryAccount:(id)account;	// 0x38c51
+ (void)removeDeliveryAccount:(id)account;	// 0x38b0d
+ (void)saveAccountInfoToDefaults;	// 0x38a9d
+ (id)accountWithUniqueId:(id)uniqueId;	// 0x389e5
+ (id)accountWithIdentifier:(id)identifier;	// 0x1fe91
+ (id)existingAccountWithHostname:(id)hostname username:(id)username;	// 0x3896d
+ (id)accountWithHostname:(id)hostname username:(id)username;	// 0x38949
+ (id)accountWithHostname:(id)hostname username:(id)username lookForExistingAccounts:(BOOL)existingAccounts;	// 0x38885
+ (id)carrierDeliveryAccount;	// 0x386d9
+ (id)newDefaultInstance;	// 0x3842d
- (Class)deliveryClass;	// 0x38431
- (id)newDeliveryWithMessage:(id)message;	// 0x38445
- (id)newDeliveryWithHeaders:(id)headers mixedContent:(id)content textPartsAreHTML:(BOOL)html;	// 0x38499
- (id)newDeliveryWithHeaders:(id)headers HTML:(id)html plainTextAlternative:(id)alternative other:(id)other;	// 0x384f9
- (id)identifier;	// 0x201d5
// converted property getter: - (BOOL)shouldUseAuthentication;	// 0x3855d
// converted property setter: - (void)setShouldUseAuthentication:(BOOL)useAuthentication;	// 0x385d9
- (void)setUsername:(id)username;	// 0x38fe1
// converted property getter: - (unsigned long long)maximumMessageBytes;	// 0x38621
// converted property setter: - (void)setMaximumMessageBytes:(unsigned long long)bytes;	// 0x38655
- (id)mailAccountIfAvailable;	// 0x38435
- (BOOL)hasNoReferences;	// 0x38f25
- (id)displayHostname;	// 0x38f15
- (BOOL)canBeFallbackAccount;	// 0x38439
- (BOOL)hasEnoughInformationForEasySetup;	// 0x38ec9
- (BOOL)supportsSoftBankCodePoints;	// 0x2024d
- (BOOL)supportsOutboxCopy;	// 0x3843d
- (BOOL)shouldUseSaveSentForAccount:(id)account;	// 0x38441
@end
