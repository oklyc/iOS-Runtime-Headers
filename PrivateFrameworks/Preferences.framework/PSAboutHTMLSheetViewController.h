/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface PSAboutHTMLSheetViewController : UIViewController <UIWebViewDelegate> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (void)presentAboutSheetTitled:(id)arg1 HTMLContent:(id)arg2 fromViewController:(id)arg3;

- (void)dealloc;
- (void)donePressed;
- (void)loadView;
- (void)setHTMLContent:(id)arg1 isFragment:(BOOL)arg2;
- (void)viewDidBecomeVisible;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;

@end
