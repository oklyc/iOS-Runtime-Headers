/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIImage, UIImagePickerController;

@interface RUIPhotoPicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    UIImagePickerController *_imagePickerController;
    UIImage *_pickedImage;
    id _pickerCompletion;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) UIImage * pickedImage;
@property(copy) id pickerCompletion;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissWithImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)pickImageWithParentController:(id)arg1 completion:(id)arg2;
- (id)pickedImage;
- (id)pickerCompletion;
- (void)setPickedImage:(id)arg1;
- (void)setPickerCompletion:(id)arg1;

@end
