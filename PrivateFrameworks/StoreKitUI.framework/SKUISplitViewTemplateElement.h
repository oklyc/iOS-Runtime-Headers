/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIJSDOMFeatureNavigationDocument, SKUIViewElement;

@interface SKUISplitViewTemplateElement : SKUIViewElement {
    SKUIJSDOMFeatureNavigationDocument *_leftNavigationDocument;
    int _preferredDisplayMode;
    SKUIJSDOMFeatureNavigationDocument *_rightNavigationDocument;
}

@property(readonly) SKUIJSDOMFeatureNavigationDocument * leftNavigationDocument;
@property(readonly) SKUIViewElement * leftSplitElement;
@property(readonly) int preferredDisplayMode;
@property(readonly) SKUIJSDOMFeatureNavigationDocument * rightNavigationDocument;
@property(readonly) SKUIViewElement * rightSplitElement;
@property(readonly) BOOL usesInlineSplitContent;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)_splitElementForIndex:(int)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)leftNavigationDocument;
- (id)leftSplitElement;
- (int)preferredDisplayMode;
- (id)rightNavigationDocument;
- (id)rightSplitElement;
- (BOOL)usesInlineSplitContent;

@end
