/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <WebUI/XXUnknownSuperclass.h>
#import <WebUI/WebUI-Structs.h>
#import <WebUI/UIPrintInteractionControllerDelegate.h>

@class WebFrame, UIWebBrowserView, NSNumberFormatter, UIWebPaginationInfo, UIFont, UIColor, NSString;

@interface BrowserPrintPageRenderer : XXUnknownSuperclass <UIPrintInteractionControllerDelegate> {
	UIWebBrowserView *_browserView;	// 56 = 0x38
	WebFrame *_webFrame;	// 60 = 0x3c
	NSNumberFormatter *_numberFormatter;	// 64 = 0x40
	NSString *_URLString;	// 68 = 0x44
	UIWebPaginationInfo *_paginationInfo;	// 72 = 0x48
	float _URLWidth;	// 76 = 0x4c
	NSString *_dateString;	// 80 = 0x50
	float _dateWidth;	// 84 = 0x54
	float _printWidth;	// 88 = 0x58
	CGPoint _contentOffset;	// 92 = 0x5c
	CGPoint _footerOffset;	// 100 = 0x64
	UIFont *_footerFont;	// 108 = 0x6c
	UIColor *_footerColor;	// 112 = 0x70
	BOOL _printFooter;	// 116 = 0x74
}
@property(retain, nonatomic) UIWebBrowserView *browserView;	// G=0x5b4d; S=0x5c7d; @synthesize=_browserView
@property(retain, nonatomic) WebFrame *webFrame;	// G=0x5b3d; S=0x5ca5; @synthesize=_webFrame
@property(retain, nonatomic) NSNumberFormatter *numberFormatter;	// G=0x5b2d; S=0x5ccd; @synthesize=_numberFormatter
@property(retain, nonatomic) NSString *URLString;	// G=0x5b1d; S=0x5cf5; @synthesize=_URLString
@property(readonly, assign, nonatomic) UIWebPaginationInfo *paginationInfo;	// G=0x5b0d; @synthesize=_paginationInfo
@property(assign, nonatomic) BOOL printFooter;	// G=0x5aed; S=0x5afd; @synthesize=_printFooter
- (id)init;	// 0x5b5d
- (void)dealloc;	// 0x6581
- (int)numberOfPages;	// 0x6561
- (void)drawContentForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x6509
- (void)drawFooterForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x6229
- (void)printInteractionControllerWillStartJob:(id)printInteractionController;	// 0x5d9d
- (void)printInteractionControllerDidFinishJob:(id)printInteractionController;	// 0x5d1d
// declared property getter: - (BOOL)printFooter;	// 0x5aed
// declared property setter: - (void)setPrintFooter:(BOOL)footer;	// 0x5afd
// declared property getter: - (id)paginationInfo;	// 0x5b0d
// declared property getter: - (id)URLString;	// 0x5b1d
// declared property setter: - (void)setURLString:(id)string;	// 0x5cf5
// declared property getter: - (id)numberFormatter;	// 0x5b2d
// declared property setter: - (void)setNumberFormatter:(id)formatter;	// 0x5ccd
// declared property getter: - (id)webFrame;	// 0x5b3d
// declared property setter: - (void)setWebFrame:(id)frame;	// 0x5ca5
// declared property getter: - (id)browserView;	// 0x5b4d
// declared property setter: - (void)setBrowserView:(id)view;	// 0x5c7d
@end
