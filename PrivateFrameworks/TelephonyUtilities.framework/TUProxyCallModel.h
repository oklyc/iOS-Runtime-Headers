/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUProxyCallModel : TUCallModel {
    BOOL _addCallAllowed;
    int _ambiguityState;
    BOOL _endAndAnswerAllowed;
    BOOL _hardPauseAvailable;
    BOOL _holdAllowed;
    BOOL _holdAndAnswerAllowed;
    BOOL _mergeable;
    BOOL _sendToVoicemailAllowed;
    BOOL _swappable;
    BOOL _takingCallsPrivateAllowed;
}

@property(getter=isAddCallAllowed) BOOL addCallAllowed;
@property int ambiguityState;
@property(getter=isEndAndAnswerAllowed) BOOL endAndAnswerAllowed;
@property(getter=isHardPauseAvailable) BOOL hardPauseAvailable;
@property(getter=isHoldAllowed) BOOL holdAllowed;
@property(getter=isHoldAndAnswerAllowed) BOOL holdAndAnswerAllowed;
@property(getter=isMergeable) BOOL mergeable;
@property(getter=isSendToVoicemailAllowed) BOOL sendToVoicemailAllowed;
@property(getter=isSwappable) BOOL swappable;
@property(getter=isTakingCallsPrivateAllowed) BOOL takingCallsPrivateAllowed;

+ (id)sharedInstance;

- (int)ambiguityState;
- (BOOL)isAddCallAllowed;
- (BOOL)isEndAndAnswerAllowed;
- (BOOL)isHardPauseAvailable;
- (BOOL)isHoldAllowed;
- (BOOL)isHoldAndAnswerAllowed;
- (BOOL)isMergeable;
- (BOOL)isSendToVoicemailAllowed;
- (BOOL)isSwappable;
- (BOOL)isTakingCallsPrivateAllowed;
- (void)setAddCallAllowed:(BOOL)arg1;
- (void)setAmbiguityState:(int)arg1;
- (void)setEndAndAnswerAllowed:(BOOL)arg1;
- (void)setHardPauseAvailable:(BOOL)arg1;
- (void)setHoldAllowed:(BOOL)arg1;
- (void)setHoldAndAnswerAllowed:(BOOL)arg1;
- (void)setMergeable:(BOOL)arg1;
- (void)setSendToVoicemailAllowed:(BOOL)arg1;
- (void)setSwappable:(BOOL)arg1;
- (void)setTakingCallsPrivateAllowed:(BOOL)arg1;
- (void)updateWithCallModelState:(id)arg1;

@end
