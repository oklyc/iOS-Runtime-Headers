/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@class NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface VTPhraseSpotter : NSObject {
    NSObject<OS_dispatch_queue> *_assetChangedQueue;
    NSString *_audioFileDir;
    BOOL _audioLoggingEnabled;
    NSString *_configData;
    NSString *_configLocale;
    NSString *_configPath;
    NSString *_configVersion;
    unsigned long long _earlyDetectResetAtSampleCount;
    double _earlyDetectTime;
    double _hardwareSampleRate;
    int _heartbeatCounter;
    BOOL _inactivityTimerSet;
    BOOL _isInactiveUser;
    int _languageCodeChangedNotificationToken;
    NSObject<OS_dispatch_source> *_languageCodeChangedSource;
    unsigned long long _lastEventEnd;
    double _lastScore;
    NSString *_locale;
    unsigned long long _loggingPreDelay;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    unsigned long long _loggingResetTimeout;
    void *_ndetect;
    NSObject<OS_dispatch_queue> *_ndetectQueue;
    BOOL _pretriggered;
    unsigned long long _sampleCountAtFirstChance;
    unsigned long long _samplecount;
    unsigned long long _samplecountAtLastTriggerEnd;
    unsigned long long _samplecountAtLastTriggerStart;
    unsigned long long _samplerate;
    unsigned long long _secondChanceResetAtSampleCount;
    int _siriLastUseUpdatedNotificationToken;
    int _suggestedThreshold;
    int _suggestedThresholdChangedNotificationToken;
    double _threshold;
    double _thresholdInactiveUser;
    double _thresholdInactiveUserSecondChance;
    double _thresholdLogNearMisses;
    double _thresholdSecondChance;
    double _thresholdSiriUp;
    NSArray *_triggerPhrases;
}

@property(readonly) double lastScore;
@property(readonly) unsigned long long sampleCount;
@property(readonly) unsigned long long sampleCountAtEndOfTrigger;
@property(readonly) unsigned long long sampleCountAtStartOfTrigger;
@property(readonly) unsigned long long samplerate;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_analyzeEvents:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; float x4; boolx5; }*)arg1;
- (id)_analyzeMakeResult:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; float x4; boolx5; }*)arg1 isNearMiss:(BOOL)arg2 isSecondChance:(BOOL)arg3 effectiveThreshold:(double)arg4;
- (void)_analyzeReset;
- (void)_assetsAvailable:(id)arg1;
- (id)_capturePath:(BOOL)arg1;
- (void)_checkSiriIsActive;
- (void)_commonInit;
- (BOOL)_configureWithConfig:(id)arg1 resourcePath:(id)arg2 triggerThreshold:(double)arg3;
- (BOOL)_configureWithDefaults;
- (void)_handleAssetChange:(double)arg1 onlyIfLocaleChanged:(BOOL)arg2;
- (void)_listenForLanguageCodeUpdates;
- (void)_listenForSuggestedThreshold;
- (void)_logMetaData:(id)arg1;
- (double)_thresholdFromNdetect:(void*)arg1 withName:(const char *)arg2 defaultTo:(double)arg3;
- (void)_unlistenForLanguageCodeUpdates;
- (void)_unlistenForSuggestedThreshold;
- (void)_updateLocale;
- (void)_updateSuggestedThreshold;
- (id)analyze:(struct AudioBuffer { unsigned int x1; unsigned int x2; void *x3; })arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConfig:(id)arg1 resourcePath:(id)arg2 triggerThreshold:(double)arg3;
- (id)initWithHardwareSampleRate:(double)arg1;
- (double)lastScore;
- (unsigned long long)sampleCount;
- (unsigned long long)sampleCountAtEndOfTrigger;
- (unsigned long long)sampleCountAtStartOfTrigger;
- (unsigned long long)samplerate;

@end
