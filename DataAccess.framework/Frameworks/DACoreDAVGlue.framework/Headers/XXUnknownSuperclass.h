/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
 */

#import <DACoreDAVGlue/DATask.h>
#import <DACoreDAVGlue/XXUnknownSuperclass.h>

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __XXUnknownSuperclass__
#define __XXUnknownSuperclass__ 1
@interface XXUnknownSuperclass : NSObject
@end
#endif

@interface XXUnknownSuperclass (DACoreDAVGlueExtensions) <DATask>
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x111d
- (void)finishWithError:(id)error;	// 0x110d
- (void)performTask;	// 0x10fd
@end
