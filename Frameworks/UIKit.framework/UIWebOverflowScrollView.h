/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMNode, UIWebBrowserView, UIWebOverflowContentView, UIWebOverflowScrollListener;

@interface UIWebOverflowScrollView : UIScrollView {
    BOOL _beingRemoved;
    DOMNode *_node;
    UIWebOverflowContentView *_overflowContentView;
    UIWebOverflowScrollListener *_scrollListener;
    UIWebBrowserView *_webBrowserView;
}

@property(getter=isBeingRemoved) BOOL beingRemoved;
@property(retain) DOMNode * node;
@property(retain) UIWebOverflowContentView * overflowContentView;
@property(retain) UIWebOverflowScrollListener * scrollListener;
@property UIWebBrowserView * webBrowserView;

- (void)_replaceLayer:(id)arg1;
- (void)dealloc;
- (BOOL)fixUpViewAfterInsertion;
- (id)initWithLayer:(id)arg1 node:(id)arg2 webBrowserView:(id)arg3;
- (BOOL)isBeingRemoved;
- (id)node;
- (id)overflowContentView;
- (void)prepareForRemoval;
- (id)scrollListener;
- (void)setBeingRemoved:(BOOL)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setNode:(id)arg1;
- (void)setOverflowContentView:(id)arg1;
- (void)setScrollListener:(id)arg1;
- (void)setWebBrowserView:(id)arg1;
- (id)superview;
- (id)webBrowserView;

@end
