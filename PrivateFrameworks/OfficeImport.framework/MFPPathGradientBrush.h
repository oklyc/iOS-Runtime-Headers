/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, OITSDBezierPath, OITSUColor;

@interface MFPPathGradientBrush : MFPGradientBrush {
    struct CGPoint { 
        float x; 
        float y; 
    OITSUColor *mCenterColor;
    } mCenterPoint;
    OITSDBezierPath *mPath;
    NSArray *mSurroundColors;
}

- (id).cxx_construct;
- (void)createShading;
- (void)dealloc;
- (id)endColor;
- (void)setCenterColor:(id)arg1;
- (void)setCenterPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPath:(id)arg1;
- (void)setSurroundColors:(id)arg1;
- (id)startColor;

@end
