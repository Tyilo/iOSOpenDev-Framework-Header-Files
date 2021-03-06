/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPTPdAssetManager.h>
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/XXUnknownSuperclass.h>
#import <PhotoLibraryServices/PLManagedObjectContextPTPNotificationDelegate.h>

@class PLManagedObjectContext, NSString, NSFileManager, PLPhotoLibrary, NSArray, NSObject;
@protocol PhotoLibraryPTPDelegate;

@interface PLPTPdAssetManager : XXUnknownSuperclass <PLManagedObjectContextPTPNotificationDelegate> {
@private
	NSObject<PhotoLibraryPTPDelegate> *_delegate;	// 4 = 0x4
	NSArray *_albumObjectIDs;	// 8 = 0x8
	NSString *_firstDCIMFolderServiced;	// 12 = 0xc
	NSFileManager *fileManager;	// 16 = 0x10
	PLPhotoLibrary *photoLibrary;	// 20 = 0x14
}
@property(retain, nonatomic) NSFileManager *fileManager;	// G=0x49721; S=0x49731; @synthesize
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary;	// G=0x49755; S=0x49765; @synthesize
// declared property setter: - (void)setPhotoLibrary:(id)library;	// 0x49765
// declared property getter: - (id)photoLibrary;	// 0x49755
// declared property setter: - (void)setFileManager:(id)manager;	// 0x49731
// declared property getter: - (id)fileManager;	// 0x49721
- (void)managedObjectContext:(id)context libraryChangedWithInsertedAssets:(id)insertedAssets deletedAssets:(id)assets changedAssets:(id)assets4;	// 0x4971d
- (void)deleteAsset:(NSObject *)asset;	// 0x49719
- (id)infoForAsset:(NSObject *)asset;	// 0x49715
- (id)assetsInAssociation:(NSObject *)association;	// 0x49711
- (id)associationsInAlbum:(NSObject *)album;	// 0x4970d
- (id)infoForAlbum:(NSObject *)album;	// 0x49709
- (id)albumHandles;	// 0x496f9
- (void)dealloc;	// 0x495f5
- (id)init;	// 0x494b9
@end

@interface PLPTPdAssetManager (PictureTransferProtocol)
@property(assign, nonatomic) NSObject<PhotoLibraryPTPDelegate> *delegate;	// G=0x4a689; S=0x4a699; 
- (BOOL)libraryIsAvailable;	// 0x4a7e5
- (BOOL)ptpCanDeleteFiles;	// 0x4a7e1
- (id)ptpInformationForPhotosWithPrimaryKeys:(id)primaryKeys;	// 0x4a711
- (id)ptpInformationForPhotoWithObjectID:(id)objectID;	// 0x4a6a9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4a699
// declared property getter: - (id)delegate;	// 0x4a689
- (void)setPtpDelegate:(id)delegate;	// 0x4a679
- (BOOL)ptpDeletePhotoWithKey:(NSObject *)key andExtension:(id)extension;	// 0x49cd9
- (id)ptpThumbnailForPhotoWithKey:(NSObject *)key;	// 0x49805
- (id)ptpInformationForFilesInDirectory:(id)directory;	// 0x49789
@end

@interface PLPTPdAssetManager (Private)
@property(readonly, assign, nonatomic) NSArray *albumObjectIDs;	// G=0x4a8a9; 
@property(readonly, assign) PLManagedObjectContext *managedObjectContext;	// G=0x4a881; 
- (id)_ptpInformationForAllAssets;	// 0x4afcd
- (id)_allAssetObjectIDs;	// 0x4ac79
- (id)assetsInAlbumWithObjectID:(id)objectID;	// 0x4ab6d
- (void)_albumDidChange:(id)_album;	// 0x4ab3d
- (BOOL)_isPTPAlbum:(id)album;	// 0x4aafd
// declared property getter: - (id)albumObjectIDs;	// 0x4a8a9
// declared property getter: - (id)managedObjectContext;	// 0x4a881
- (void)_performBlockAndWait:(id)wait;	// 0x4a835
- (void)_performTransactionAndWait:(id)wait;	// 0x4a7e9
@end
