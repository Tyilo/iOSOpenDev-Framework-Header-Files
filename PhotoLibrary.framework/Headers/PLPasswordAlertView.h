/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/UIAlertViewDelegate.h>

@class UITextField, NSString;

@interface PLPasswordAlertView : XXUnknownSuperclass <UIAlertViewDelegate> {
@private
	id _completionHandler;	// 156 = 0x9c
	int _style;	// 160 = 0xa0
	UITextField *_accountTextField;	// 164 = 0xa4
	UITextField *_passwordTextField;	// 168 = 0xa8
}
@property(copy, nonatomic) NSString *accountTextFieldPlaceholder;	// G=0xc8275; S=0xc8295; 
@property(readonly, assign, nonatomic) int style;	// G=0xc8395; @synthesize=_style
// declared property getter: - (int)style;	// 0xc8395
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0xc82b5
// declared property setter: - (void)setAccountTextFieldPlaceholder:(id)placeholder;	// 0xc8295
// declared property getter: - (id)accountTextFieldPlaceholder;	// 0xc8275
- (void)dealloc;	// 0xc8201
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate cancelButtonTitle:(id)title4 otherButtonTitles:(id)titles;	// 0xc81b1
- (id)initWithStyle:(int)style title:(id)title message:(id)message completionHandler:(id)handler;	// 0xc800d
- (id)initWithTitle:(id)title message:(id)message completionHandler:(id)handler;	// 0xc7fe5
@end
