/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/WebCore-Structs.h>
#import <WebCore/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface TileLayer : XXUnknownSuperclass {
@private
	TileGrid *_tileGrid;	// 48 = 0x30
	unsigned _paintCount;	// 52 = 0x34
}
@property(assign, nonatomic) unsigned paintCount;	// G=0x76dc5; S=0x76dd5; @synthesize=_paintCount
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x6cd1fd
- (void)layoutSublayers;	// 0x6cd24d
- (void)drawInContext:(CGContextRef)context;	// 0x70dc5
- (id)actionForKey:(id)key;	// 0x76de5
- (void)setTileGrid:(TileGrid *)grid;	// 0xc81f9
// declared property getter: - (unsigned)paintCount;	// 0x76dc5
// declared property setter: - (void)setPaintCount:(unsigned)count;	// 0x76dd5
@end
