/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFMailMessage, MFMessageViewingContext, NSArray, NSString;

@interface _MFMailCompositionContext : NSObject {
    id _autosaveIdentifier;
    NSArray *_bccRecipients;
    unsigned int _caretPosition;
    NSArray *_ccRecipients;
    int _composeType;
    NSString *_contextID;
    BOOL _includeAttachments;
    BOOL _loadRest;
    MFMessageViewingContext *_loadingContext;
    NSString *_messageBody;
    id _originalContent;
    MFMailMessage *_originalMessage;
    NSString *_originatingBundleID;
    BOOL _prefersFirstLineSelection;
    NSString *_sendingAddress;
    BOOL _showContentImmediately;
    BOOL _showKeyboardImmediately;
    int _sourceAccountManagement;
    NSString *_subject;
    NSArray *_toRecipients;
    BOOL _usingDefaultAccount;
}

@property(readonly) id autosaveIdentifier;
@property(copy) NSArray * bccRecipients;
@property unsigned int caretPosition;
@property(copy) NSArray * ccRecipients;
@property(readonly) int composeType;
@property(readonly) NSString * contextID;
@property BOOL includeAttachments;
@property BOOL loadRest;
@property(retain) MFMessageViewingContext * loadingContext;
@property(retain) id originalContent;
@property(readonly) MFMailMessage * originalMessage;
@property(copy) NSString * originatingBundleID;
@property BOOL prefersFirstLineSelection;
@property(copy) NSString * sendingAddress;
@property BOOL showContentImmediately;
@property BOOL showKeyboardImmediately;
@property int sourceAccountManagement;
@property(copy) NSString * subject;
@property(copy) NSArray * toRecipients;
@property BOOL usingDefaultAccount;

- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)attachments;
- (id)autosaveIdentifier;
- (id)bccRecipients;
- (unsigned int)caretPosition;
- (id)ccRecipients;
- (int)composeType;
- (id)contextID;
- (void)dealloc;
- (BOOL)includeAttachments;
- (id)init;
- (id)initDraftRestoreOfMessage:(id)arg1;
- (id)initForwardOfMessage:(id)arg1;
- (id)initOutboxRestoreOfMessage:(id)arg1;
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1;
- (id)initReplyAllToMessage:(id)arg1;
- (id)initReplyToMessage:(id)arg1;
- (id)initSendAgainDraftOfMessage:(id)arg1;
- (id)initWithComposeType:(int)arg1 RFC822Data:(id)arg2;
- (id)initWithComposeType:(int)arg1 originalMessage:(id)arg2;
- (id)initWithComposeType:(int)arg1;
- (id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3;
- (id)initWithURL:(id)arg1;
- (BOOL)loadRest;
- (id)loadingContext;
- (id)messageBody;
- (id)originalContent;
- (id)originalMessage;
- (id)originatingBundleID;
- (BOOL)prefersFirstLineSelection;
- (void)recordPasteboardAttachmentsForURLs:(id)arg1;
- (void)recordUndoAttachmentsForURLs:(id)arg1;
- (void)removeAttachment:(id)arg1;
- (id)sendingAddress;
- (void)setBccRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned int)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setIncludeAttachments:(BOOL)arg1;
- (void)setLoadRest:(BOOL)arg1;
- (void)setLoadingContext:(id)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)setOriginalContent:(id)arg1;
- (void)setOriginatingBundleID:(id)arg1;
- (void)setPrefersFirstLineSelection:(BOOL)arg1;
- (void)setSendingAddress:(id)arg1;
- (void)setShowContentImmediately:(BOOL)arg1;
- (void)setShowKeyboardImmediately:(BOOL)arg1;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setUsingDefaultAccount:(BOOL)arg1;
- (BOOL)showContentImmediately;
- (BOOL)showKeyboardImmediately;
- (int)sourceAccountManagement;
- (id)subject;
- (id)toRecipients;
- (BOOL)usingDefaultAccount;

@end
