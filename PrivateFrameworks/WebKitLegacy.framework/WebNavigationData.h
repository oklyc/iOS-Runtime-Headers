/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject {
    WebNavigationDataPrivate *_private;
}

- (id)clientRedirectSource;
- (void)dealloc;
- (BOOL)hasSubstituteData;
- (id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(BOOL)arg5 clientRedirectSource:(id)arg6;
- (id)originalRequest;
- (id)response;
- (id)title;
- (id)url;

@end
