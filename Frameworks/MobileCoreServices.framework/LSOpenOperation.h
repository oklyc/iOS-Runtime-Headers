/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSDictionary, NSString, NSURL;

@interface LSOpenOperation : NSOperation {
    NSString *_applicationIdentifier;
    id _delegate;
    NSString *_documentIdentifier;
    BOOL _executing;
    BOOL _finished;
    NSDictionary *_options;
    NSURL *_resourceURL;
    int _result;
    BOOL _sourceIsManaged;
    id _userInfoPlist;
}

- (void)completeOperation;
- (void)dealloc;
- (BOOL)didSucceed;
- (id)initForOpeningResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)start;

@end
