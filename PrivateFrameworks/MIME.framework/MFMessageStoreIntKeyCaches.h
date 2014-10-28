/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMapTable;

@interface MFMessageStoreIntKeyCaches : NSObject {
    NSMapTable *bodyCache;
    NSMapTable *bodyDataCache;
    NSMapTable *headerCache;
    NSMapTable *headerDataCache;
}

@property(retain) NSMapTable * bodyCache;
@property(retain) NSMapTable * bodyDataCache;
@property(retain) NSMapTable * headerCache;
@property(retain) NSMapTable * headerDataCache;

- (id)bodyCache;
- (id)bodyDataCache;
- (id)copyCacheForType:(unsigned int)arg1;
- (void)dealloc;
- (void)flush;
- (id)headerCache;
- (id)headerDataCache;
- (void)setBodyCache:(id)arg1;
- (void)setBodyDataCache:(id)arg1;
- (void)setCache:(id)arg1 forType:(unsigned int)arg2;
- (void)setHeaderCache:(id)arg1;
- (void)setHeaderDataCache:(id)arg1;

@end
