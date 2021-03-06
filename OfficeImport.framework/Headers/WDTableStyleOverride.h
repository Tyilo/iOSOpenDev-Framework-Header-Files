/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class WDDocument, WDTableCellProperties, WDCharacterProperties, WDTableRowProperties, WDStyle, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDTableStyleOverride : XXUnknownSuperclass <NSCopying> {
@private
	WDDocument *mDocument;	// 4 = 0x4
	WDStyle *mStyle;	// 8 = 0x8
	int mPart;	// 12 = 0xc
	WDParagraphProperties *mParagraphProperties;	// 16 = 0x10
	WDCharacterProperties *mCharacterProperties;	// 20 = 0x14
	WDTableRowProperties *mTableRowProperties;	// 24 = 0x18
	WDTableCellProperties *mTableCellStyleProperties;	// 28 = 0x1c
	unsigned mParagraphPropertiesOverridden : 1;	// 32 = 0x20
	unsigned mCharacterPropertiesOverridden : 1;	// 32 = 0x20
	unsigned mTableRowPropertiesOverridden : 1;	// 32 = 0x20
	unsigned mTableCellStylePropertiesOverridden : 1;	// 32 = 0x20
}
@property(retain) id style;	// G=0x29b911; S=0x15043d; converted property
@property(assign) int part;	// G=0x29b921; S=0x14fd05; converted property
@property(assign, getter=isParagraphPropertiesOverridden) BOOL paragraphPropertiesOverridden;	// G=0x29b941; S=0x29b95d; converted property
@property(assign, getter=isCharacterPropertiesOverridden) BOOL characterPropertiesOverridden;	// G=0x29b989; S=0x29b9a5; converted property
@property(assign, getter=isTableRowPropertiesOverridden) BOOL tableRowPropertiesOverridden;	// G=0x29b9f1; S=0x29ba0d; converted property
@property(assign, getter=isTableCellStylePropertiesOverridden) BOOL tableCellStylePropertiesOverridden;	// G=0x29ba3d; S=0x29ba59; converted property
- (id)initWithDocument:(id)document;	// 0x14fcc5
- (void)dealloc;	// 0x15159d
// converted property getter: - (id)style;	// 0x29b911
// converted property setter: - (void)setStyle:(id)style;	// 0x15043d
// converted property getter: - (int)part;	// 0x29b921
// converted property setter: - (void)setPart:(int)part;	// 0x14fd05
- (id)paragraphProperties;	// 0x29b931
- (id)mutableParagraphProperties;	// 0x29bc05
// converted property getter: - (BOOL)isParagraphPropertiesOverridden;	// 0x29b941
// converted property setter: - (void)setParagraphPropertiesOverridden:(BOOL)overridden;	// 0x29b95d
- (id)characterProperties;	// 0x29b979
- (id)mutableCharacterProperties;	// 0x200421
// converted property getter: - (BOOL)isCharacterPropertiesOverridden;	// 0x29b989
// converted property setter: - (void)setCharacterPropertiesOverridden:(BOOL)overridden;	// 0x29b9a5
- (id)tableProperties;	// 0x29bbe5
- (BOOL)isTablePropertiesOverridden;	// 0x29b9c5
- (id)tableRowProperties;	// 0x29b9e1
- (id)mutableTableRowProperties;	// 0x200541
// converted property getter: - (BOOL)isTableRowPropertiesOverridden;	// 0x29b9f1
// converted property setter: - (void)setTableRowPropertiesOverridden:(BOOL)overridden;	// 0x29ba0d
- (id)tableCellStyleProperties;	// 0x29ba2d
- (id)mutableTableCellStyleProperties;	// 0x2005ad
// converted property getter: - (BOOL)isTableCellStylePropertiesOverridden;	// 0x29ba3d
// converted property setter: - (void)setTableCellStylePropertiesOverridden:(BOOL)overridden;	// 0x29ba59
- (id)copyWithZone:(NSZone *)zone;	// 0x29ba79
@end
