/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CADisplayLink, NSArray;

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    float _anchorYPosition;
    } _contentSize;
    CADisplayLink *_displayLink;
    BOOL _easingUp;
    BOOL _holdingBoundsInvalidation;
    BOOL _isResting;
    NSArray *_layoutAttributes;
    double _prevTimestamp;
    BOOL _shouldDisplayLinkInvalidateLayout;
    } _targetContentOffset;
    BOOL _useInitialLayoutAttributesForRotation;
    } _visibleBounds;
}

@property float anchorYPosition;
@property struct CGSize { float x1; float x2; } contentSize;
@property(retain) CADisplayLink * displayLink;
@property BOOL easingUp;
@property(getter=isHoldingBoundsInvalidation) BOOL holdingBoundsInvalidation;
@property BOOL isResting;
@property(copy) NSArray * layoutAttributes;
@property double prevTimestamp;
@property BOOL shouldDisplayLinkInvalidateLayout;
@property struct CGPoint { float x1; float x2; } targetContentOffset;
@property(getter=isUsingInitialLayoutAttributesForRotation) BOOL useInitialLayoutAttributesForRotation;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleBounds;

+ (Class)layoutAttributesClass;

- (float)anchorYPosition;
- (float)bezierPointForPercentage:(float)arg1 anchor1:(float)arg2 anchor2:(float)arg3 control1:(float)arg4 control2:(float)arg5;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (id)displayLink;
- (void)displayLinkFired:(id)arg1;
- (BOOL)easingUp;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateDisplayLink;
- (BOOL)isHoldingBoundsInvalidation;
- (BOOL)isResting;
- (BOOL)isUsingInitialLayoutAttributesForRotation;
- (id)layoutAttributes;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (double)prevTimestamp;
- (void)reloadData;
- (void)setAnchorYPosition:(float)arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setEasingUp:(BOOL)arg1;
- (void)setHoldingBoundsInvalidation:(BOOL)arg1;
- (void)setIsResting:(BOOL)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setPrevTimestamp:(double)arg1;
- (void)setShouldDisplayLinkInvalidateLayout:(BOOL)arg1;
- (void)setTargetContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setUseInitialLayoutAttributesForRotation:(BOOL)arg1;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldDisplayLinkInvalidateLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })targetContentOffset;
- (void)updateContentSize;
- (void)updateFrames;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBounds;

@end
