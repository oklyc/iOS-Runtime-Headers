/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class YahooAccount;

@interface MFYahooSMTPAccount : SMTPAccount {
    YahooAccount *_account;
}

@property(getter=mailAccountIfAvailable,retain) YahooAccount * mailAccount;

+ (id)accountTypeIdentifier;

- (void)dealloc;
- (id)displayHostname;
- (id)mailAccountIfAvailable;
- (id)preferredAuthScheme;
- (void)setMailAccount:(id)arg1;
- (BOOL)shouldUseSaveSentForAccount:(id)arg1;
- (BOOL)usesSSL;

@end
