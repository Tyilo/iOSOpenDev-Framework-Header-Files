/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADClient.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class CHDAnchor;

__attribute__((visibility("hidden")))
@interface CHDOfficeArtClient : XXUnknownSuperclass <OADClient> {
@private
	CHDAnchor *mAnchor;	// 4 = 0x4
}
@property(retain) id anchor;	// G=0x265e19; S=0x1fb7f9; converted property
- (void)dealloc;	// 0x1fba7d
// converted property getter: - (id)anchor;	// 0x265e19
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x1fb7f9
- (BOOL)hasBounds;	// 0x265e29
- (CGRect)bounds;	// 0x265e2d
@end