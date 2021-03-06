/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/XXUnknownSuperclass.h>

@class NSString, NSDictionary;

@interface FTDeviceSupport : XXUnknownSuperclass {
	NSString *_lastDeviceID;	// 4 = 0x4
	NSString *_model;	// 8 = 0x8
	NSString *_productName;	// 12 = 0xc
	NSString *_productVersion;	// 16 = 0x10
	NSString *_buildVersion;	// 20 = 0x14
	BOOL _blockPost;	// 24 = 0x18
	BOOL _supportsiMessage;	// 25 = 0x19
	BOOL _supportsSMS;	// 26 = 0x1a
	BOOL _supportsFT;	// 27 = 0x1b
	BOOL _supportsWiFi;	// 28 = 0x1c
	BOOL _supportsWLAN;	// 29 = 0x1d
	BOOL _supportsNonWiFiFaceTime;	// 30 = 0x1e
	BOOL _supportsCellularData;	// 31 = 0x1f
	BOOL _shouldUseSIMState;	// 32 = 0x20
	BOOL _commCenterDead;	// 33 = 0x21
	BOOL _simBecameNotReady;	// 34 = 0x22
	int _carrierBundleSupported;	// 36 = 0x24
	BOOL _faceTimeBlocked;	// 40 = 0x28
	BOOL _iMessageBlocked;	// 41 = 0x29
	int _performanceClass;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) int performanceClass;	// G=0x19a61; 
@property(readonly, assign, nonatomic) NSString *telephoneNumber;	// G=0x195a5; 
@property(readonly, assign, nonatomic) NSString *productBuildVersion;	// G=0x198f5; 
@property(readonly, assign, nonatomic) NSString *productVersion;	// G=0x198cd; 
@property(readonly, assign, nonatomic) NSString *productName;	// G=0x198a5; 
@property(readonly, assign, nonatomic) NSString *userAgentString;	// G=0x19811; 
@property(readonly, assign, nonatomic) NSString *model;	// G=0x18369; 
@property(readonly, assign, nonatomic) NSString *deviceTypeIDPrefix;	// G=0x185a9; 
@property(readonly, assign, nonatomic) NSString *deviceIDPrefix;	// G=0x1859d; 
@property(readonly, assign, nonatomic) NSString *deviceID;	// G=0x188d5; 
@property(readonly, assign, nonatomic) NSDictionary *CTNetworkInformation;	// G=0x18fe9; 
@property(readonly, assign, nonatomic) BOOL supportsNonWiFiFaceTime;	// G=0x19c75; @synthesize=_supportsNonWiFiFaceTime
@property(readonly, assign, nonatomic) BOOL supportsWLAN;	// G=0x19c55; @synthesize=_supportsWLAN
@property(readonly, assign, nonatomic) BOOL supportsCellularData;	// G=0x19c85; @synthesize=_supportsCellularData
@property(readonly, assign, nonatomic) BOOL supportsWiFi;	// G=0x19c65; @synthesize=_supportsWiFi
@property(readonly, assign, nonatomic) BOOL supportsSMS;	// G=0x19c95; @synthesize=_supportsSMS
@property(readonly, assign, nonatomic) BOOL supportsAppleIDIdentification;	// G=0x19589; 
@property(readonly, assign, nonatomic) BOOL supportsSMSIdentification;	// G=0x19389; 
@property(readonly, assign, nonatomic) BOOL isC2KEquipment;	// G=0x18601; 
@property(readonly, assign, nonatomic) BOOL wantsBreakBeforeMake;	// G=0x18849; 
@property(readonly, assign, nonatomic) BOOL commCenterDead;	// G=0x1812d; 
@property(readonly, assign, nonatomic) BOOL registrationSupported;	// G=0x182e9; 
@property(readonly, assign, nonatomic) BOOL conferencingAllowed;	// G=0x182d9; 
@property(readonly, assign, nonatomic) BOOL conferencingBlocked;	// G=0x1822d; 
@property(readonly, assign, nonatomic) BOOL conferencingEnabled;	// G=0x1823d; 
@property(readonly, assign, nonatomic) BOOL madridSupported;	// G=0x1818d; 
@property(readonly, assign, nonatomic) BOOL madridBlocked;	// G=0x1817d; 
@property(readonly, assign, nonatomic) BOOL madridAvailable;	// G=0x1813d; 
@property(readonly, assign, nonatomic) BOOL iMessageSupported;	// G=0x181cd; 
@property(readonly, assign, nonatomic) BOOL iMessageBlocked;	// G=0x181b5; 
@property(readonly, assign, nonatomic) BOOL iMessageAvailable;	// G=0x1819d; 
@property(readonly, assign, nonatomic) BOOL faceTimeSupported;	// G=0x18215; 
@property(readonly, assign, nonatomic) BOOL faceTimeBlocked;	// G=0x181fd; 
@property(readonly, assign, nonatomic) BOOL faceTimeAvailable;	// G=0x181e5; 
@property(readonly, assign, nonatomic) BOOL isTelephonyDevice;	// G=0x1958d; 
+ (id)sharedInstance;	// 0x16931
// declared property getter: - (BOOL)supportsSMS;	// 0x19c95
// declared property getter: - (BOOL)supportsCellularData;	// 0x19c85
// declared property getter: - (BOOL)supportsNonWiFiFaceTime;	// 0x19c75
// declared property getter: - (BOOL)supportsWiFi;	// 0x19c65
// declared property getter: - (BOOL)supportsWLAN;	// 0x19c55
// declared property getter: - (int)performanceClass;	// 0x19a61
- (void)_registerForLockdownNotifications;	// 0x199d5
- (void)_lockdownStateChanged:(id)changed;	// 0x1991d
// declared property getter: - (id)productBuildVersion;	// 0x198f5
// declared property getter: - (id)productVersion;	// 0x198cd
// declared property getter: - (id)productName;	// 0x198a5
// declared property getter: - (id)userAgentString;	// 0x19811
- (void)_generateProductInformation;	// 0x196c5
// declared property getter: - (id)telephoneNumber;	// 0x195a5
// declared property getter: - (BOOL)isTelephonyDevice;	// 0x1958d
// declared property getter: - (BOOL)supportsAppleIDIdentification;	// 0x19589
// declared property getter: - (BOOL)supportsSMSIdentification;	// 0x19389
// declared property getter: - (id)CTNetworkInformation;	// 0x18fe9
- (void)_handleRegistrationStateChanged:(id)changed;	// 0x18f5d
- (void)_handlePhoneNumberRegistrationStateChanged:(id)changed;	// 0x18ea1
- (void)_handleTechnologyChange:(id)change;	// 0x18e2d
- (void)_simStatusChanged:(id)changed;	// 0x18cd1
- (void)_handleSIMInserted:(id)inserted;	// 0x18c95
- (BOOL)_updateDeviceID;	// 0x18b61
// declared property getter: - (id)deviceID;	// 0x188d5
// declared property getter: - (BOOL)wantsBreakBeforeMake;	// 0x18849
// declared property getter: - (BOOL)isC2KEquipment;	// 0x18601
// declared property getter: - (id)deviceTypeIDPrefix;	// 0x185a9
// declared property getter: - (id)deviceIDPrefix;	// 0x1859d
// declared property getter: - (id)model;	// 0x18369
// declared property getter: - (BOOL)registrationSupported;	// 0x182e9
// declared property getter: - (BOOL)conferencingAllowed;	// 0x182d9
// declared property getter: - (BOOL)conferencingEnabled;	// 0x1823d
// declared property getter: - (BOOL)conferencingBlocked;	// 0x1822d
// declared property getter: - (BOOL)faceTimeSupported;	// 0x18215
// declared property getter: - (BOOL)faceTimeBlocked;	// 0x181fd
// declared property getter: - (BOOL)faceTimeAvailable;	// 0x181e5
// declared property getter: - (BOOL)iMessageSupported;	// 0x181cd
// declared property getter: - (BOOL)iMessageBlocked;	// 0x181b5
// declared property getter: - (BOOL)iMessageAvailable;	// 0x1819d
// declared property getter: - (BOOL)madridSupported;	// 0x1818d
// declared property getter: - (BOOL)madridBlocked;	// 0x1817d
// declared property getter: - (BOOL)madridAvailable;	// 0x1813d
// declared property getter: - (BOOL)commCenterDead;	// 0x1812d
- (void)_unregisterForCoreTelephonyNotifications;	// 0x17f1d
- (void)_registerForCoreTelephonyNotifications;	// 0x17979
- (void)_carrierChanged;	// 0x17911
- (void)_operatorChanged;	// 0x178a9
- (void)_commCenterAlive;	// 0x17829
- (void)_unregisterForCommCenterReadyNotifications;	// 0x177a5
- (void)_registerForCommCenterReadyNotifications;	// 0x176bd
- (void)_updateCapabilities;	// 0x171a9
- (void)carrierSettingsChanged:(id)changed;	// 0x17145
- (void)_unregisterForCarrierNotifications;	// 0x170dd
- (void)_registerForCarrierNotifications;	// 0x16f71
- (void)_unregisterForCapabilityNotifications;	// 0x16ee5
- (void)_registerForCapabilityNotifications;	// 0x16de5
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x16dd5
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x16dc5
- (void)_updateManagedConfigurationSettings;	// 0x16c4d
- (void)_unregisterForManagedConfigurationNotifications;	// 0x16c09
- (void)_registerForManagedConfigurationNotifications;	// 0x16bc5
- (void)dealloc;	// 0x16acd
- (id)init;	// 0x169e5
- (BOOL)retainWeakReference;	// 0x169e1
- (BOOL)allowsWeakReference;	// 0x169dd
@end
