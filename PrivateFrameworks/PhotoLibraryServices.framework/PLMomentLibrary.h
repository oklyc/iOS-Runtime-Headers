/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSOrderedSet, NSString;

@interface PLMomentLibrary : PLManagedObject <PLAssetContainerList, PLMomentContainer> {
}

@property(readonly) unsigned int containersCount;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSOrderedSet * moments;
@property(readonly) Class superclass;

+ (void)addSingletonObjectsToContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)sharedMomentLibraryInManagedObjectContext:(id)arg1 createIfNecessary:(BOOL)arg2;
+ (id)sharedMomentLibraryInManagedObjectContext:(id)arg1;

- (id)_typeDescription;
- (void)addMoments:(id)arg1;
- (void)addMomentsObject:(id)arg1;
- (BOOL)canEditContainers;
- (id)containers;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (void)insertMoments:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inMomentsAtIndex:(unsigned int)arg2;
- (BOOL)isEmpty;
- (void)prepareForDeletion;
- (void)removeMoments:(id)arg1;
- (void)removeMomentsAtIndexes:(id)arg1;
- (void)removeMomentsObject:(id)arg1;
- (void)removeObjectFromMomentsAtIndex:(unsigned int)arg1;
- (void)replaceMomentsAtIndexes:(id)arg1 withMoments:(id)arg2;
- (void)replaceObjectInMomentsAtIndex:(unsigned int)arg1 withObject:(id)arg2;

@end
