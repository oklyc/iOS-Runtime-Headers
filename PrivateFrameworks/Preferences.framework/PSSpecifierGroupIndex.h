/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSArray, NSMutableArray;

@interface PSSpecifierGroupIndex : NSObject <NSCopying> {
    NSMutableArray *_groupSections;
    NSMutableArray *_groupSpecifiers;
    NSMutableArray *_specifiers;
    NSMutableArray *_ungroupedPrefixSpecifiers;
    BOOL _wantsDebugCallbacks;
}

@property(copy,readonly) NSArray * groupSpecifiers;
@property(copy,readonly) NSArray * specifiers;

+ (BOOL)_wantsDebuggingCallbacks;
+ (id)groupIndexWithSpecifiers:(id)arg1;

- (void)_appendDescriptionOfArray:(id)arg1 toString:(id)arg2 withTabLevel:(unsigned int)arg3;
- (void)_createGroupIndex;
- (void)_didPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (void)_getSection:(out unsigned int*)arg1 row:(out unsigned int*)arg2 forSpecifierAtIndex:(unsigned int)arg3 forInsertion:(BOOL)arg4 allowGroupSpecifiers:(BOOL)arg5;
- (void)_getSection:(out unsigned int*)arg1 row:(out unsigned int*)arg2 forSpecifierAtIndex:(unsigned int)arg3 forInsertion:(BOOL)arg4;
- (id)_groupSections;
- (unsigned int)_indexOfSpecifierInSection:(unsigned int)arg1 row:(unsigned int)arg2 forInsertion:(BOOL)arg3;
- (id)_init;
- (id)_initForCopyWithGroupIndex:(id)arg1;
- (void)_manuallyFindSection:(out unsigned int*)arg1 row:(out unsigned int*)arg2 forSpecifierAtIndex:(unsigned int)arg3;
- (id)_synthesizedSpecifiersFromGroupIndex;
- (id)_tabStringOfDepth:(unsigned int)arg1;
- (id)_ungroupedPrefixSpecifiers;
- (void)_willPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)getGroup:(out unsigned int*)arg1 row:(out unsigned int*)arg2 ofSpecifier:(id)arg3;
- (BOOL)getGroup:(out unsigned int*)arg1 row:(out unsigned int*)arg2 ofSpecifierAtIndex:(unsigned int)arg3;
- (BOOL)getGroup:(out unsigned int*)arg1 row:(out unsigned int*)arg2 ofSpecifierWithID:(id)arg3;
- (unsigned int)groupIndexOfGroup:(id)arg1;
- (unsigned int)groupIndexOfGroupWithID:(id)arg1;
- (id)groupSpecifiers;
- (unsigned int)indexOfGroup:(id)arg1;
- (unsigned int)indexOfGroupAtGroupIndex:(unsigned int)arg1;
- (unsigned int)indexOfGroupWithID:(id)arg1;
- (unsigned int)indexOfSpecifierAtIndexPath:(id)arg1 forInsertion:(BOOL)arg2;
- (unsigned int)indexOfSpecifierAtIndexPath:(id)arg1;
- (id)indexPathForSpecifier:(id)arg1;
- (id)indexPathForSpecifierAtIndex:(unsigned int)arg1 forInsertion:(BOOL)arg2;
- (id)indexPathForSpecifierAtIndex:(unsigned int)arg1;
- (id)indexPathForSpecifierWithID:(id)arg1;
- (id)init;
- (id)initWithSpecifiers:(id)arg1;
- (unsigned int)numberOfGroups;
- (unsigned int)numberOfRowsInGroupAtIndex:(unsigned int)arg1;
- (void)performSpecifierUpdates:(id)arg1;
- (void)performSpecifierUpdatesUsingBlock:(id)arg1;
- (void)performUpdateOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (void)performUpdateOperation:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfSpecifiersInGroup:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfSpecifiersInGroupAtGroupIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfSpecifiersInGroupWithID:(id)arg1;
- (void)reloadWithSpecifiers:(id)arg1;
- (id)specifierAtIndexPath:(id)arg1;
- (id)specifiers;
- (id)specifiersInGroup:(id)arg1;
- (id)specifiersInGroupAtGroupIndex:(unsigned int)arg1;
- (id)specifiersInGroupWithID:(id)arg1;

@end
