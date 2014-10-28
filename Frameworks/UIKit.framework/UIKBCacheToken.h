/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString;

@interface UIKBCacheToken : NSObject <NSCopying> {
    NSMutableArray *_components;
    int _emptyFields;
    NSString *_name;
    int _renderFlags;
    float _scale;
}

@property int displayHint;
@property int emptyFields;
@property(readonly) BOOL hasKey;
@property(retain) NSString * name;
@property int renderFlags;
@property int rowHint;
@property struct CGSize { float x1; float x2; } size;
@property(readonly) NSString * string;

+ (id)tokenForKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2 displayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
+ (id)tokenForKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2;
+ (id)tokenForKeyMask:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2 displayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
+ (id)tokenForKeyplane:(id)arg1;
+ (id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3;
+ (id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(struct CGSize { float x1; float x2; })arg4;
+ (id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3;

- (int)_writeArray:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (int)_writeEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (int)_writeNumber:(float)arg1 toStr:(char *)arg2;
- (int)_writeString:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)displayHint;
- (int)emptyFields;
- (BOOL)hasKey;
- (id)initWithComponents:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)name;
- (int)renderFlags;
- (int)rowHint;
- (void)setDisplayHint:(int)arg1;
- (void)setEmptyFields:(int)arg1;
- (void)setName:(id)arg1;
- (void)setRenderFlags:(int)arg1;
- (void)setRowHint:(int)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)string;
- (id)stringForComponentArray:(id)arg1 additionalValues:(id)arg2;
- (id)stringForConstruction:(id)arg1;
- (id)stringForKey:(id)arg1 state:(int)arg2;
- (id)stringForRenderFlags:(int)arg1 lightKeyboard:(BOOL)arg2;
- (id)stringForSplitState:(BOOL)arg1;
- (id)stringForState:(int)arg1;

@end
