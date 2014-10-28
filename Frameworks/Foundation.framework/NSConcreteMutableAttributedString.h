/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableRLEArray, NSMutableString;

@interface NSConcreteMutableAttributedString : NSMutableAttributedString {
    struct { 
        unsigned int attributeFixingDisabled : 8; 
        unsigned int  : 24; 
    } fields;
    NSMutableRLEArray *mutableAttributes;
    NSMutableString *mutableString;
}

+ (Class)_mutableStringClass;
+ (BOOL)supportsSecureCoding;

- (id)_runArrayHoldingAttributes;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (Class)classForCoder;
- (void)dealloc;
- (void)edited:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3;
- (void)finalize;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithString:(id)arg1;
- (unsigned int)length;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)string;

@end
