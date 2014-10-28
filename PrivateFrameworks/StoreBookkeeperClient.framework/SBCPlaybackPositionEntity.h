/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@class NSString, SBCPlaybackPositionDomain;

@interface SBCPlaybackPositionEntity : NSObject <NSCopying, NSSecureCoding> {
    double _bookmarkTime;
    double _bookmarkTimestamp;
    long long _foreignDatabaseEntityID;
    BOOL _hasBeenPlayed;
    SBCPlaybackPositionDomain *_playbackPositionDomain;
    NSString *_ubiquitousIdentifier;
    unsigned int _userPlayCount;
}

@property double bookmarkTime;
@property double bookmarkTimestamp;
@property(readonly) long long foreignDatabaseEntityID;
@property BOOL hasBeenPlayed;
@property(readonly) SBCPlaybackPositionDomain * playbackPositionDomain;
@property(readonly) NSString * ubiquitousIdentifier;
@property unsigned int userPlayCount;

+ (BOOL)supportsSecureCoding;
+ (id)ubiquitousIdentifierWithItemTitle:(id)arg1 albumName:(id)arg2 itemArtistName:(id)arg3;
+ (id)ubiquitousIdentifierWithPodcastFeedURL:(id)arg1 feedGUID:(id)arg2;
+ (id)ubiquitousIdentifierWithUniqueStoreID:(long long)arg1;
+ (id)ubiquitousIdentifierWithiTunesUFeedURL:(id)arg1 feedGUID:(id)arg2;

- (void).cxx_destruct;
- (id)SBKUniversalPlaybackPositionMetadata;
- (double)bookmarkTime;
- (double)bookmarkTimestamp;
- (id)copyWithValuesFromSBKUniversalPlaybackPositionMetadata:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)foreignDatabaseEntityID;
- (BOOL)hasBeenPlayed;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaybackPositionDomain:(id)arg1 ubiquitousIdentifier:(id)arg2 foreignDatabaseEntityID:(long long)arg3;
- (id)playbackPositionDomain;
- (void)setBookmarkTime:(double)arg1;
- (void)setBookmarkTimestamp:(double)arg1;
- (void)setHasBeenPlayed:(BOOL)arg1;
- (void)setUserPlayCount:(unsigned int)arg1;
- (id)ubiquitousIdentifier;
- (unsigned int)userPlayCount;

@end
