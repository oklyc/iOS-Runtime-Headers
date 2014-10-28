/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString;

@interface CoreDAVParseRule : NSObject {
    NSString *_elementName;
    int _maximumNumber;
    int _minimumNumber;
    NSString *_nameSpace;
    Class _objectClass;
    SEL _setterMethod;
}

@property(readonly) NSString * elementName;
@property(readonly) int maximumNumber;
@property(readonly) int minimumNumber;
@property(readonly) NSString * nameSpace;
@property(readonly) Class objectClass;
@property(readonly) SEL setterMethod;

+ (id)ruleWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6;

- (void)dealloc;
- (id)description;
- (id)elementName;
- (id)initWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6;
- (int)maximumNumber;
- (int)minimumNumber;
- (id)nameSpace;
- (Class)objectClass;
- (SEL)setterMethod;

@end
