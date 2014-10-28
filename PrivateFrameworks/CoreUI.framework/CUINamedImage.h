/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIRenditionKey, NSString;

@interface CUINamedImage : NSObject {
    CUIRenditionKey *_key;
    NSString *_name;
    unsigned int _storageRef;
}

@property(readonly) struct { float x1; float x2; float x3; float x4; } alignmentEdgeInsets;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } alignmentRect;
@property(readonly) int blendMode;
@property(readonly) struct { float x1; float x2; float x3; float x4; } edgeInsets;
@property(readonly) int exifOrientation;
@property(readonly) BOOL hasSliceInformation;
@property(readonly) struct CGImage { }* image;
@property(readonly) int imageType;
@property(readonly) BOOL isStructured;
@property(readonly) BOOL isTemplate;
@property(readonly) BOOL isVectorBased;
@property(copy) NSString * name;
@property(readonly) float opacity;
@property(readonly) int resizingMode;
@property(readonly) float scale;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) int templateRenderingMode;

- (id)UIImage;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (id)_themeStore;
- (struct { float x1; float x2; float x3; float x4; })alignmentEdgeInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRect;
- (id)baseKey;
- (int)blendMode;
- (void)dealloc;
- (id)description;
- (struct { float x1; float x2; float x3; float x4; })edgeInsets;
- (int)exifOrientation;
- (int)graphicsClass;
- (BOOL)hasSliceInformation;
- (int)idiom;
- (struct CGImage { }*)image;
- (int)imageType;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned int)arg3;
- (BOOL)isStructured;
- (BOOL)isTemplate;
- (BOOL)isVectorBased;
- (int)memoryClass;
- (id)name;
- (float)opacity;
- (float)positionOfSliceBoundary:(unsigned int)arg1;
- (id)renditionKey;
- (int)resizingMode;
- (float)scale;
- (void)setName:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (int)sizeClassHorizontal;
- (int)sizeClassVertical;
- (unsigned int)subtype;
- (int)templateRenderingMode;
- (id)traitCollection;

@end
