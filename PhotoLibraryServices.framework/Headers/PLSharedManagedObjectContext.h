/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObjectContext.h>
#import <PhotoLibraryServices/PLSharedManagedObjectContext.h>


@interface PLSharedManagedObjectContext : PLManagedObjectContext {
}
- (BOOL)isUserInterfaceContext;	// 0x3be79
@end

@interface PLSharedManagedObjectContext (ChangeNotifications)
- (void)_mergeChangesFromDidSaveDictionary:(id)_mergeChangesFrom usingObjectIDs:(BOOL)ids;	// 0x49141
- (void)tearDownLocalChangeNotifications;	// 0x490d5
- (void)setupLocalChangeNotifications;	// 0x49021
@end
