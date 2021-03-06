/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFCocoaBrush.h>

@class MFCocoaBitmap;

__attribute__((visibility("hidden")))
@interface MFCocoaPatternBrush : MFCocoaBrush {
@private
	MFCocoaBitmap *m_pattern;	// 4 = 0x4
	BOOL m_usePaletteForBilevel;	// 8 = 0x8
}
+ (id)patternBrushWithBitmap:(id)bitmap usePaletteForBilevel:(BOOL)bilevel;	// 0x1c0579
- (id)initWithBitmap:(id)bitmap usePaletteForBilevel:(BOOL)bilevel;	// 0x1c05b9
- (void)dealloc;	// 0x1c1775
- (void)fillPath:(id)path :(id)arg2;	// 0x1c0621
@end
