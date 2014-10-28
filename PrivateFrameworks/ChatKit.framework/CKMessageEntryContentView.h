/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKComposition, CKMessageEntryRichTextView, CKMessageEntryTextView, NSString, UIView;

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UIView *_activeView;
    CKComposition *_composition;
    UIView *_dividerLine;
    BOOL _ignoreEndEditing;
    BOOL _needsEnsureSelectionVisible;
    BOOL _needsTextLayout;
    float _placeholderHeight;
    BOOL _shouldShowCharacterCount;
    BOOL _shouldShowSubject;
    } _subjectAlignmentInsets;
    CKMessageEntryTextView *_subjectView;
    } _textAlignmentInsets;
    CKMessageEntryRichTextView *_textView;
}

@property(getter=isActive,readonly) BOOL active;
@property UIView * activeView;
@property BOOL balloonColor;
@property(retain) CKComposition * composition;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentTextAlignmentInsets;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) UIView * dividerLine;
@property(readonly) unsigned int hash;
@property BOOL ignoreEndEditing;
@property BOOL needsEnsureSelectionVisible;
@property BOOL needsTextLayout;
@property float placeholderHeight;
@property(copy) NSString * placeholderText;
@property BOOL shouldShowCharacterCount;
@property BOOL shouldShowSubject;
@property(getter=isShowingDictationPlaceholder,readonly) BOOL showingDictationPlaceholder;
@property(getter=isSingleLine,readonly) BOOL singleLine;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } subjectAlignmentInsets;
@property(retain) CKMessageEntryTextView * subjectView;
@property(readonly) Class superclass;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textAlignmentInsets;
@property(retain) CKMessageEntryRichTextView * textView;

- (void)acceptAutocorrection;
- (id)activeView;
- (BOOL)balloonColor;
- (void)calculateTextMetrics;
- (id)composition;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentTextAlignmentInsets;
- (void)dealloc;
- (id)dividerLine;
- (void)ensureSelectionVisibleIfNeeded;
- (BOOL)ignoreEndEditing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 shouldShowSubject:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3;
- (void)invalidateComposition;
- (BOOL)isActive;
- (BOOL)isShowingDictationPlaceholder;
- (BOOL)isSingleLine;
- (void)layoutSubviews;
- (BOOL)makeActive;
- (BOOL)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2;
- (BOOL)needsEnsureSelectionVisible;
- (BOOL)needsTextLayout;
- (float)placeholderHeight;
- (id)placeholderText;
- (void)setActiveView:(id)arg1;
- (void)setBalloonColor:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setComposition:(id)arg1;
- (void)setDividerLine:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIgnoreEndEditing:(BOOL)arg1;
- (void)setNeedsEnsureSelectionVisible:(BOOL)arg1;
- (void)setNeedsTextLayout:(BOOL)arg1;
- (void)setPlaceholderHeight:(float)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setShouldShowCharacterCount:(BOOL)arg1;
- (void)setShouldShowSubject:(BOOL)arg1;
- (void)setSubjectAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSubjectView:(id)arg1;
- (void)setTextAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTextView:(id)arg1;
- (BOOL)shouldShowCharacterCount;
- (BOOL)shouldShowSubject;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })subjectAlignmentInsets;
- (id)subjectView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textAlignmentInsets;
- (id)textView;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;

@end
