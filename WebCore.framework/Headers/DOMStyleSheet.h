/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/DOMObject.h>

@class DOMMediaList, DOMNode, NSString;

__attribute__((visibility("hidden")))
@interface DOMStyleSheet : DOMObject {
}
@property(readonly, retain) DOMMediaList *media;	// G=0x34bc45; 
@property(readonly, copy) NSString *title;	// G=0x34bd01; 
@property(readonly, copy) NSString *href;	// G=0x34bdc9; 
@property(readonly, retain) DOMStyleSheet *parentStyleSheet;	// G=0x34be91; 
@property(readonly, retain) DOMNode *ownerNode;	// G=0x34bf55; 
@property(assign) BOOL disabled;	// G=0x34bac9; S=0x34baf9; 
@property(readonly, copy) NSString *type;	// G=0x34c011; 
- (void)dealloc;	// 0x34bbc5
- (void)finalize;	// 0x34c161
// declared property getter: - (id)type;	// 0x34c011
// declared property getter: - (BOOL)disabled;	// 0x34bac9
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x34baf9
// declared property getter: - (id)ownerNode;	// 0x34bf55
// declared property getter: - (id)parentStyleSheet;	// 0x34be91
// declared property getter: - (id)href;	// 0x34bdc9
// declared property getter: - (id)title;	// 0x34bd01
// declared property getter: - (id)media;	// 0x34bc45
@end
