/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABStarkContactPropertyCell : ABPropertyPhoneNumberCell {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;

+ (BOOL)wantsHorizontalLayout;

- (float)bottomBaselineConstant;
- (id)constantConstraints;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)standardStarView;
- (id)standardTransportIcon;
- (float)topBaselineConstant;
- (void)transportButtonClicked:(id)arg1;
- (id)variableConstraints;

@end
