/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUISlideshowItemViewControllerDelegate>, NSString, SKUIClientContext, SKUISlideshowImageScrollView, UIImage, UIView;

@interface SKUISlideshowItemViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate> {
    struct CGPoint { 
        float x; 
        float y; 
    SKUIClientContext *_clientContext;
    <SKUISlideshowItemViewControllerDelegate> *_delegate;
    SKUISlideshowImageScrollView *_imageScrollView;
    int _indexInCollection;
    } _lastContentOffset;
    float _lastZoomScale;
    UIView *_loadingView;
    BOOL _zoomingGestureThresholdBroken;
}

@property(retain) SKUIClientContext * clientContext;
@property(copy,readonly) NSString * debugDescription;
@property <SKUISlideshowItemViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) SKUISlideshowImageScrollView * imageScrollView;
@property int indexInCollection;
@property(retain) UIImage * itemImage;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (id)_newLoadingView;
- (void)_pinchGestureAction:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)imageScrollView;
- (int)indexInCollection;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)itemImage;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIndexInCollection:(int)arg1;
- (void)setItemImage:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
