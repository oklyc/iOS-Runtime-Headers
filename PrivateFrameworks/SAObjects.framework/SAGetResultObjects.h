/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAGetResultObjects : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSArray * objectIdentifiers;
@property(copy) NSString * refId;
@property(readonly) Class superclass;

+ (id)getResultObjects;
+ (id)getResultObjectsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)objectIdentifiers;
- (void)setObjectIdentifiers:(id)arg1;

@end
