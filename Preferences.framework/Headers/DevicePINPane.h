/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/UIKeyInput.h>
#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>

@class UIView, UIKeyboard, UITransitionView;
@protocol PINEntryView;

@interface DevicePINPane : PSEditingPane <UIKeyInput> {
	UITransitionView *_transitionView;	// 80 = 0x50
	BOOL _transitioning;	// 84 = 0x54
	UIView<PINEntryView> *_pinView;	// 88 = 0x58
	CGRect _pinViewFrame;	// 92 = 0x5c
	UIKeyboard *_keypad;	// 108 = 0x6c
	CGRect _keypadFrame;	// 112 = 0x70
	BOOL _keypadActive;	// 128 = 0x80
	int _autocapitalizationType;	// 132 = 0x84
	int _autocorrectionType;	// 136 = 0x88
	int _keyboardType;	// 140 = 0x8c
	int _keyboardAppearance;	// 144 = 0x90
	BOOL _playSound;	// 148 = 0x94
	BOOL _isBlocked;	// 149 = 0x95
	BOOL _simplePIN;	// 150 = 0x96
}
@property(assign, nonatomic) int autocapitalizationType;	// G=0x1ca91; S=0x1caa1; @synthesize=_autocapitalizationType
@property(assign, nonatomic) int autocorrectionType;	// G=0x1ca71; S=0x1ca81; @synthesize=_autocorrectionType
@property(assign, nonatomic) int keyboardType;	// G=0x1ca51; S=0x1ca61; @synthesize=_keyboardType
@property(assign, nonatomic) int keyboardAppearance;	// G=0x1ca31; S=0x1ca41; @synthesize=_keyboardAppearance
@property(assign, nonatomic) int spellCheckingType;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// G=0x1ca2d; 
@property(retain) id text;	// G=0x1d0f9; S=0x1d119; converted property
@property(readonly, assign) BOOL simplePIN;	// G=0x1ca05; converted property
- (id)specifierLabel;	// 0x1cab1
- (void)_setPlaysKeyboardClicks:(BOOL)clicks;	// 0x1d231
- (id)initWithFrame:(CGRect)frame;	// 0x1ddc5
- (void)dealloc;	// 0x1d265
- (void)activateKeypadView;	// 0x1cad1
- (void)deactivateKeypadView;	// 0x1cbc9
- (void)showFailedAttempts:(int)attempts;	// 0x1cc29
- (void)hideFailedAttempts;	// 0x1cc4d
- (void)setSimplePIN:(BOOL)pin requiresKeyboard:(BOOL)keyboard;	// 0x1cc6d
// converted property getter: - (BOOL)simplePIN;	// 0x1ca05
- (BOOL)requiresKeyboard;	// 0x1ca15
- (void)_setKeypadState:(BOOL)state animated:(BOOL)animated;	// 0x1dae1
- (void)dismissKeypad;	// 0x1ce19
- (BOOL)canBecomeFirstResponder;	// 0x1ce71
- (BOOL)becomeFirstResponder;	// 0x1da5d
- (BOOL)resignFirstResponder;	// 0x1d9f9
- (void)showError:(id)error error:(id)error2 isBlocked:(BOOL)blocked animate:(BOOL)animate;	// 0x1cec5
- (void)setPINPolicyString:(id)string visible:(BOOL)visible;	// 0x1cfcd
- (void)okButtonPressed;	// 0x1d019
- (void)hideError;	// 0x1d039
- (void)setTitle:(id)title;	// 0x1d059
- (void)slideToNewPasscodeField:(BOOL)newPasscodeField withKeyboard:(BOOL)keyboard;	// 0x1d669
- (void)transitionViewDidComplete:(id)transitionView;	// 0x1d5f1
- (id)password;	// 0x1d0b1
- (void)clearPassword;	// 0x1d0d1
// converted property getter: - (id)text;	// 0x1d0f9
// converted property setter: - (void)setText:(id)text;	// 0x1d119
- (BOOL)hasText;	// 0x1d13d
- (void)insertText:(id)text;	// 0x1d469
- (void)deleteBackward;	// 0x1d1cd
// declared property getter: - (BOOL)isSecureTextEntry;	// 0x1ca2d
- (void)pinView:(id)view pinEntered:(id)entered;	// 0x1d1ed
- (void)layoutSubviews;	// 0x1d2b9
// declared property getter: - (int)keyboardAppearance;	// 0x1ca31
// declared property setter: - (void)setKeyboardAppearance:(int)appearance;	// 0x1ca41
// declared property getter: - (int)keyboardType;	// 0x1ca51
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x1ca61
// declared property getter: - (int)autocorrectionType;	// 0x1ca71
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x1ca81
// declared property getter: - (int)autocapitalizationType;	// 0x1ca91
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x1caa1
@end