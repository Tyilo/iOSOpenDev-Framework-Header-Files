/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/GQDNameMappable.h>
#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDColor.h>


__attribute__((visibility("hidden")))
@interface GQDColor : XXUnknownSuperclass <GQDNameMappable> {
@private
	float mRed;	// 4 = 0x4
	float mGreen;	// 8 = 0x8
	float mBlue;	// 12 = 0xc
	float mAlpha;	// 16 = 0x10
}
+ (const StateSpec *)stateForReading;	// 0x81dd
+ (id)blackColor;	// 0x83b9
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue;	// 0x8351
- (id)initWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x82c1
- (id)description;	// 0x852d
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x81e9
- (float)redComponent;	// 0x8261
- (float)greenComponent;	// 0x8271
- (float)blueComponent;	// 0x8281
- (float)alphaComponent;	// 0x8291
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x83d9
@end

@interface GQDColor (Private)
+ (void)readColorFromProcessor:(id)processor reader:(xmlTextReader *)reader;	// 0x85e5
+ (id)rgbColorFromReader:(xmlTextReader *)reader calibrated:(BOOL)calibrated;	// 0x88ed
+ (id)whiteColorFromReader:(xmlTextReader *)reader calibrated:(BOOL)calibrated;	// 0x89e1
+ (id)cmykColorFromReader:(xmlTextReader *)reader;	// 0x8a89
@end

@interface GQDColor (GQDColorAdditions)
- (int)htmlRed;	// 0x51809
- (int)htmlGreen;	// 0x51831
- (int)htmlBlue;	// 0x51859
@end