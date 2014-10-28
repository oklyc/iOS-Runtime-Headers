/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class <SiriUIReviewsViewControllerDelegate>, NSMutableArray, NSString, SALocalSearchReviewList, UICollectionView, UIView;

@interface SiriUIReviewsViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    struct { 
        unsigned int didLoadCollectionView : 1; 
        unsigned int viewForRatingForReview : 1; 
        unsigned int offsetForRatingView : 1; 
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    NSMutableArray *_cellSizeForRowCache;
    } _delegateFlags;
    NSString *_providerName;
    UIView *_providerView;
    } _providerViewOffset;
    int _reviewCharacterLimit;
    SALocalSearchReviewList *_reviewList;
    <SiriUIReviewsViewControllerDelegate> *_reviewsDelegate;
    UIView *_totalRatingView;
    } _totalRatingViewOffset;
    float _verticalSpaceNeededForRatingView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * providerName;
@property(retain) UIView * providerView;
@property struct UIOffset { float x1; float x2; } providerViewOffset;
@property int reviewCharacterLimit;
@property(retain) SALocalSearchReviewList * reviewList;
@property <SiriUIReviewsViewControllerDelegate> * reviewsDelegate;
@property(readonly) Class superclass;
@property(retain) UIView * totalRatingView;
@property struct UIOffset { float x1; float x2; } totalRatingViewOffset;
@property float verticalSpaceNeededForRatingView;
@property(retain) UICollectionView * view;

- (void).cxx_destruct;
- (id)_displayStringForReviewCount:(int)arg1 providerName:(id)arg2 providerView:(id)arg3;
- (float)_effectiveContentWidthForItemCellsForWidth:(float)arg1;
- (float)_horizontalCellSpacing;
- (float)_minCellWidth;
- (int)_numberOfCells;
- (int)_numberOfColumnsForWidth:(float)arg1;
- (int)_numberOfRowsForWidth:(float)arg1;
- (id)_punchoutForIndexPath:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_reviewCollectionInsets;
- (int)_rowForItemAtIndex:(int)arg1 forWidth:(float)arg2;
- (struct CGSize { float x1; float x2; })_sizeForCellAtIndex:(int)arg1 forWidth:(float)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)configureReusableHeaderView:(id)arg1;
- (float)desiredHeightForWidth:(float)arg1;
- (void)didEndDisplayingReusableHeaderView:(id)arg1;
- (Class)headerViewClass;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)providerName;
- (id)providerView;
- (struct UIOffset { float x1; float x2; })providerViewOffset;
- (int)reviewCharacterLimit;
- (id)reviewList;
- (id)reviewsDelegate;
- (void)setProviderName:(id)arg1;
- (void)setProviderView:(id)arg1;
- (void)setProviderViewOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setReviewCharacterLimit:(int)arg1;
- (void)setReviewList:(id)arg1;
- (void)setReviewsDelegate:(id)arg1;
- (void)setTotalRatingView:(id)arg1;
- (void)setTotalRatingViewOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setVerticalSpaceNeededForRatingView:(float)arg1;
- (void)siriDidLayoutSnippetView;
- (id)totalRatingView;
- (struct UIOffset { float x1; float x2; })totalRatingViewOffset;
- (float)verticalSpaceNeededForRatingView;

@end
