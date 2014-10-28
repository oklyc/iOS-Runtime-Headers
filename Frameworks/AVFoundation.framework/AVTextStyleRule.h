/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVTextStyleRuleInternal, NSDictionary, NSString;

@interface AVTextStyleRule : NSObject <NSCopying> {
    AVTextStyleRuleInternal *_textStyleRule;
}

@property(readonly) NSDictionary * textMarkupAttributes;
@property(readonly) NSString * textSelector;

+ (id)propertyListForTextStyleRules:(id)arg1;
+ (id)textStyleRuleWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2;
+ (id)textStyleRuleWithTextMarkupAttributes:(id)arg1;
+ (id)textStyleRulesFromPropertyList:(id)arg1;

- (id)_dictionaryPlistRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)finalize;
- (unsigned int)hash;
- (id)initWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2;
- (id)initWithTextMarkupAttributes:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)textMarkupAttributes;
- (id)textSelector;

@end
