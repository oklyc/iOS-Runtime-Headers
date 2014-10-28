/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKLinkedList, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GKThreadsafeCache : NSObject <GKCache> {
    GKLinkedList *_cacheList;
    unsigned int _count;
    NSMutableDictionary *_dictionary;
    unsigned int _maxCount;
    NSMutableDictionary *_missingEntryQueues;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property(retain) GKLinkedList * cacheList;
@property unsigned int count;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSMutableDictionary * dictionary;
@property(readonly) unsigned int hash;
@property unsigned int maxCount;
@property(retain) NSMutableDictionary * missingEntryQueues;
@property(readonly) Class superclass;
@property NSObject<OS_dispatch_queue> * syncQueue;

- (id)cacheList;
- (unsigned int)count;
- (void)dealloc;
- (id)dictionary;
- (id)initWithName:(id)arg1 maxCount:(unsigned int)arg2;
- (id)internalObjectForKey:(id)arg1;
- (void)internalSetObject:(id)arg1 forKey:(id)arg2;
- (unsigned int)maxCount;
- (id)missingEntryQueues;
- (id)objectForKey:(id)arg1 withMissingHandler:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setCacheList:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setDictionary:(id)arg1;
- (void)setMaxCount:(unsigned int)arg1;
- (void)setMissingEntryQueues:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setSyncQueue:(id)arg1;
- (id)syncQueue;

@end
