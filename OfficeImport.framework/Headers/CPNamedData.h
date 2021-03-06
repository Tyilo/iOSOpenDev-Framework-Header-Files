/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CPNamedData : XXUnknownSuperclass {
@private
	NSData *mData;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x2ceb3d; @synthesize=mData
@property(readonly, assign, nonatomic) NSString *name;	// G=0x2ceb2d; @synthesize=mName
+ (id)namedDataWithData:(id)data named:(id)named;	// 0x2cebcd
- (id)initWithData:(id)data named:(id)named;	// 0x2ceb4d
- (void)dealloc;	// 0x2cec19
// declared property getter: - (id)name;	// 0x2ceb2d
// declared property getter: - (id)data;	// 0x2ceb3d
@end
