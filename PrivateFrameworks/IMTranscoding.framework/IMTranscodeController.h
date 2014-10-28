/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMTranscoding.framework/IMTranscoding
 */

@class NSObject<OS_xpc_object>;

@interface IMTranscodeController : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;

- (BOOL)_connect;
- (void)_disconnected;
- (void)_transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(int)arg4 highQualityMaxByteSize:(unsigned long)arg5 lowQualityMaxByteSize:(unsigned long)arg6 maxDimension:(unsigned long)arg7 transcoderUserInfo:(id)arg8 representations:(int)arg9 retries:(int)arg10 completionBlock:(id)arg11;
- (void)dealloc;
- (id)init;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(int)arg4 highQualityMaxByteSize:(unsigned long)arg5 lowQualityMaxByteSize:(unsigned long)arg6 maxDimension:(unsigned long)arg7 transcoderUserInfo:(id)arg8 representations:(int)arg9 completionBlock:(id)arg10;

@end
