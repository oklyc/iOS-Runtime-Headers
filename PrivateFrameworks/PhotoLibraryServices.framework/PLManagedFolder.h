/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSOrderedSet, NSString;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer> {
    BOOL _adjustingChildOrderKeys;
    BOOL _needsPersistenceUpdate;
}

@property(retain,readonly) NSString * _prettyDescription;
@property(retain,readonly) NSString * _typeDescription;
@property(readonly) unsigned int albumsCount;
@property(copy,readonly) id albumsSortingComparator;
@property(retain) NSOrderedSet * childCollections;
@property(readonly) unsigned int containersCount;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) int filter;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isFolder;
@property BOOL needsPersistenceUpdate;
@property(readonly) Class superclass;
@property(readonly) unsigned int unreadAlbumsCount;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

- (BOOL)_childOrderKeysAreValid;
- (void)_handleChildOrderKeys;
- (id)_prettyDescription;
- (id)_typeDescription;
- (void)addChildCollections:(id)arg1;
- (void)addChildCollectionsObject:(id)arg1;
- (BOOL)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (short)albumListType;
- (id)albums;
- (unsigned int)albumsCount;
- (id)albumsSortingComparator;
- (unsigned int)approximateCount;
- (id)assets;
- (unsigned int)assetsCount;
- (BOOL)canEditAlbums;
- (BOOL)canEditContainers;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (id)childKeyForOrdering;
- (id)childToOrderKeyMap;
- (id)containers;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (unsigned int)count;
- (void)didSave;
- (int)filter;
- (BOOL)hasAtLeastOneAlbum;
- (id)identifier;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inChildCollectionsAtIndex:(unsigned int)arg2;
- (BOOL)isEmpty;
- (BOOL)isValidKindForPersistence;
- (id)mutableAssets;
- (BOOL)needsPersistenceUpdate;
- (BOOL)needsReordering;
- (id)newOrderKeyChild:(id)arg1;
- (void)persistMetadataToFileSystem;
- (unsigned int)photosCount;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)prepareForDeletion;
- (void)refreshCollections;
- (void)removeChildCollections:(id)arg1;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)removeChildCollectionsObject:(id)arg1;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned int)arg1;
- (void)removePersistedFileSystemData;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)setNeedsPersistenceUpdate:(BOOL)arg1;
- (void)setNeedsReordering;
- (id)sortedOrderKeysForChildrenUsingMap:(id)arg1;
- (unsigned int)unreadAlbumsCount;
- (void)updateAlbumsOrderIfNeeded;
- (unsigned int)videosCount;
- (void)willSave;

@end
