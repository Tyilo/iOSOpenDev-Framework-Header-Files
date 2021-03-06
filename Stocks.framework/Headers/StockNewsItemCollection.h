/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Stocks/XXUnknownSuperclass.h>

@class NSArray;

@interface StockNewsItemCollection : XXUnknownSuperclass {
	NSArray *newsItems;	// 4 = 0x4
	double expirationTime;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *newsItems;	// G=0x10089; S=0x11aad; @synthesize
@property(assign, nonatomic) double expirationTime;	// G=0x1005d; S=0x10075; @synthesize
- (id)initWithArchiveArray:(id)archiveArray;	// 0x11bdd
- (void)dealloc;	// 0x11a61
- (id)archiveArray;	// 0x11ad5
// declared property getter: - (double)expirationTime;	// 0x1005d
// declared property setter: - (void)setExpirationTime:(double)time;	// 0x10075
// declared property getter: - (id)newsItems;	// 0x10089
// declared property setter: - (void)setNewsItems:(id)items;	// 0x11aad
@end
