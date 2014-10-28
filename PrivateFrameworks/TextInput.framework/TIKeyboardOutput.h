/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSIndexSet, NSString, TIKeyboardCandidate;

@interface TIKeyboardOutput : NSObject <NSSecureCoding> {
    TIKeyboardCandidate *_acceptedCandidate;
    unsigned int _deletionCount;
    unsigned int _forwardDeletionCount;
    NSIndexSet *_handwritingStrokesToDelete;
    NSString *_insertionText;
    NSString *_insertionTextAfterSelection;
    TIKeyboardCandidate *_shortcutConversion;
    NSString *_textToCommit;
}

@property(retain) TIKeyboardCandidate * acceptedCandidate;
@property unsigned int deletionCount;
@property unsigned int forwardDeletionCount;
@property(copy) NSIndexSet * handwritingStrokesToDelete;
@property(copy) NSString * insertionText;
@property(copy) NSString * insertionTextAfterSelection;
@property(retain) TIKeyboardCandidate * shortcutConversion;
@property(copy) NSString * textToCommit;

+ (BOOL)supportsSecureCoding;

- (id)acceptedCandidate;
- (void)dealloc;
- (void)deleteBackward:(unsigned int)arg1;
- (void)deleteBackward;
- (void)deleteForward:(unsigned int)arg1;
- (void)deleteForward;
- (unsigned int)deletionCount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)forwardDeletionCount;
- (id)handwritingStrokesToDelete;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (void)insertText:(id)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (id)insertionText;
- (id)insertionTextAfterSelection;
- (BOOL)isEqual:(id)arg1;
- (void)setAcceptedCandidate:(id)arg1;
- (void)setDeletionCount:(unsigned int)arg1;
- (void)setForwardDeletionCount:(unsigned int)arg1;
- (void)setHandwritingStrokesToDelete:(id)arg1;
- (void)setInsertionText:(id)arg1;
- (void)setInsertionTextAfterSelection:(id)arg1;
- (void)setShortcutConversion:(id)arg1;
- (void)setTextToCommit:(id)arg1;
- (id)shortcutConversion;
- (id)textToCommit;

@end
