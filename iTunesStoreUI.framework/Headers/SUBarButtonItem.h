/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class UINavigationItem, UIView;

@interface SUBarButtonItem : XXUnknownSuperclass {
	UIView *_accessoryView;	// 80 = 0x50
	UIEdgeInsets _accessoryViewInsets;	// 84 = 0x54
	UINavigationItem *_lastNavigationItem;	// 100 = 0x64
}
@property(assign, nonatomic, getter=isLoading) BOOL loading;	// G=0x9c3ed; S=0x9c525; 
@property(assign, nonatomic) UIEdgeInsets accessoryViewInsets;	// G=0x9c86d; S=0x9c4b1; @synthesize=_accessoryViewInsets
@property(retain, nonatomic) UIView *accessoryView;	// G=0x9c85d; S=0x9c435; @synthesize=_accessoryView
+ (Class)classForNavigationButton;	// 0x9c5e9
// declared property getter: - (UIEdgeInsets)accessoryViewInsets;	// 0x9c86d
// declared property getter: - (id)accessoryView;	// 0x9c85d
- (void)_updateViewForAccessoryChange;	// 0x9c801
- (id)_navigationButton;	// 0x9c75d
- (id)createViewForNavigationItem:(id)navigationItem;	// 0x9c65d
- (void)configureFromScriptButton:(id)scriptButton;	// 0x9c605
// declared property setter: - (void)setLoading:(BOOL)loading;	// 0x9c525
// declared property setter: - (void)setAccessoryViewInsets:(UIEdgeInsets)insets;	// 0x9c4b1
// declared property setter: - (void)setAccessoryView:(id)view;	// 0x9c435
// declared property getter: - (BOOL)isLoading;	// 0x9c3ed
- (void)dealloc;	// 0x9c38d
@end