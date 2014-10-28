/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInput, AVAssetWriterInputMetadataAdaptorInternal;

@interface AVAssetWriterInputMetadataAdaptor : NSObject {
    AVAssetWriterInputMetadataAdaptorInternal *_internal;
}

@property(readonly) AVAssetWriterInput * assetWriterInput;

+ (id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1;
+ (void)initialize;

- (BOOL)appendTimedMetadataGroup:(id)arg1;
- (id)assetWriterInput;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithAssetWriterInput:(id)arg1;

@end
