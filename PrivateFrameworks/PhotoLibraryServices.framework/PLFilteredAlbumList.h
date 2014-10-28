/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <NSObject><NSCopying>, NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSObject<PLIndexMappingCache>, NSPredicate, NSString, PLIndexMapper, PLManagedAlbumList, PLPhotoLibrary;

@interface PLFilteredAlbumList : NSObject <PLAlbumContainer, PLIndexMapperDataSource, PLIndexMappingCache, PLDerivedAlbumListOrigin> {
    NSObject<PLIndexMappingCache> *_derivedAlbumLists[5];
    NSMutableIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    NSMutableOrderedSet *_weak_albums;
    PLManagedAlbumList *backingAlbumList;
    int filter;
    NSPredicate *predicate;
}

@property(retain) NSMutableOrderedSet * _albums;
@property(retain,readonly) NSString * _prettyDescription;
@property(retain,readonly) NSString * _typeDescription;
@property(readonly) short albumListType;
@property(retain,readonly) NSMutableOrderedSet * albums;
@property(readonly) unsigned int albumsCount;
@property(copy,readonly) id albumsSortingComparator;
@property(retain) PLManagedAlbumList * backingAlbumList;
@property(copy,readonly) <NSObject><NSCopying> * cachedIndexMapState;
@property(readonly) BOOL canEditAlbums;
@property(readonly) unsigned int containersCount;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property int filter;
@property(copy,readonly) NSIndexSet * filteredIndexes;
@property(readonly) unsigned int hash;
@property(retain,readonly) PLIndexMapper * indexMapper;
@property(readonly) BOOL isFolder;
@property(retain,readonly) PLPhotoLibrary * photoLibrary;
@property(retain) NSPredicate * predicate;
@property(readonly) Class superclass;
@property(readonly) unsigned int unreadAlbumsCount;

+ (id)filteredAlbumList:(id)arg1 filter:(int)arg2;

- (id)_albums;
- (void)_backingContextDidChange:(id)arg1;
- (void)_invalidateFilteredIndexes;
- (id)_prettyDescription;
- (id)_typeDescription;
- (BOOL)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (short)albumListType;
- (id)albums;
- (unsigned int)albumsCount;
- (id)albumsSortingComparator;
- (id)backingAlbumList;
- (id)cachedIndexMapState;
- (BOOL)canEditAlbums;
- (BOOL)canEditContainers;
- (id)containers;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (unsigned int)countOfFilteredAlbums;
- (void)dealloc;
- (Class)derivedChangeNotificationClass;
- (id)description;
- (void)enumerateDerivedAlbumLists:(id)arg1;
- (int)filter;
- (id)filteredAlbumsAtIndexes:(id)arg1;
- (id)filteredIndexes;
- (void)getFilteredAlbums:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)hasAtLeastOneAlbum;
- (id)identifier;
- (unsigned int)indexInFilteredAlbumsOfObject:(id)arg1;
- (id)indexMapper;
- (id)initWithBackingAlbumList:(id)arg1 filter:(int)arg2;
- (void)insertFilteredAlbums:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inFilteredAlbumsAtIndex:(unsigned int)arg2;
- (BOOL)isEmpty;
- (BOOL)isFolder;
- (id)managedObjectContext;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (BOOL)needsReordering;
- (id)objectInFilteredAlbumsAtIndex:(unsigned int)arg1;
- (id)photoLibrary;
- (id)predicate;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)registerDerivedAlbumList:(struct NSObject { Class x1; }*)arg1;
- (void)removeFilteredAlbumsAtIndexes:(id)arg1;
- (void)removeObjectFromFilteredAlbumsAtIndex:(unsigned int)arg1;
- (void)replaceFilteredAlbumsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAlbumsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)setBackingAlbumList:(id)arg1;
- (void)setFilter:(int)arg1;
- (void)setNeedsReordering;
- (void)setPredicate:(id)arg1;
- (void)set_albums:(id)arg1;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
- (unsigned int)unreadAlbumsCount;
- (void)unregisterAllDerivedAlbums;
- (void)updateAlbumsOrderIfNeeded;

@end
