/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EXVmlClient.h>
#import <OfficeImport/OAVClient.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface EXVmlClient : XXUnknownSuperclass <OAVClient> {
}
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x20e5bd
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x255475
+ (int)vmlSupportLevel;	// 0x20e5b9
@end

@interface EXVmlClient (Private)
+ (void)readAnchor:(xmlNode *)anchor to:(id)to;	// 0x20e9b1
+ (id)readComment:(xmlNode *)comment to:(id)to;	// 0x20eccd
+ (id)edTextBoxForVmlTextInShape:(xmlNode *)shape to:(id)to state:(id)state;	// 0x255479
@end
