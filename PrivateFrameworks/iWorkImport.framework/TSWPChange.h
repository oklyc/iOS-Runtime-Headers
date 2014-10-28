/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDate, TSUColor, TSWPChangeSession, TSWPStorage;

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying> {
    NSDate *_date;
    BOOL _hidden;
    int _kind;
    TSWPStorage *_parentStorage;
    TSWPChangeSession *_session;
}

@property(readonly) TSUColor * changeAdornmentsColor;
@property(retain) NSDate * date;
@property(getter=isHidden) BOOL hidden;
@property(readonly) BOOL isDeletion;
@property(readonly) BOOL isInsertion;
@property TSWPStorage * parentStorage;
@property(retain) TSWPChangeSession * session;
@property(readonly) BOOL showsHiddenDeletionMarkup;
@property(readonly) BOOL showsMarkup;
@property(readonly) TSUColor * textMarkupColor;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)canMergeWithKind:(int)arg1 session:(id)arg2;
- (id)changeAdornmentsColor;
- (id)copyWithContext:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3;
- (BOOL)isDeletion;
- (BOOL)isFromChangeSession:(id)arg1;
- (BOOL)isHidden;
- (BOOL)isInsertion;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 key:(id)arg2;
- (id)parentStorage;
- (void)saveToArchiver:(id)arg1;
- (id)session;
- (void)setDate:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setParentStorage:(id)arg1;
- (void)setSession:(id)arg1;
- (BOOL)showsHiddenDeletionMarkup;
- (BOOL)showsMarkup;
- (id)textMarkupColor;
- (void)trackedTextDidChange;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
