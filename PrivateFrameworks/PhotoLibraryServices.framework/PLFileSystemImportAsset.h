/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDate, NSMutableSet, NSObject<PLAlbumProtocol>;

@interface PLFileSystemImportAsset : NSObject {
    NSDate *_dateCreated;
    struct NSObject { Class x1; } *_destinationAlbum;
    NSMutableSet *_urls;
    int assetKind;
}

@property int assetKind;
@property(retain) NSDate * dateCreated;
@property(retain) NSObject<PLAlbumProtocol> * destinationAlbum;
@property(retain) NSMutableSet * urls;

- (int)assetKind;
- (int)compare:(id)arg1;
- (id)dateCreated;
- (void)dealloc;
- (id)description;
- (struct NSObject { Class x1; }*)destinationAlbum;
- (id)initWithURLs:(id)arg1 creationDate:(id)arg2 destinationAlbum:(struct NSObject { Class x1; }*)arg3 assetKind:(int)arg4;
- (BOOL)isCameraKit;
- (void)setAssetKind:(int)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDestinationAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setUrls:(id)arg1;
- (id)urls;

@end
