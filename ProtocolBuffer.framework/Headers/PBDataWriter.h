/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <ProtocolBuffer/XXUnknownSuperclass.h>

@class NSMutableData;

@interface PBDataWriter : XXUnknownSuperclass {
	NSMutableData *_data;	// 4 = 0x4
}
@property(readonly, retain) NSMutableData *data;	// G=0x17d9; converted property
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x1ded
- (BOOL)writeData:(id)data;	// 0x1d9d
- (void)writeData:(id)data forTag:(unsigned short)tag;	// 0x1d39
- (void)writeString:(id)string forTag:(unsigned short)tag;	// 0x1d01
- (void)writeBOOL:(BOOL)aBool forTag:(unsigned short)tag;	// 0x1cc9
- (void)writeSfixed64:(long long)a64 forTag:(unsigned short)tag;	// 0x1c81
- (void)writeSfixed32:(int)a32 forTag:(unsigned short)tag;	// 0x1c45
- (void)writeFixed64:(unsigned long long)a64 forTag:(unsigned short)tag;	// 0x1bfd
- (void)writeFixed32:(unsigned)a32 forTag:(unsigned short)tag;	// 0x1bc1
- (void)writeSint64:(long long)a64 forTag:(unsigned short)tag;	// 0x1b7d
- (void)writeSint32:(int)a32 forTag:(unsigned short)tag;	// 0x1b41
- (void)writeUint64:(unsigned long long)a64 forTag:(unsigned long long)tag;	// 0x1b05
- (void)writeUint32:(unsigned)a32 forTag:(unsigned)tag;	// 0x1acd
- (void)writeInt64:(long long)a64 forTag:(unsigned short)tag;	// 0x1a91
- (void)writeInt32:(int)a32 forTag:(unsigned short)tag;	// 0x1a59
- (void)writeFloat:(float)aFloat forTag:(unsigned short)tag;	// 0x1a1d
- (void)writeDouble:(double)aDouble forTag:(unsigned short)tag;	// 0x19d5
- (void)writeTag:(unsigned short)tag andType:(unsigned char)type;	// 0x19a9
- (void)writeBareVarint:(long long)varint;	// 0x1951
- (void)writeInt8:(BOOL)a8;	// 0x192d
- (void)writeProtoBuffer:(id)buffer;	// 0x18b9
- (void)writeBigEndianShortThenString:(id)string;	// 0x1835
- (void)writeBigEndianFixed32:(unsigned)a32;	// 0x1811
- (void)writeBigEndianFixed16:(unsigned short)a16;	// 0x17e9
// converted property getter: - (id)data;	// 0x17d9
- (void)dealloc;	// 0x178d
- (id)init;	// 0x1729
@end
