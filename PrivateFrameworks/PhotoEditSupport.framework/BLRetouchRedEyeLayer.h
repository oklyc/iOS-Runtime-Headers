/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class CIImage, NSMutableArray, UIImage;

@interface BLRetouchRedEyeLayer : BLRetouchLayer {
    CIImage *_ciSourceImage;
    NSMutableArray *_eyePoints;
    UIImage *_repairSourceImage;
    UIImage *_repairedImage;
}

@property(copy) NSMutableArray * eyePoints;
@property(retain) UIImage * repairSourceImage;
@property(retain) UIImage * repairedImage;

+ (id)addAutoRedEyeCorrection:(id)arg1 toLayerData:(id)arg2 maskSize:(struct CGSize { float x1; float x2; })arg3 newTimestampIncrement:(double*)arg4;
+ (int)indexOfPointNear:(struct CGPoint { float x1; float x2; })arg1 inEyePoints:(id)arg2 andMaskSize:(struct CGSize { float x1; float x2; })arg3;

- (float)amount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })area;
- (void)clearRedEyes;
- (void)dealloc;
- (id)eyePoints;
- (BOOL)hasLayerMask;
- (void)hasLayerMaskDidChange;
- (int)indexOfPointNear:(struct CGPoint { float x1; float x2; })arg1;
- (id)layerData;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maskFrame;
- (struct CGContext { }*)newContextForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 andScale:(float)arg3;
- (void)repairRedEyes;
- (id)repairSourceImage;
- (id)repairedImage;
- (void)setEyePoints:(id)arg1;
- (void)setLayerData:(id)arg1;
- (void)setRepairSourceImage:(id)arg1;
- (void)setRepairedImage:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tapAtPoint:(struct CGPoint { float x1; float x2; })arg1 actualLocation:(struct CGPoint { float x1; float x2; }*)arg2 foundEye:(BOOL*)arg3 addedEye:(BOOL*)arg4;

@end
