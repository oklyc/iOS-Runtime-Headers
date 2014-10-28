/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext;

@interface SKUIErrorDocumentViewController : SKUIViewController <SKUIDocumentViewController> {
    SKUIClientContext *_clientContext;
    unsigned int _contentUnavailableStyle;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithBackgroundColor:(id)arg1 clientContext:(id)arg2;
- (void)loadView;

@end
