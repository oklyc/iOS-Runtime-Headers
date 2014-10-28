/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class NSArray, NSString, NSTimer, WAKView, WebDataSource, WebEvent, WebPluginController;

@interface WebHTMLViewPrivate : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    NSTimer *autoscrollTimer;
    WebEvent *autoscrollTriggerEvent;
    BOOL closed;
    WebDataSource *dataSource;
    BOOL drawingIntoLayer;
    BOOL exposeInputContext;
    BOOL handlingMouseDownEvent;
    BOOL ignoringMouseDraggedEvents;
    BOOL inScrollPositionChanged;
    struct WebHTMLViewInterpretKeyEventsParameters { struct KeyboardEvent {} *x1; boolx2; boolx3; boolx4; boolx5; } *interpretKeyEventsParameters;
    WebEvent *keyDownEvent;
    } lastScrollPosition;
    WAKView *layerHostingView;
    WebEvent *mouseDownEvent;
    NSArray *pageRects;
    BOOL paginateScreenContent;
    WebPluginController *pluginController;
    BOOL printing;
    SEL selectorForDoCommandBySelector;
    NSString *toolTip;
    id trackingRectOwner;
    void *trackingRectUserData;
    BOOL transparentBackground;
}

+ (void)initialize;

- (id).cxx_construct;
- (void)clear;
- (void)dealloc;
- (void)finalize;

@end
