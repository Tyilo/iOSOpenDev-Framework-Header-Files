/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <AppSupport/XXUnknownSuperclass.h>

@class NSArray, NSString;

@interface _CPPowerAssertion : XXUnknownSuperclass {
	unsigned _assertion;	// 4 = 0x4
	double _timeout;	// 8 = 0x8
	NSString *_identifier;	// 16 = 0x10
	NSArray *_stack;	// 20 = 0x14
}
@property(assign, nonatomic) double timeout;	// G=0xd109; S=0xd11d; @synthesize=_timeout
- (id)initWithIdentifier:(id)identifier timeout:(double)timeout;	// 0xd53d
- (void)dealloc;	// 0xd435
- (void)timedout;	// 0xd2cd
// declared property getter: - (double)timeout;	// 0xd109
// declared property setter: - (void)setTimeout:(double)timeout;	// 0xd11d
@end