/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <ToneLibrary/XXUnknownSuperclass.h>


@interface TLVibrationManagerServiceUtilities : XXUnknownSuperclass {
}
+ (id)userGeneratedVibrationStoreFileURL;	// 0x1e165
+ (id)_sharedResourceURLForRelativeFilePath:(id)relativeFilePath;	// 0x1e129
+ (id)_sharedResourceFilePathForRelativeFilePath:(id)relativeFilePath;	// 0x1e109
+ (BOOL)objectIsValidUserGeneratedVibrationPatternsDictionary:(id)dictionary error:(id *)error;	// 0x1dda9
+ (BOOL)_objectIsValidUserGeneratedVibrationPattern:(id)pattern error:(id *)error;	// 0x1db65
+ (BOOL)_isValidObject:(id)object error:(id *)error forValidationBlock:(id)validationBlock;	// 0x1dac9
+ (id)errorWithDomain:(id)domain description:(id)description;	// 0x1d9d1
+ (void *)newXPCObjectFromDictionary:(id)dictionary inReplyToXPCObject:(void *)xpcobject error:(id *)error;	// 0x1d86d
+ (id)dictionaryFromXPCObject:(void *)xpcobject error:(id *)error;	// 0x1d6e1
@end