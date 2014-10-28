/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUReviewScrubberDataSource>, <PUReviewScrubberDelegate>, NSString, PUHorizontalCollectionViewLayout, UICollectionView, UIImageView, UITapGestureRecognizer, _UIBackdropView;

@interface PUReviewScrubber : UIToolbar <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {
    UIImageView *__arrowImageView;
    _UIBackdropView *__backdropView;
    UICollectionView *__collectionView;
    PUHorizontalCollectionViewLayout *__collectionViewLayout;
    BOOL __ignoreScrollViewDidScrollUpdate;
    unsigned int __numberOfPhotos;
    BOOL __performingInteractiveUpdate;
    UIImageView *__shadowView;
    UITapGestureRecognizer *__tapGestureRecognizer;
    <PUReviewScrubberDataSource> *_dataSource;
    <PUReviewScrubberDelegate> *_scrubberDelegate;
    int _selectedIndex;
}

@property(readonly) UIImageView * _arrowImageView;
@property(readonly) _UIBackdropView * _backdropView;
@property(readonly) UICollectionView * _collectionView;
@property(readonly) PUHorizontalCollectionViewLayout * _collectionViewLayout;
@property(readonly) BOOL _ignoreScrollViewDidScrollUpdate;
@property(readonly) unsigned int _numberOfPhotos;
@property(readonly) BOOL _performingInteractiveUpdate;
@property(readonly) UIImageView * _shadowView;
@property(readonly) UITapGestureRecognizer * _tapGestureRecognizer;
@property <PUReviewScrubberDataSource> * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property <PUReviewScrubberDelegate> * scrubberDelegate;
@property int selectedIndex;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_arrowImageView;
- (id)_backdropView;
- (id)_collectionView;
- (id)_collectionViewLayout;
- (void)_commonPUReviewScrubberInitialization;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)_handleTapOnReviewScrubber:(id)arg1;
- (BOOL)_ignoreScrollViewDidScrollUpdate;
- (int)_indexOfCellAtContentOffset:(struct CGPoint { float x1; float x2; })arg1 ofScrollView:(id)arg2;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint { float x1; float x2; })arg2 excludingIndexPath:(id)arg3;
- (void)_notifyDelegateOfScrub;
- (void)_notifyDelegateOfSelection;
- (unsigned int)_numberOfPhotos;
- (BOOL)_performingInteractiveUpdate;
- (id)_shadowView;
- (id)_tapGestureRecognizer;
- (void)_updateContentOffsetForSelectedIndexAnimated:(BOOL)arg1;
- (void)_updateToSelectedIndex:(int)arg1;
- (void)beginInteractiveUpdate;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGPoint { float x1; float x2; })contentOffsetForIndexOfTickMark:(int)arg1 ofScrollView:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (void)finishInteractiveUpdate;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isMinibar;
- (void)layoutSubviews;
- (void)reloadData;
- (void)reloadIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)reloadSelectedIndexAnimated:(BOOL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (id)scrubberDelegate;
- (int)selectedIndex;
- (void)setDataSource:(id)arg1;
- (void)setScrubberDelegate:(id)arg1;
- (void)setSelectedIndex:(int)arg1 animated:(BOOL)arg2;
- (void)setSelectedIndex:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)toggleIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)toggleSelectedIndexAnimated:(BOOL)arg1;
- (void)updateWithAbsoluteProgress:(float)arg1;

@end
