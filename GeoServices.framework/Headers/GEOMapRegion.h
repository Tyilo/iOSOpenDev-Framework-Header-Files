/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/GEOMapRegion.h>


@interface GEOMapRegion : PBCodable {
	BOOL _hasSouthLat;	// 4 = 0x4
	double _southLat;	// 8 = 0x8
	BOOL _hasWestLng;	// 16 = 0x10
	double _westLng;	// 20 = 0x14
	BOOL _hasNorthLat;	// 28 = 0x1c
	double _northLat;	// 32 = 0x20
	BOOL _hasEastLng;	// 40 = 0x28
	double _eastLng;	// 44 = 0x2c
}
@property(assign, nonatomic) double eastLng;	// G=0xf93d; S=0xf401; @synthesize=_eastLng
@property(assign, nonatomic) BOOL hasEastLng;	// G=0xf91d; S=0xf92d; @synthesize=_hasEastLng
@property(assign, nonatomic) double northLat;	// G=0xf905; S=0xf3d5; @synthesize=_northLat
@property(assign, nonatomic) BOOL hasNorthLat;	// G=0xf8e5; S=0xf8f5; @synthesize=_hasNorthLat
@property(assign, nonatomic) double westLng;	// G=0xf8cd; S=0xf3a9; @synthesize=_westLng
@property(assign, nonatomic) BOOL hasWestLng;	// G=0xf8ad; S=0xf8bd; @synthesize=_hasWestLng
@property(assign, nonatomic) double southLat;	// G=0xf895; S=0xf37d; @synthesize=_southLat
@property(assign, nonatomic) BOOL hasSouthLat;	// G=0xf875; S=0xf885; @synthesize=_hasSouthLat
// declared property getter: - (double)eastLng;	// 0xf93d
// declared property setter: - (void)setHasEastLng:(BOOL)lng;	// 0xf92d
// declared property getter: - (BOOL)hasEastLng;	// 0xf91d
// declared property getter: - (double)northLat;	// 0xf905
// declared property setter: - (void)setHasNorthLat:(BOOL)lat;	// 0xf8f5
// declared property getter: - (BOOL)hasNorthLat;	// 0xf8e5
// declared property getter: - (double)westLng;	// 0xf8cd
// declared property setter: - (void)setHasWestLng:(BOOL)lng;	// 0xf8bd
// declared property getter: - (BOOL)hasWestLng;	// 0xf8ad
// declared property getter: - (double)southLat;	// 0xf895
// declared property setter: - (void)setHasSouthLat:(BOOL)lat;	// 0xf885
// declared property getter: - (BOOL)hasSouthLat;	// 0xf875
- (void)writeTo:(id)to;	// 0xf775
- (BOOL)readFrom:(id)from;	// 0xf645
- (id)dictionaryRepresentation;	// 0xf49d
- (id)description;	// 0xf42d
// declared property setter: - (void)setEastLng:(double)lng;	// 0xf401
// declared property setter: - (void)setNorthLat:(double)lat;	// 0xf3d5
// declared property setter: - (void)setWestLng:(double)lng;	// 0xf3a9
// declared property setter: - (void)setSouthLat:(double)lat;	// 0xf37d
- (void)dealloc;	// 0xf351
@end

@interface GEOMapRegion (GEOProtoExtras)
@property(readonly, assign, nonatomic) double spanLng;	// G=0x4e29; 
@property(readonly, assign, nonatomic) double spanLat;	// G=0x4ddd; 
@property(readonly, assign, nonatomic) double centerLng;	// G=0x4d8d; 
@property(readonly, assign, nonatomic) double centerLat;	// G=0x4d3d; 
- (BOOL)containsCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x4e75
// declared property getter: - (double)spanLng;	// 0x4e29
// declared property getter: - (double)spanLat;	// 0x4ddd
// declared property getter: - (double)centerLng;	// 0x4d8d
// declared property getter: - (double)centerLat;	// 0x4d3d
- (void)setSpannedRegion:(XXStruct_SnKRpD)region;	// 0x4c99
- (id)initWithSpannedRegion:(XXStruct_SnKRpD)spannedRegion;	// 0x4c29
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x4b79
@end