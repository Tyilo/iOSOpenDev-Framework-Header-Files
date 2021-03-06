/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>

@class UILabel, UISwitch, NSString;

@interface PLCameraSettingsGroupView : XXUnknownSuperclass {
@private
	int type;	// 48 = 0x30
	NSString *title;	// 52 = 0x34
	BOOL shouldCenterTitle;	// 56 = 0x38
	UILabel *titleLabel;	// 60 = 0x3c
	UISwitch *accessorySwitch;	// 64 = 0x40
}
@property(retain, nonatomic) UISwitch *accessorySwitch;	// G=0xde18d; S=0xddca1; @synthesize
@property(retain, nonatomic) UILabel *titleLabel;	// G=0xde159; S=0xde169; @synthesize
@property(assign, nonatomic) BOOL shouldCenterTitle;	// G=0xde139; S=0xde149; @synthesize
@property(copy, nonatomic) NSString *title;	// G=0xde129; S=0xddc25; @synthesize
@property(assign, nonatomic) int type;	// G=0xde109; S=0xde119; @synthesize
// declared property getter: - (id)accessorySwitch;	// 0xde18d
// declared property setter: - (void)setTitleLabel:(id)label;	// 0xde169
// declared property getter: - (id)titleLabel;	// 0xde159
// declared property setter: - (void)setShouldCenterTitle:(BOOL)centerTitle;	// 0xde149
// declared property getter: - (BOOL)shouldCenterTitle;	// 0xde139
// declared property getter: - (id)title;	// 0xde129
// declared property setter: - (void)setType:(int)type;	// 0xde119
// declared property getter: - (int)type;	// 0xde109
- (void)drawRect:(CGRect)rect;	// 0xddd8d
// declared property setter: - (void)setAccessorySwitch:(id)aSwitch;	// 0xddca1
// declared property setter: - (void)setTitle:(id)title;	// 0xddc25
- (void)layoutSubviews;	// 0xdda41
- (void)dealloc;	// 0xdd9d5
- (id)initWithFrame:(CGRect)frame;	// 0xdd821
@end
