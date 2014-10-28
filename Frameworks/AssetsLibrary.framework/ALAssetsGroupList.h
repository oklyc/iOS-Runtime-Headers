/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class <PLAssetContainerList>;

@interface ALAssetsGroupList : ALAssetsGroup {
    <PLAssetContainerList> *_containerList;
}

@property(retain,readonly) <PLAssetContainerList> * containerList;

- (void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (id)containerList;
- (void)dealloc;
- (id)initWithContainerList:(id)arg1 library:(id)arg2 type:(unsigned int)arg3;
- (id)valueForProperty:(id)arg1;

@end
