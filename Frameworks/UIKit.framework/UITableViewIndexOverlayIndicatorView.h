/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UILabel, UITableView, UITapGestureRecognizer;

@interface UITableViewIndexOverlayIndicatorView : UIView {
    UILabel *_label;
    UITableView *_table;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(copy) NSString * currentText;

- (void)_invalidateTable;
- (void)_tapGestureChanged:(id)arg1;
- (void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (id)currentText;
- (void)dealloc;
- (id)initWithTable:(id)arg1;
- (void)layoutSubviews;
- (void)setCurrentText:(id)arg1;

@end
