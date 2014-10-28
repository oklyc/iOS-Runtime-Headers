/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKPlaceViewNearbyAppsCellDelegate>, NSArray, NSLayoutConstraint, NSString, UICollectionView, UILabel, _MKNearbyAppsFlowLayout;

@interface MKPlaceViewNearbyAppsCell : ABContactCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    struct CGSize { 
        float width; 
        float height; 
    NSLayoutConstraint *_collectionHeightConstraint;
    UICollectionView *_collectionView;
    <MKPlaceViewNearbyAppsCellDelegate> *_delegate;
    _MKNearbyAppsFlowLayout *_flowLayout;
    NSLayoutConstraint *_headerBaselineConstraint;
    UILabel *_headerLabel;
    } _iconSize;
    NSArray *_storeItems;
}

@property(copy,readonly) NSString * debugDescription;
@property <MKPlaceViewNearbyAppsCellDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSArray * storeItems;
@property(readonly) Class superclass;

+ (float)_headerBaselineOffsetFromTop;
+ (id)_headerLabelFont;
+ (struct CGSize { float x1; float x2; })_iconSize;
+ (float)contentHeight;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)delegate;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)setDelegate:(id)arg1;
- (void)setStoreItems:(id)arg1;
- (id)storeItems;
- (void)tintColorDidChange;

@end
