/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/NSCopying.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSArray, NSMutableArray, NSDictionary;

@interface SUItemList : XXUnknownSuperclass <NSCopying> {
	NSMutableArray *_groups;	// 4 = 0x4
	NSDictionary *_hintText;	// 8 = 0x8
	BOOL _ignoresEmptySections;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSArray *sectionIndexTitles;	// G=0x81101; 
@property(readonly, assign, nonatomic) int numberOfSections;	// G=0x80f8d; 
@property(assign, nonatomic) BOOL ignoresEmptySections;	// G=0x819d9; S=0x819e9; @synthesize=_ignoresEmptySections
@property(readonly, assign, nonatomic) int numberOfItems;	// G=0x80ed1; 
// declared property setter: - (void)setIgnoresEmptySections:(BOOL)sections;	// 0x819e9
// declared property getter: - (BOOL)ignoresEmptySections;	// 0x819d9
- (void)_removeHiddenItemsFromArray:(id)array;	// 0x81961
- (id)_groupAtExternalIndex:(int)externalIndex;	// 0x81885
- (void)setHintText:(id)text;	// 0x81841
- (id)hintTextForKey:(id)key;	// 0x81815
- (void)setItemsFromPropertyList:(id)propertyList;	// 0x816c1
- (void)setItems:(id)items;	// 0x814b9
- (void)replaceItemAtIndexPath:(id)indexPath withItems:(id)items;	// 0x81481
- (void)removeItemAtIndexPath:(id)indexPath;	// 0x8138d
- (void)insertItems:(id)items atIndexPath:(id)indexPath;	// 0x81259
- (id)sectionItemForSectionAtIndex:(int)index;	// 0x811f1
// declared property getter: - (id)sectionIndexTitles;	// 0x81101
- (int)sectionIndexForIndexTitle:(id)indexTitle atIndex:(int)index;	// 0x81075
// declared property getter: - (int)numberOfSections;	// 0x80f8d
// declared property getter: - (int)numberOfItems;	// 0x80ed1
- (id)itemsForSectionAtIndex:(int)index;	// 0x80ea9
- (id)itemAtIndexPath:(id)indexPath;	// 0x80db5
- (id)indexPathOfItemWithIdentifier:(unsigned long long)identifier;	// 0x80c2d
- (id)indexPathOfItem:(id)item;	// 0x80a7d
- (void)enumerateItemsUsingBlock:(id)block;	// 0x80985
- (id)copyItems;	// 0x8089d
- (id)copyWithZone:(NSZone *)zone;	// 0x807f1
- (void)dealloc;	// 0x80791
@end
