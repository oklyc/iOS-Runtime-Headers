/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIRedeemCameraViewDelegate>, NSString, SKUIRedeemTextField, UIImage, UIView;

@interface SKUIFullscreenRedeemCameraView : UIView <UITextFieldDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    <SKUIRedeemCameraViewDelegate> *_delegate;
    BOOL _enabled;
    } _keyboardRect;
    UIView *_overlay;
    UIView *_redeemerView;
    SKUIRedeemTextField *_textField;
}

@property(copy,readonly) NSString * debugDescription;
@property <SKUIRedeemCameraViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property BOOL enabled;
@property(readonly) unsigned int hash;
@property(retain) UIImage * image;
@property(readonly) Class superclass;
@property(copy) NSString * text;

- (void).cxx_destruct;
- (void)_hideKeyboard;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_pauseRedeemer;
- (void)_resumeRedeemer;
- (void)_tapGestureAction:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)enabled;
- (id)image;
- (id)initWithClientContext:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)showKeyboard;
- (void)start;
- (id)text;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;

@end
