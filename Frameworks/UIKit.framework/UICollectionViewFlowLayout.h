/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, NSMutableArray, NSMutableDictionary, _UIFlowLayoutInfo;

@interface UICollectionViewFlowLayout : UICollectionViewLayout {
    struct { 
        unsigned int delegateSizeForItem : 1; 
        unsigned int delegateReferenceSizeForHeader : 1; 
        unsigned int delegateReferenceSizeForFooter : 1; 
        unsigned int delegateInsetForSection : 1; 
        unsigned int delegateInteritemSpacingForSection : 1; 
        unsigned int delegateLineSpacingForSection : 1; 
        unsigned int delegateAlignmentOptions : 1; 
        unsigned int layoutDataIsValid : 1; 
        unsigned int delegateInfoIsValid : 1; 
        unsigned int roundsToScreenScale : 1; 
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
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGSize { 
        float width; 
        float height; 
    } _contentOffsetAdjustment;
    } _contentSizeAdjustment;
    } _currentLayoutSize;
    _UIFlowLayoutInfo *_data;
    NSMutableDictionary *_deletedItemsAttributesDict;
    NSMutableDictionary *_deletedSectionFootersAttributesDict;
    NSMutableDictionary *_deletedSectionHeadersAttributesDict;
    } _estimatedItemSize;
    } _footerReferenceSize;
    } _gridLayoutFlags;
    } _headerReferenceSize;
    NSMutableArray *_indexPathsToValidate;
    NSMutableDictionary *_insertedItemsAttributesDict;
    NSMutableDictionary *_insertedSectionFootersAttributesDict;
    NSMutableDictionary *_insertedSectionHeadersAttributesDict;
    float _interitemSpacing;
    } _itemSize;
    float _lineSpacing;
    NSDictionary *_rowAlignmentsOptionsDictionary;
    int _scrollDirection;
    } _sectionInset;
}

@property struct CGSize { float x1; float x2; } estimatedItemSize;
@property struct CGSize { float x1; float x2; } footerReferenceSize;
@property struct CGSize { float x1; float x2; } headerReferenceSize;
@property struct CGSize { float x1; float x2; } itemSize;
@property float minimumInteritemSpacing;
@property float minimumLineSpacing;
@property int scrollDirection;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } sectionInset;

+ (Class)invalidationContextClass;

- (struct CGSize { float x1; float x2; })_estimatedItemSize;
- (BOOL)_estimatesSizes;
- (void)_fetchItemsInfoForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForFooterInSection:(int)arg1 usingData:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForHeaderInSection:(int)arg1 usingData:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForItem:(int)arg1 inSection:(int)arg2 usingData:(id)arg3;
- (void)_getSizingInfos;
- (void)_invalidateButKeepAllInfo;
- (void)_invalidateButKeepDelegateInfo;
- (id)_layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_roundsToScreenScale;
- (id)_rowAlignmentOptions;
- (int)_sectionArrayIndexForIndexPath:(id)arg1;
- (void)_setEstimatedItemSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setNeedsLayoutComputationWithoutInvalidation;
- (void)_setRoundsToScreenScale:(BOOL)arg1;
- (void)_setRowAlignmentsOptions:(id)arg1;
- (void)_updateContentSizeScrollingDimensionWithDelta:(float)arg1;
- (void)_updateDelegateFlags;
- (void)_updateItemsLayoutForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize { float x1; float x2; })estimatedItemSize;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForFooterInDeletedSection:(int)arg1;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(int)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGSize { float x1; float x2; })footerReferenceSize;
- (struct CGSize { float x1; float x2; })headerReferenceSize;
- (id)indexPathForItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 usingData:(id)arg2;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 usingData:(id)arg2;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialLayoutAttributesForFooterInInsertedSection:(int)arg1;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(int)arg1;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (struct CGSize { float x1; float x2; })itemSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForFooterInSection:(int)arg1 usingData:(id)arg2;
- (id)layoutAttributesForFooterInSection:(int)arg1;
- (id)layoutAttributesForHeaderInSection:(int)arg1 usingData:(id)arg2;
- (id)layoutAttributesForHeaderInSection:(int)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (float)minimumInteritemSpacing;
- (float)minimumLineSpacing;
- (void)prepareLayout;
- (int)scrollDirection;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionInset;
- (void)setEstimatedItemSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFooterReferenceSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setHeaderReferenceSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setItemSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMinimumInteritemSpacing:(float)arg1;
- (void)setMinimumLineSpacing:(float)arg1;
- (void)setScrollDirection:(int)arg1;
- (void)setSectionInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (struct CGSize { float x1; float x2; })synchronizeLayout;

@end
