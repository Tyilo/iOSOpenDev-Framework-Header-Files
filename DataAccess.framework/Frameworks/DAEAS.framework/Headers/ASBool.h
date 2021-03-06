/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>
#import <DAEAS/ASParsingFrontingBasicType.h>


@interface ASBool : ASItem <ASParsingFrontingBasicType> {
}
+ (BOOL)expectsContent;	// 0x23375
+ (BOOL)notifyOfUnknownTokens;	// 0x23291
+ (BOOL)frontingBasicTypes;	// 0x2323d
+ (BOOL)parsingWithSubItems;	// 0x231e9
+ (BOOL)parsingLeafNode;	// 0x23195
+ (BOOL)acceptsTopLevelLeaves;	// 0x23141
- (int)parsingState;	// 0x23371
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x23305
- (id)commonValue;	// 0x232e5
@end
