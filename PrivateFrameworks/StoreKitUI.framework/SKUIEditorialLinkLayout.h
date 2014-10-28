/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString;

@interface SKUIEditorialLinkLayout : NSObject <SKUICachedLayout> {
    struct CGSize { 
        float width; 
        float height; 
    NSArray *_links;
    struct CGSize { float x1; float x2; } *_sizes;
    } _totalSize;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSArray * links;
@property(readonly) Class superclass;
@property(readonly) struct CGSize { float x1; float x2; } totalSize;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateLinesUsingBlock:(id)arg1;
- (id)initWithLayoutRequest:(id)arg1;
- (id)links;
- (struct CGSize { float x1; float x2; })sizeForLinkAtIndex:(int)arg1;
- (struct CGSize { float x1; float x2; })totalSize;

@end
