/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSIndexSet, PUFeedViewControllerSpec, PUPhotoBrowserControllerSpec, PUPhotosGridViewControllerSpec, PUPhotosPickerViewControllerSpec;

@interface PUFeedViewControllerSpec : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    PUPhotosGridViewControllerSpec *_gridSpec;
    int _largeNumberOfSubjectsForLikes;
    int _largeTileFastImageFormat;
    } _largeTileMaximumFillingSize;
    int _largeTileQualityImageFormat;
    int _mediumTileFastImageFormat;
    } _mediumTileMaximumFillingSize;
    int _mediumTileQualityImageFormat;
    } _minimumVideoTileSize;
    PUPhotoBrowserControllerSpec *_photoBrowserSpec;
    PUPhotosPickerViewControllerSpec *_photosPickerSpec;
    PUFeedViewControllerSpec *_popoverFeedViewControllerSpec;
    int _promptType;
    NSIndexSet *_qualityImageFormats;
    BOOL _shouldHideBarsInLandscape;
    BOOL _shouldShowInvitationsInPopover;
    BOOL _shouldUseAspectThumbnails;
    BOOL _shouldUseFullscreenLayout;
    int _smallTileFastImageFormat;
    } _smallTileMaximumFittingSize;
    float _smallTilePanoAspectRatio;
    int _smallTilePanoQualityImageFormat;
    int _smallTileQualityImageFormat;
    int _squareThumbnailFastImageFormat;
    } _squareThumbnailMaximumSize;
    int _squareThumbnailQualityImageFormat;
    } _thumbnailSize;
    int _veryLargeTileFastImageFormat;
    int _veryLargeTileQualityImageFormat;
}

@property(readonly) PUPhotosGridViewControllerSpec * gridSpec;
@property(readonly) int largeNumberOfSubjectsForLikes;
@property(readonly) struct CGSize { float x1; float x2; } minimumVideoTileSize;
@property(readonly) PUPhotoBrowserControllerSpec * photoBrowserSpec;
@property(readonly) PUPhotosPickerViewControllerSpec * photosPickerSpec;
@property(readonly) PUFeedViewControllerSpec * popoverFeedViewControllerSpec;
@property(readonly) int promptType;
@property(copy) NSIndexSet * qualityImageFormats;
@property(readonly) BOOL shouldHideBarsInLandscape;
@property(readonly) BOOL shouldShowInvitationsInPopover;
@property(readonly) BOOL shouldUseAspectThumbnails;
@property(readonly) BOOL shouldUseFullscreenLayout;
@property(readonly) struct CGSize { float x1; float x2; } thumbnailSize;

- (void).cxx_destruct;
- (void)_setQualityImageFormats:(id)arg1;
- (BOOL)canUseSimplePreheatManager;
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; }*)arg1;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(int)arg2 collectionViewSize:(struct CGSize { float x1; float x2; })arg3 contentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
- (void)configureImageCell:(id)arg1 forSectionHeaderBackgroundInCollectionViewType:(int)arg2;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; }*)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(BOOL)arg4 collectionViewType:(int)arg5;
- (void)configureTextCell:(id)arg1 forCaption:(id)arg2;
- (void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(int)arg3;
- (void)configureTextCell:(id)arg1 forSectionFooterWithDateText:(id)arg2 collectionViewType:(int)arg3;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(int)arg3;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamAffordanceLabel:(id)arg3 actionText:(id)arg4 buttonType:(int)arg5 collectionViewType:(int)arg6 animated:(BOOL)arg7;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsetsForSectionType:(int)arg1 collectionViewType:(int)arg2;
- (id)defaultTextAttributesForCollectionViewType:(int)arg1;
- (id)emphasizedTextAttributesForCollectionViewType:(int)arg1;
- (void)getFastImageFormat:(out int*)arg1 qualityImageFormat:(out int*)arg2 forSourceSize:(struct CGSize { float x1; float x2; })arg3 destinationSize:(struct CGSize { float x1; float x2; })arg4 allowCrop:(BOOL)arg5;
- (void)getReferenceMaximumLength:(float*)arg1 minimumNumberOfTilesToOmit:(int*)arg2 forSectionType:(int)arg3 collectionViewType:(int)arg4;
- (id)gridSpec;
- (id)init;
- (int)largeNumberOfSubjectsForLikes;
- (struct CGSize { float x1; float x2; })minimumVideoTileSize;
- (id)photoBrowserSpec;
- (id)photosPickerSpec;
- (id)popoverFeedViewControllerSpec;
- (int)promptType;
- (id)qualityImageFormats;
- (BOOL)shouldHideBarsInLandscape;
- (BOOL)shouldShowCommentBadgesInCollectionViewType:(int)arg1;
- (BOOL)shouldShowDatesInSectionFootersInCollectionViewType:(int)arg1;
- (BOOL)shouldShowInvitationsInPopover;
- (BOOL)shouldShowLikeButtonForCollectionViewType:(int)arg1;
- (BOOL)shouldShowSeeAllInSectionFootersInCollectionViewType:(int)arg1;
- (BOOL)shouldShowStreamAffordanceInSectionHeaderWithCollectionViewType:(int)arg1;
- (BOOL)shouldUseAspectThumbnails;
- (BOOL)shouldUseFullscreenLayout;
- (float)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2;
- (struct CGSize { float x1; float x2; })thumbnailSize;
- (struct CGSize { float x1; float x2; })thumbnailSizeForImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)updateFormats;

@end
