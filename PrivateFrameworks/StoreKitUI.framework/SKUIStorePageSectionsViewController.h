/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIStorePageSectionsDelegate>, NSArray, NSIndexPath, NSMapTable, NSMutableArray, NSMutableIndexSet, NSString, NSValue, SKUICollectionView, SKUIColorScheme, SKUIIndexBarControl, SKUILayoutCache, SKUIMetricsController, SKUIMetricsImpressionSession, SKUIProductPageOverlayController, SKUIResourceLoader, SKUIStackedBar, SKUIStorePageSplitsDescription, UICollectionView, UITapGestureRecognizer, UIView;

@interface SKUIStorePageSectionsViewController : SKUIViewController <SKUIItemStateCenterObserver, SKUILayoutCacheDelegate, SKUIProductPageOverlayDelegate, SKUIResourceLoaderDelegate, SKUIStorePageCollectionViewDelegate, SKUIViewControllerTesting, UICollectionViewDataSource, UIGestureRecognizerDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    SKUIProductPageOverlayController *_activeOverlayController;
    SKUICollectionView *_collectionView;
    UITapGestureRecognizer *_collectionViewTapGestureRecognizer;
    SKUIColorScheme *_colorScheme;
    } _contentInsetAdjustments;
    id _deferredSplitsDescription;
    <SKUIStorePageSectionsDelegate> *_delegate;
    BOOL _delegateWantsDidScroll;
    BOOL _didInitialReload;
    NSMutableIndexSet *_expandInsertSections;
    NSMutableIndexSet *_expandRemoveSections;
    NSMapTable *_expandSectionContexts;
    int _ignoreSectionsChangeCount;
    SKUIIndexBarControl *_indexBarControl;
    NSIndexPath *_indexPathOfEditedCell;
    NSArray *_initialOverlayURLs;
    NSValue *_lastKnownSize;
    int _layoutStyle;
    NSMapTable *_menuSectionContexts;
    SKUIMetricsController *_metricsController;
    SKUIProductPageOverlayController *_overlayController;
    int _pinningTransitionStyle;
    BOOL _rendersWithPerspective;
    SKUIResourceLoader *_resourceLoader;
    BOOL _scrollOffsetHasChanged;
    NSMutableArray *_sections;
    SKUIStorePageSplitsDescription *_splitsDescription;
    UIView *_splitsDividerView;
    SKUIStackedBar *_stackedBar;
    SKUILayoutCache *_textLayoutCache;
}

@property(retain) SKUIMetricsImpressionSession * activeMetricsImpressionSession;
@property(readonly) UICollectionView * collectionView;
@property(copy) SKUIColorScheme * colorScheme;
@property(copy,readonly) NSString * debugDescription;
@property <SKUIStorePageSectionsDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(getter=isDisplayingOverlays,readonly) BOOL displayingOverlays;
@property(readonly) unsigned int hash;
@property(retain) SKUIIndexBarControl * indexBarControl;
@property(retain) SKUIMetricsController * metricsController;
@property int pinningTransitionStyle;
@property(readonly) NSArray * sections;
@property(readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (id)SKUIStackedBar;
- (void)_beginIgnoringSectionChanges;
- (id)_childSectionsForMenuComponent:(id)arg1 selectedIndex:(int)arg2;
- (id)_collectionViewSublayouts;
- (id)_createSectionsForExpandPageComponent:(id)arg1 context:(id)arg2 newSections:(id)arg3 sectionCount:(int)arg4 sectionsByViewElement:(id)arg5 updateStyle:(int)arg6;
- (id)_currentBackdropGroupName;
- (id)_defaultSectionForGridComponent:(id)arg1;
- (id)_defaultSectionForSwooshComponent:(id)arg1;
- (void)_deselectCellsForAppearance:(BOOL)arg1;
- (void)_endIgnoringSectionChanges;
- (void)_enumerateSectionContextsUsingBlock:(id)arg1;
- (void)_enumerateVisibleSectionsUsingBlock:(id)arg1;
- (id)_expandContextForMenuComponent:(id)arg1;
- (id)_impressionableViewElements;
- (void)_initSKUIStorePageSectionsViewController;
- (void)_insertSectionsWithComponents:(id)arg1 afterSection:(id)arg2;
- (void)_invalidateIfLastKnownSizeChanged;
- (void)_invalidateLayoutWithNewSize:(struct CGSize { float x1; float x2; })arg1 transitionCoordinator:(id)arg2;
- (id)_menuContextForMenuComponent:(id)arg1;
- (id)_newSectionContext;
- (id)_newSectionsWithPageComponent:(id)arg1;
- (id)_newSectionsWithPageComponents:(id)arg1;
- (id)_newStorePageCollectionViewLayout;
- (void)_pageSectionDidDismissOverlayController:(id)arg1;
- (void)_prefetchArtworkForVisibleSections;
- (id)_prepareLayoutForSections;
- (void)_reloadCollectionView;
- (id)_resourceLoader;
- (void)_scrollFirstAppearanceSectionToView;
- (id)_sectionsForChartsComponent:(id)arg1;
- (void)_setActiveProductPageOverlayController:(id)arg1;
- (void)_setPageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setRendersWithPerspective:(BOOL)arg1;
- (void)_setSelectedIndex:(int)arg1 forMenuSection:(id)arg2;
- (id)_splitForSectionIndex:(int)arg1;
- (id)_textLayoutCache;
- (void)_updateCollectionViewWithUpdates:(id)arg1;
- (void)_updateSectionsAfterMenuChange;
- (void)_updateSectionsForIndex:(int)arg1 menuSection:(id)arg2;
- (id)_visibleMetricsImpressionsString;
- (id)activeMetricsImpressionSession;
- (void)artworkLoaderDidIdle:(id)arg1;
- (BOOL)collectionView:(id)arg1 canScrollCellAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 editorialView:(id)arg2 didSelectLink:(id)arg3;
- (void)collectionView:(id)arg1 expandEditorialForLabelElement:(id)arg2 indexPath:(id)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 pinningContentInsetForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 layout:(id)arg2 pinningStyleForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 layout:(id)arg2 pinningTransitionStyleForItemAtIndexPath:(id)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 performDefaultActionForViewElement:(id)arg2 indexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView;
- (id)colorScheme;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)defaultSectionForComponent:(id)arg1;
- (id)delegate;
- (void)dismissOverlays;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)indexBarControl;
- (id)indexPathsForPinningItemsInCollectionView:(id)arg1 layout:(id)arg2;
- (id)initWithLayoutStyle:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isDisplayingOverlays;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)itemCollectionView:(id)arg1 didTapVideoForCollectionViewCell:(id)arg2;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)loadView;
- (id)metricsController;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (BOOL)performTestWithName:(id)arg1 options:(id)arg2;
- (int)pinningTransitionStyle;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (id)sections;
- (void)setActiveMetricsImpressionSession:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIndexBarControl:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setPinningTransitionStyle:(int)arg1;
- (void)setSKUIStackedBar:(id)arg1;
- (void)setSectionsWithPageComponents:(id)arg1;
- (void)setSectionsWithSplitsDescription:(id)arg1;
- (void)showOverlayWithProductPage:(id)arg1 metricsPageEvent:(id)arg2;
- (void)skuiCollectionViewWillLayoutSubviews:(id)arg1;
- (void)skui_viewWillAppear:(BOOL)arg1;
- (void)tapCollectionViewDidRecognize:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
