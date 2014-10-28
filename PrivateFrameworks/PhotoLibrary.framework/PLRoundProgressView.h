/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAShapeLayer, NSDate, NSTimer;

@interface PLRoundProgressView : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    CAShapeLayer *_circleLayer;
    float _increaseRate;
    } _pieCenter;
    float _pieRadius;
    NSDate *_prevUpdateTime;
    NSTimer *_progressTimer;
    float _realProgress;
    CAShapeLayer *_sliceLayer;
    int _style;
    float _uiProgress;
}

@property(readonly) int style;

- (void)_setupSubviews;
- (void)dealloc;
- (void)increaseUIProgress:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)recalculateIncreaseProgress:(float)arg1 withTimeDiff:(double)arg2;
- (void)resetProgress;
- (void)setInitialIncreaseRatePerFrame:(float)arg1;
- (void)setPieCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPieRadius:(float)arg1;
- (void)setProgress:(float)arg1;
- (void)startProgressTimer;
- (void)stopProgressTimer;
- (int)style;
- (float)toRadian:(float)arg1;

@end
