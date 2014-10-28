/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSPDocumentResourceInfo : NSObject {
    NSString *_digestString;
    NSString *_extension;
    long long _fileSize;
    BOOL _isDownloadable;
    NSString *_locator;
}

@property(readonly) NSString * digestString;
@property(readonly) NSString * extension;
@property(readonly) long long fileSize;
@property(readonly) BOOL isDownloadable;
@property(readonly) NSString * locator;

- (void).cxx_destruct;
- (id)digestString;
- (id)extension;
- (long long)fileSize;
- (unsigned int)hash;
- (id)init;
- (id)initWithDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3 fileSize:(long long)arg4 isDownloadable:(BOOL)arg5;
- (BOOL)isDownloadable;
- (BOOL)isEqual:(id)arg1;
- (id)locator;

@end
