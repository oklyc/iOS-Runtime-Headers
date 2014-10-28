/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSAttributedString;

@interface _UILabelScaledMetrics : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    float _actualScaleFactor;
    float _baselineOffset;
    NSAttributedString *_scaledAttributedText;
    float _scaledBaselineOffset;
    float _scaledLineHeight;
    } _scaledSize;
    } _targetSize;
}

@property float actualScaleFactor;
@property float baselineOffset;
@property(retain) NSAttributedString * scaledAttributedText;
@property float scaledBaselineOffset;
@property float scaledLineHeight;
@property struct CGSize { float x1; float x2; } scaledSize;
@property struct CGSize { float x1; float x2; } targetSize;

- (float)actualScaleFactor;
- (float)baselineOffset;
- (void)dealloc;
- (id)scaledAttributedText;
- (float)scaledBaselineOffset;
- (float)scaledLineHeight;
- (struct CGSize { float x1; float x2; })scaledSize;
- (void)setActualScaleFactor:(float)arg1;
- (void)setBaselineOffset:(float)arg1;
- (void)setScaledAttributedText:(id)arg1;
- (void)setScaledBaselineOffset:(float)arg1;
- (void)setScaledLineHeight:(float)arg1;
- (void)setScaledSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTargetSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })targetSize;

@end
