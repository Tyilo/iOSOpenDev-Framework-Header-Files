/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem {
	CoreDAVItem *_prop;	// 24 = 0x18
	CoreDAVLeafItem *_descriptionItem;	// 28 = 0x1c
}
@property(retain) CoreDAVLeafItem *descriptionItem;	// G=0x279f1; S=0x27a05; @synthesize=_descriptionItem
@property(retain) CoreDAVItem *prop;	// G=0x279b9; S=0x279cd; @synthesize=_prop
// declared property setter: - (void)setDescriptionItem:(id)item;	// 0x27a05
// declared property getter: - (id)descriptionItem;	// 0x279f1
// declared property setter: - (void)setProp:(id)prop;	// 0x279cd
// declared property getter: - (id)prop;	// 0x279b9
- (id)copyParseRules;	// 0x27819
- (id)description;	// 0x27741
- (void)dealloc;	// 0x276e1
- (id)init;	// 0x276b5
@end
