/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSMutableDictionary, NSString;

@interface UIFontDescriptor : NSObject <NSCopying, NSCoding> {
    NSMutableDictionary *_attributes;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved5;
}

@property(readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } matrix;
@property(readonly) float pointSize;
@property(readonly) NSString * postscriptName;
@property(readonly) unsigned int symbolicTraits;

+ (id)_createMungledDictionary:(id)arg1;
+ (id)defaultFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 options:(unsigned int)arg3;
+ (id)defaultFontDescriptorWithTextStyle:(id)arg1;
+ (id)fontDescriptorWithFontAttributes:(id)arg1;
+ (id)fontDescriptorWithName:(id)arg1 matrix:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
+ (id)fontDescriptorWithName:(id)arg1 size:(float)arg2;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 options:(unsigned int)arg3;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)_attributes;
- (id)_initWithFontAttributes:(id)arg1 options:(unsigned int)arg2;
- (id)_visibleName;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fontAttributes;
- (id)fontDescriptorByAddingAttributes:(id)arg1;
- (id)fontDescriptorWithFace:(id)arg1;
- (id)fontDescriptorWithFamily:(id)arg1;
- (id)fontDescriptorWithMatrix:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)fontDescriptorWithSize:(float)arg1;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFontAttributes:(id)arg1;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)arg1;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })matrix;
- (id)objectForKey:(id)arg1;
- (float)pointSize;
- (id)postscriptName;
- (unsigned int)symbolicTraits;

@end
