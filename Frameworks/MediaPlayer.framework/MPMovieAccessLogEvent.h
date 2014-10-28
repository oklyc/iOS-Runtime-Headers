/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVPlayerItemAccessLogEvent, NSDate, NSString;

@interface MPMovieAccessLogEvent : NSObject <NSCopying> {
    AVPlayerItemAccessLogEvent *_event;
}

@property(readonly) NSString * URI;
@property(readonly) double durationWatched;
@property(readonly) double indicatedBitrate;
@property(readonly) long long numberOfBytesTransferred;
@property(readonly) int numberOfDroppedVideoFrames;
@property(readonly) unsigned int numberOfSegmentsDownloaded;
@property(readonly) unsigned int numberOfServerAddressChanges;
@property(readonly) int numberOfStalls;
@property(readonly) double observedBitrate;
@property(readonly) NSString * playbackSessionID;
@property(readonly) NSDate * playbackStartDate;
@property(readonly) double playbackStartOffset;
@property(readonly) double segmentsDownloadedDuration;
@property(readonly) NSString * serverAddress;

- (void).cxx_destruct;
- (id)URI;
- (id)_initWithAVItemAccessLogEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)durationWatched;
- (double)indicatedBitrate;
- (long long)numberOfBytesTransferred;
- (int)numberOfDroppedVideoFrames;
- (unsigned int)numberOfSegmentsDownloaded;
- (unsigned int)numberOfServerAddressChanges;
- (int)numberOfStalls;
- (double)observedBitrate;
- (id)playbackSessionID;
- (id)playbackStartDate;
- (double)playbackStartOffset;
- (double)segmentsDownloadedDuration;
- (id)serverAddress;

@end
