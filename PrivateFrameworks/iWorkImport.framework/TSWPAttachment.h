/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSWPStorage;

@interface TSWPAttachment : TSPObject <TSKDocumentObject, TSDOwningAttachment, TSPCopying> {
    TSWPStorage *_parentStorage;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long enabledKnobMask;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isAnchored;
@property(readonly) BOOL isAttachedToBodyText;
@property(readonly) BOOL isDrawable;
@property(readonly) BOOL isPartitioned;
@property(readonly) BOOL isSearchable;
@property TSWPStorage * parentStorage;
@property(readonly) Class positionerClass;
@property(readonly) BOOL specifiesEnabledKnobMask;
@property(readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (int)attributeArrayKind;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)changesWithPageCount;
- (BOOL)changesWithPageNumber;
- (id)copyWithContext:(id)arg1;
- (int)elementKind;
- (unsigned long long)enabledKnobMask;
- (unsigned int)findCharIndex;
- (void)infoChanged;
- (id)initWithContext:(id)arg1;
- (BOOL)isAnchored;
- (BOOL)isAttachedToBodyText;
- (BOOL)isDrawable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPartitioned;
- (BOOL)isSearchable;
- (id)parentStorage;
- (Class)positionerClass;
- (void)setParentStorage:(id)arg1;
- (BOOL)specifiesEnabledKnobMask;
- (id)topLevelAttachment;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
