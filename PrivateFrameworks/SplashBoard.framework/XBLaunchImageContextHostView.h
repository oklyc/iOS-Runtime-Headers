/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CALayerHost, NSString;

@interface XBLaunchImageContextHostView : UIView {
    NSString *_bundleID;
    id _captureBlock;
    CALayerHost *_contentLayer;
    id _delegate;
    float _remoteScale;
    BOOL _saved;
}

@property(copy) id captureBlock;
@property float remoteScale;
@property(getter=isSaved) BOOL saved;

- (id)captureBlock;
- (void)connectToContextID:(unsigned int)arg1 bundleID:(id)arg2;
- (unsigned int)contextId;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)disconnect;
- (BOOL)isSaved;
- (float)remoteScale;
- (void)setCaptureBlock:(id)arg1;
- (void)setRemoteScale:(float)arg1;
- (void)setSaved:(BOOL)arg1;

@end
