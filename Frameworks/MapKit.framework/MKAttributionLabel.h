/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAttributionLabel : UILabel {
    unsigned int _mapType;
    BOOL _useDarkText;
}

@property unsigned int mapType;

- (id)_attributesWithStroke:(BOOL)arg1;
- (void)_prepareLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (unsigned int)mapType;
- (void)setMapType:(unsigned int)arg1;

@end
