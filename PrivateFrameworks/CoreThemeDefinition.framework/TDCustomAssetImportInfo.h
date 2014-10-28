/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class CUIRenditionKey, NSDate, NSObject<TDCustomAssetSource>, NSString;

@interface TDCustomAssetImportInfo : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _alignmentRect;
    NSObject<TDCustomAssetSource> *_customAsset;
    NSString *_elementName;
    NSDate *_modificationDate;
    NSString *_name;
    NSString *_partName;
    CUIRenditionKey *_renditionKey;
    int _renditionType;
    } _resizableSliceSize;
    int _resizingMode;
    } _sliceInsets;
    int _templateRenderingMode;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } alignmentRect;
@property(retain) NSObject<TDCustomAssetSource> * customAsset;
@property(copy) NSString * elementName;
@property BOOL isTemplate;
@property(copy) NSDate * modificationDate;
@property(copy) NSString * name;
@property(copy) NSString * partName;
@property(copy) CUIRenditionKey * renditionKey;
@property int renditionType;
@property struct CGSize { float x1; float x2; } resizableSliceSize;
@property int resizingMode;
@property struct { float x1; float x2; float x3; float x4; } sliceInsets;
@property int templateRenderingMode;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRect;
- (id)customAsset;
- (void)dealloc;
- (id)elementName;
- (BOOL)isTemplate;
- (id)modificationDate;
- (id)name;
- (id)partName;
- (id)renditionKey;
- (int)renditionSubtype;
- (int)renditionType;
- (struct CGSize { float x1; float x2; })resizableSliceSize;
- (int)resizingMode;
- (void)setAlignmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCustomAsset:(id)arg1;
- (void)setElementName:(id)arg1;
- (void)setIsTemplate:(BOOL)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPartName:(id)arg1;
- (void)setRenditionKey:(id)arg1;
- (void)setRenditionType:(int)arg1;
- (void)setResizableSliceSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setResizingMode:(int)arg1;
- (void)setSliceInsets:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setTemplateRenderingMode:(int)arg1;
- (struct { float x1; float x2; float x3; float x4; })sliceInsets;
- (int)templateRenderingMode;

@end
