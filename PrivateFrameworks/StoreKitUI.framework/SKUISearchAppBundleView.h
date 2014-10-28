/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, UILabel;

@interface SKUISearchAppBundleView : UIView {
    int _count;
    UILabel *_headerLabel;
    NSArray *_imageViews;
    NSArray *_labels;
}

@property int count;
@property(copy) NSString * headerTitle;

- (void).cxx_destruct;
- (void)_reload;
- (int)count;
- (id)headerTitle;
- (id)imageAtIndex:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCount:(int)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setImage:(id)arg1 atIndex:(int)arg2;
- (void)setTitle:(id)arg1 atIndex:(int)arg2;
- (id)titleAtIndex:(int)arg1;

@end
