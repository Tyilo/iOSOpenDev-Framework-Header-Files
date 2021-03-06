/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@protocol SFUBufferedInputStream;

__attribute__((visibility("hidden")))
@interface SFUZipRecordInputStream : XXUnknownSuperclass {
@private
	id<SFUBufferedInputStream> mInput;	// 4 = 0x4
	char *mBuffer;	// 8 = 0x8
	long long mBufferStart;	// 12 = 0xc
	long long mBufferEnd;	// 20 = 0x14
}
- (id)initWithDataRepresentation:(id)dataRepresentation;	// 0x181ddd
- (void)dealloc;	// 0x18360d
- (const char *)dataAtOffset:(long long)offset size:(unsigned long)size end:(long long)end;	// 0x1827b5
@end
