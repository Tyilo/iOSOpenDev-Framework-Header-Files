/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CHXChartType.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface CHXChartType : XXUnknownSuperclass {
}
+ (id)chdChartTypeFromXmlChartTypeElement:(xmlNode *)xmlChartTypeElement state:(id)state;	// 0x1e1f39
+ (int)chdGroupingFromXmlGroupingElement:(xmlNode *)xmlGroupingElement;	// 0x1e2565
+ (int)chdShapeTypeFromXmlShapeTypeElement:(xmlNode *)xmlShapeTypeElement;	// 0x1e7721
+ (void)resolveStyle:(id)style state:(id)state;	// 0x1e5af1
@end

@interface CHXChartType (Private)
+ (Class)chxChartTypeClassWithXmlElement:(xmlNode *)xmlElement;	// 0x1e2115
@end
