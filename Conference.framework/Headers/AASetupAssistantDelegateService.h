/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */



@protocol AASetupAssistantDelegateService
- (id)delegateServiceIdentifier;
- (id)accountSetupRequestParameters;
- (void)completeSetupWithResponseParameters:(id)responseParameters handler:(id)handler;
@optional
- (void)setupOperationFailed;
- (BOOL)canAutoSetupMailAccount:(id)account;
- (BOOL)needSetupForMailAccount:(id)mailAccount;
- (void)setupMailAccount:(id)account password:(id)password handler:(id)handler;
- (void)verifyAccountWithAppleID:(id)appleID handler:(id)handler;
- (void)setCloudServicesEnabled:(BOOL)enabled handler:(id)handler;
- (void)setDeviceLocatorEnabled:(BOOL)enabled;
- (void)setBackupEnabled:(BOOL)enabled handler:(id)handler;
- (void)completeEnablingCloudServicesWithHandler:(id)handler;
@end

