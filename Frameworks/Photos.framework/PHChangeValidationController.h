/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChangeValidationController : NSObject {
    NSArray * _albumsToDelete;
    NSArray * _assetsToChangeContent;
    NSArray * _assetsToDelete;
    NSArray * _assetsToHide;
    NSArray * _assetsToRevert;
    NSString * _clientName;
    BOOL  _confirmationRequired;
    NSSet * _deleteRequests;
    BOOL  _didPrepare;
    NSArray * _foldersToDelete;
    NSSet * _insertRequests;
    NSManagedObjectContext * _managedObjectContext;
    PLPhotoLibrary * _photoLibrary;
    NSArray * _renderedContentURLs;
    NSSet * _updateRequests;
}

@property (nonatomic, readonly) NSArray *albumsToDelete;
@property (nonatomic, readonly) NSArray *assetsToChangeContent;
@property (nonatomic, readonly) NSArray *assetsToDelete;
@property (nonatomic, readonly) NSArray *assetsToHide;
@property (nonatomic, readonly) NSArray *assetsToRevert;
@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly) BOOL confirmationRequired;
@property (nonatomic, readonly) NSSet *deleteRequests;
@property (nonatomic, readonly) NSArray *foldersToDelete;
@property (nonatomic, readonly) NSSet *insertRequests;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) NSArray *renderedContentURLs;
@property (nonatomic, readonly) NSSet *updateRequests;

- (void).cxx_destruct;
- (BOOL)_prepareWithError:(id*)arg1;
- (id)albumsToDelete;
- (id)assetsToChangeContent;
- (id)assetsToDelete;
- (id)assetsToHide;
- (id)assetsToRevert;
- (id)clientName;
- (BOOL)confirmationRequired;
- (id)deleteRequests;
- (id)foldersToDelete;
- (id)initWithInsertRequests:(id)arg1 updateRequests:(id)arg2 deleteRequests:(id)arg3 context:(id)arg4 photoLibrary:(id)arg5;
- (id)insertRequests;
- (id)managedObjectContext;
- (id)photoLibrary;
- (id)renderedContentURLs;
- (id)updateRequests;
- (BOOL)validateWithError:(id*)arg1;

@end
