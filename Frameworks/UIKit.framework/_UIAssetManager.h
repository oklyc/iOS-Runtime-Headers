/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CUICatalog, CUIMutableCatalog, NSBundle, NSMapTable, NSString, UITraitCollection, _UIAssetManager, _UICache;

@interface _UIAssetManager : NSObject {
    NSString *_assetManagerName;
    NSMapTable *_assetMap;
    NSBundle *_bundle;
    CUICatalog *_catalog;
    _UICache *_imageCache;
    BOOL _managingUIKitAssets;
    _UIAssetManager *_nextAssetManager;
    int _preferredIdiom;
    unsigned int _preferredIdiomSubtype;
    float _preferredScale;
    UITraitCollection *_preferredTraitCollection;
    CUIMutableCatalog *_runtimeCatalog;
    long onceToken_runtimeCatalog;
}

@property(readonly) NSBundle * bundle;
@property(readonly) NSString * carFileName;
@property(getter=_managingUIKitAssets,readonly) BOOL managingUIKitAssets;
@property(retain) _UIAssetManager * nextAssetManager;
@property float preferredScale;
@property(retain) UITraitCollection * preferredTraitCollection;
@property(readonly) CUIMutableCatalog * runtimeCatalog;

+ (void)_convertTraitCollection:(id)arg1 toCUIScale:(float*)arg2 CUIIdiom:(int*)arg3 UIKitIdiom:(int*)arg4 subtype:(int*)arg5;
+ (int)_userInterfaceIdiomForDeviceClass:(unsigned int)arg1;
+ (id)assetManagerForBundle:(id)arg1;
+ (id)createAssetNamed:(id)arg1 fromBundle:(id)arg2;
+ (id)sharedRuntimeAssetMap;
+ (id)sharedRuntimeCatalog;

- (id)_assetFromMapForName:(id)arg1;
- (id)_catalog;
- (void)_clearCachedResources:(id)arg1;
- (void)_insertAssetIntoMap:(id)arg1 forName:(id)arg2;
- (BOOL)_managingUIKitAssets;
- (void)_removeAssetFromMap:(id)arg1;
- (id)bundle;
- (id)carFileName;
- (id)dataNamed:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)disableCacheFlushing;
- (id)imageNamed:(id)arg1 idiom:(int)arg2 subtype:(unsigned int)arg3;
- (id)imageNamed:(id)arg1 idiom:(int)arg2;
- (id)imageNamed:(id)arg1 scale:(float)arg2 idiom:(int)arg3 subtype:(unsigned int)arg4 cachingOptions:(unsigned int)arg5 sizeClassPair:(struct { int x1; int x2; })arg6 attachCatalogImage:(BOOL)arg7;
- (id)imageNamed:(id)arg1 scale:(float)arg2 idiom:(int)arg3 subtype:(unsigned int)arg4;
- (id)imageNamed:(id)arg1 withTrait:(id)arg2;
- (id)imageNamed:(id)arg1;
- (id)initWithName:(id)arg1 inBundle:(id)arg2 idiom:(int)arg3;
- (id)nextAssetManager;
- (float)preferredScale;
- (id)preferredTraitCollection;
- (id)runtimeCatalog;
- (void)setNextAssetManager:(id)arg1;
- (void)setPreferredScale:(float)arg1;
- (void)setPreferredTraitCollection:(id)arg1;

@end
