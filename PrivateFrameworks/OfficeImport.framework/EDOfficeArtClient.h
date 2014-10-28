/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDAnchor, EDComment, EDSheet, EDTextBox, NSMutableDictionary, NSString;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    boolmIsBoundsSet;
    EDAnchor *mAnchor;
    } mBounds;
    id mClientState;
    EDComment *mComment;
    EDSheet *mSheet;
    NSMutableDictionary *mTableModels;
    EDTextBox *mTextBox;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (id)anchor;
- (bool)areBoundsSet;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)clientState;
- (id)comment;
- (void)dealloc;
- (BOOL)hasBounds;
- (BOOL)hasText;
- (void)setAnchor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setClientState:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setSheet:(id)arg1;
- (void)setTableModels:(id)arg1;
- (void)setTextBox:(id)arg1;
- (id)sheet;
- (id)tableModels;
- (id)textBox;

@end
