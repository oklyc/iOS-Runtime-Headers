/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSArray, NSData, NSDictionary, NSString;

@interface GKMatchRequestInternal : GKInternalRepresentation {
    unsigned char _defaultNumberOfPlayers;
    NSString *_inviteMessage;
    NSDictionary *_localizableInviteMessage;
    unsigned int _matchType;
    unsigned char _maxPlayers;
    unsigned char _minPlayers;
    unsigned int _playerAttributes;
    int _playerGroup;
    NSArray *_recipientPlayerIDs;
    NSArray *_recipients;
    NSString *_rid;
    NSData *_sessionToken;
    unsigned int _version;
}

@property unsigned char defaultNumberOfPlayers;
@property(copy) NSString * inviteMessage;
@property(retain) NSDictionary * localizableInviteMessage;
@property unsigned int matchType;
@property unsigned char maxPlayers;
@property unsigned char minPlayers;
@property unsigned int playerAttributes;
@property int playerGroup;
@property(retain) NSArray * recipientPlayerIDs;
@property(retain) NSArray * recipients;
@property(retain) NSString * rid;
@property(retain) NSData * sessionToken;
@property unsigned int version;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (unsigned char)defaultNumberOfPlayers;
- (unsigned int)hash;
- (id)init;
- (id)inviteMessage;
- (BOOL)isEqual:(id)arg1;
- (id)localizableInviteMessage;
- (unsigned int)matchType;
- (unsigned char)maxPlayers;
- (unsigned char)minPlayers;
- (unsigned int)playerAttributes;
- (int)playerGroup;
- (id)recipientPlayerIDs;
- (id)recipients;
- (id)rid;
- (id)sessionToken;
- (void)setDefaultNumberOfPlayers:(unsigned char)arg1;
- (void)setInviteMessage:(id)arg1;
- (void)setLocalizableInviteMessage:(id)arg1;
- (void)setMatchType:(unsigned int)arg1;
- (void)setMaxPlayers:(unsigned char)arg1;
- (void)setMinPlayers:(unsigned char)arg1;
- (void)setPlayerAttributes:(unsigned int)arg1;
- (void)setPlayerGroup:(int)arg1;
- (void)setRecipientPlayerIDs:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setRid:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;

@end
