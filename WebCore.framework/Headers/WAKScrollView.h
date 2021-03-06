/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKView.h>
#import <WebCore/WebCoreFrameScrollView.h>


@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
@private
	WAKView *_documentView;	// 68 = 0x44
	id _delegate;	// 72 = 0x48
	CGPoint _scrollOrigin;	// 76 = 0x4c
}
@property(assign) BOOL hasVerticalScroller;	// G=0x6da4b1; S=0x711d; converted property
@property(assign) BOOL hasHorizontalScroller;	// G=0x6da4b5; S=0x7121; converted property
@property(assign) id delegate;	// G=0x956b5; S=0x7109; converted property
@property(retain) WAKView *documentView;	// G=0x12bf9; S=0x12a81; converted property
@property(retain) id contentView;	// G=0x596bd; S=0x6da749; converted property
@property(assign) BOOL drawsBackground;	// G=0x6da4b9; S=0x7119; converted property
@property(assign) int horizontalScrollingMode;	// G=0x6da4d9; S=0x6da4cd; converted property
@property(assign) int verticalScrollingMode;	// G=0x6da4dd; S=0x6da4d1; converted property
@property(readonly, assign) CGPoint scrollOrigin;	// G=0x950e5; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x6e25
- (void)dealloc;	// 0x1e946d
// converted property setter: - (void)setHasVerticalScroller:(BOOL)scroller;	// 0x711d
// converted property getter: - (BOOL)hasVerticalScroller;	// 0x6da4b1
// converted property setter: - (void)setHasHorizontalScroller:(BOOL)scroller;	// 0x7121
// converted property getter: - (BOOL)hasHorizontalScroller;	// 0x6da4b5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x7109
// converted property getter: - (id)delegate;	// 0x956b5
- (CGRect)documentVisibleRect;	// 0x5968d
// converted property setter: - (void)setDocumentView:(id)view;	// 0x12a81
// converted property getter: - (id)documentView;	// 0x12bf9
// converted property setter: - (void)setContentView:(id)view;	// 0x6da749
// converted property getter: - (id)contentView;	// 0x596bd
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x7119
// converted property getter: - (BOOL)drawsBackground;	// 0x6da4b9
- (void)setLineScroll:(float)scroll;	// 0x716d
- (float)verticalLineScroll;	// 0x6da4bd
- (float)horizontalLineScroll;	// 0x6da4c1
- (void)reflectScrolledClipView:(id)view;	// 0x6da4c5
- (void)drawRect:(CGRect)rect;	// 0x6da4c9
// converted property setter: - (void)setHorizontalScrollingMode:(int)mode;	// 0x6da4cd
// converted property setter: - (void)setVerticalScrollingMode:(int)mode;	// 0x6da4d1
- (void)setScrollingMode:(int)mode;	// 0x6da4d5
// converted property getter: - (int)horizontalScrollingMode;	// 0x6da4d9
// converted property getter: - (int)verticalScrollingMode;	// 0x6da4dd
- (void)setScrollingModes:(int)modes vertical:(int)vertical andLock:(BOOL)lock;	// 0x14151
- (void)scrollingModes:(int *)modes vertical:(int *)vertical;	// 0x13f29
- (void)setScrollBarsSuppressed:(BOOL)suppressed repaintOnUnsuppress:(BOOL)unsuppress;	// 0xc284d
- (void)setScrollOrigin:(CGPoint)origin updatePositionAtAll:(BOOL)all immediately:(BOOL)immediately;	// 0x6da701
// converted property getter: - (CGPoint)scrollOrigin;	// 0x950e5
- (void)scrollWheel:(id)wheel;	// 0x6da611
- (CGRect)actualDocumentVisibleRect;	// 0x94a59
- (void)setActualScrollPosition:(CGPoint)position;	// 0x213e7d
- (id)description;	// 0x6da4e5
- (BOOL)inProgrammaticScroll;	// 0x6da4e1
@end
