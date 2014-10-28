/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor;

@interface SKUIStyledImageDataConsumer : SKUIImageDataConsumer {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGSize { 
        float width; 
        float height; 
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    } _borderWidths;
    } _imageSize;
    int _imageTreatment;
}

@property(retain) UIColor * backgroundColor;
@property(retain) UIColor * borderColor;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } borderWidths;
@property struct CGSize { float x1; float x2; } imageSize;
@property int imageTreatment;

+ (id)appIconConsumerWithSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)applePackIconConsumer;
+ (id)brickConsumer;
+ (id)brickConsumerWithBrickSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)cardIconConsumer;
+ (id)cardProductImageConsumer;
+ (id)categoryIconConsumer;
+ (id)giftComposeProductImageConsumer;
+ (id)giftResultIconConsumer;
+ (id)giftResultProductImageConsumer;
+ (id)giftThemeIconConsumer;
+ (id)giftThemeProductImageConsumer;
+ (id)gridIconConsumer;
+ (id)listIconConsumer;
+ (id)lockupIconConsumerWithSize:(int)arg1;
+ (id)lockupProductImageConsumerWithSize:(int)arg1;
+ (id)mixedTopChartsNewsstandConsumer;
+ (id)newsstandRoomNewsstandConsumer;
+ (id)newsstandSwooshNewsstandConsumer;
+ (id)parentBundleIconConsumer;
+ (id)productImageConsumerWithSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)productPageProductImageConsumer;
+ (id)purchasedIconConsumer;
+ (id)purchasedProductImageConsumer;
+ (id)roomIconConsumer;
+ (id)roomProductImageConsumer;
+ (id)safariBannerIconConsumer;
+ (id)safariBannerProductImageConsumer;
+ (id)shareSheetIconConsumer;
+ (id)swooshNewsstandConsumer;
+ (id)topChartsIconConsumer;
+ (id)topChartsNewsstandConsumer;
+ (id)updatesIconConsumer;
+ (id)updatesProductImageConsumer;
+ (id)wishlistIconConsumer;
+ (id)wishlistProductImageConsumer;

- (void).cxx_destruct;
- (id)_arcRoundedImageWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 cornerRadius:(float)arg3 drawBlock:(id)arg4;
- (BOOL)_backgroundIsOpaque;
- (id)_defaultPlaceholderColor;
- (void)_drawBordersWithImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_outputImageWithInputSize:(struct CGSize { float x1; float x2; })arg1 outputSize:(struct CGSize { float x1; float x2; })arg2 drawBlock:(id)arg3;
- (id)_scaledImageWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 drawBlock:(id)arg3;
- (id)_uberImageWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inputSize:(struct CGSize { float x1; float x2; })arg2 drawBlock:(id)arg3;
- (id)backgroundColor;
- (id)borderColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })borderWidths;
- (id)imageForColor:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)imageForColor:(id)arg1;
- (id)imageForImage:(id)arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (int)imageTreatment;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 treatment:(int)arg2;
- (id)initWithViewElement:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidths:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setImageTreatment:(int)arg1;

@end
