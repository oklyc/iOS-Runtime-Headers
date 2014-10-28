/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray;

@interface MPShuffledItemGroup : NSObject <NSSecureCoding> {
    long long _groupPersistentID;
    NSMutableArray *_mutableItems;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupPersistentID:(long long)arg1;

@end
