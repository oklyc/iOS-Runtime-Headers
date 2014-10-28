/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate> {
    struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); int (**x2)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF> {} *x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; struct MediaPlayer {} *x4; struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_5_1_1; } x5; struct function<void ()>={type=[12C] {} x6; struct __base<void ()> {} *x7; } *m_callback;
    int m_delayCallbacks;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)didEnd:(id)arg1;
- (void)disconnect;
- (id)initWithCallback:(struct MediaPlayerPrivateAVFoundationObjC { int (**x1)(); int (**x2)(); struct Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::InbandTextTrackPrivateAVF> {} *x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; struct MediaPlayer {} *x4; struct WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation> { struct RefPtr<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> > { struct WeakReference<WebCore::MediaPlayerPrivateAVFoundation> {} *x_1_2_1; } x_5_1_1; } x5; struct function<void ()>={type=[12C] {} x6; struct __base<void ()> {} *x7; }*)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)metadataLoaded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4;
- (void)outputSequenceWasFlushed:(id)arg1;

@end
