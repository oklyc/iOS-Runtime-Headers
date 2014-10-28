/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class ISPurchaseReceipt, NSDate;

@interface SSPurchaseReceipt : NSObject {
    ISPurchaseReceipt *_purchaseReceipt;
}

@property(readonly) NSDate * expirationDate;
@property(readonly) BOOL isRevoked;
@property(readonly) BOOL isVPPLicensed;

+ (void)getReceiptPathWithCompletionBlock:(id)arg1;

- (void).cxx_destruct;
- (id)expirationDate;
- (id)initWithContainerPath:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (BOOL)isRevoked;
- (BOOL)isVPPLicensed;

@end
