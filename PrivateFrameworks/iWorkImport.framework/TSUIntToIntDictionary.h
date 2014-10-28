/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (id)allKeys;
- (id)allValues;
- (void)applyFromIntToIntDictionary:(id)arg1;
- (id)arrayOfBoxedKeys;
- (BOOL)containsKey:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1;
- (int)intForKey:(int)arg1;
- (BOOL)intIsPresentForKey:(int)arg1 outValue:(int*)arg2;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFDictionary { }*)p_cfDictionary;
- (void)removeAllInts;
- (void)removeIntForKey:(int)arg1;
- (void)setInt:(int)arg1 forKey:(int)arg2;

@end
