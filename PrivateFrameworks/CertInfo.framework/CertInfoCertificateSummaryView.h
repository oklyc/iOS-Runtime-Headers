/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CertInfoCertificateHeaderCell, CertInfoCertificateSummaryDescriptionCell, NSDate, NSString, UITableView;

@interface CertInfoCertificateSummaryView : UIView <UITableViewDataSource, UITableViewDelegate> {
    CertInfoCertificateSummaryDescriptionCell *_descriptionCell;
    NSDate *_expirationDate;
    CertInfoCertificateHeaderCell *_headerCell;
    id _moreDetailsSelectedBlock;
    NSString *_purpose;
    UITableView *_tableView;
    NSString *_trustSubtitle;
    NSString *_trustTitle;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) CertInfoCertificateSummaryDescriptionCell * descriptionCell;
@property(retain) NSDate * expirationDate;
@property(readonly) unsigned int hash;
@property(retain) CertInfoCertificateHeaderCell * headerCell;
@property(retain) NSString * purpose;
@property(readonly) Class superclass;
@property(readonly) UITableView * tableView;
@property(retain) NSString * trustSubtitle;
@property(retain) NSString * trustTitle;

- (void).cxx_destruct;
- (id)_cellForReuseIdentifier:(id)arg1;
- (void)_configureCell:(id)arg1;
- (id)descriptionCell;
- (id)expirationDate;
- (id)headerCell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)purpose;
- (void)setDescriptionCell:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHeaderCell:(id)arg1;
- (void)setMoreDetailsSelectedBlock:(id)arg1;
- (void)setPurpose:(id)arg1;
- (void)setTrustSubtitle:(id)arg1;
- (void)setTrustTitle:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView;
- (id)trustSubtitle;
- (id)trustTitle;

@end
