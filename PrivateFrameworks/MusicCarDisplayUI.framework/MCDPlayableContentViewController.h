/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class MCDBrowsableContentModel, NSString, UINavigationController;

@interface MCDPlayableContentViewController : UIViewController {
    NSString *_bundleID;
    MCDBrowsableContentModel *_model;
    UINavigationController *_navigationController;
}

@property(copy,readonly) NSString * bundleID;

- (void).cxx_destruct;
- (void)_embedAppropriateViewController;
- (id)bundleID;
- (id)initWithBundleID:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)refreshNavigationStack;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end
