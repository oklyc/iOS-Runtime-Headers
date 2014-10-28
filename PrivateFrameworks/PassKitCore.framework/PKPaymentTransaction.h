/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class CLLocation, NSDate, NSDecimalNumber, NSNumber, NSString, PKMerchant;

@interface PKPaymentTransaction : NSObject <NSSecureCoding> {
    NSString *_administrativeArea;
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
    NSString *_identifier;
    NSString *_locality;
    double _locationAltitude;
    NSDate *_locationDate;
    double _locationHorizontalAccuracy;
    double _locationLatitude;
    double _locationLongitude;
    double _locationVerticalAccuracy;
    PKMerchant *_merchant;
    NSNumber *_persistentIdentifier;
    int _technologyType;
    NSDate *_transactionDate;
    NSString *_transactionIdentifier;
    unsigned int _transactionSources;
    int _transactionStatus;
    int _transactionType;
}

@property(retain) NSString * administrativeArea;
@property(copy) NSDecimalNumber * amount;
@property(copy) NSString * currencyCode;
@property(readonly) NSString * displayLocation;
@property(copy) NSString * identifier;
@property(retain) NSString * locality;
@property(retain) CLLocation * location;
@property double locationAltitude;
@property(retain) NSDate * locationDate;
@property double locationHorizontalAccuracy;
@property double locationLatitude;
@property double locationLongitude;
@property double locationVerticalAccuracy;
@property(retain) PKMerchant * merchant;
@property(readonly) BOOL originatedFromThisDevice;
@property(copy) NSNumber * persistentIdentifier;
@property int technologyType;
@property(copy) NSDate * transactionDate;
@property(copy) NSString * transactionIdentifier;
@property unsigned int transactionSources;
@property int transactionStatus;
@property int transactionType;

+ (id)paymentTransactionFromSource:(unsigned int)arg1 withDictionary:(id)arg2;
+ (id)paymentTransactionFromSource:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;

- (id)administrativeArea;
- (id)amount;
- (id)currencyCode;
- (void)dealloc;
- (id)description;
- (id)displayLocation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPaymentTransaction:(id)arg1;
- (id)locality;
- (id)location;
- (double)locationAltitude;
- (id)locationDate;
- (double)locationHorizontalAccuracy;
- (double)locationLatitude;
- (double)locationLongitude;
- (double)locationVerticalAccuracy;
- (id)merchant;
- (BOOL)originatedFromThisDevice;
- (id)persistentIdentifier;
- (void)setAdministrativeArea:(id)arg1;
- (void)setAmount:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationAltitude:(double)arg1;
- (void)setLocationDate:(id)arg1;
- (void)setLocationHorizontalAccuracy:(double)arg1;
- (void)setLocationLatitude:(double)arg1;
- (void)setLocationLongitude:(double)arg1;
- (void)setLocationVerticalAccuracy:(double)arg1;
- (void)setMerchant:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setTechnologyType:(int)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setTransactionSources:(unsigned int)arg1;
- (void)setTransactionStatus:(int)arg1;
- (void)setTransactionType:(int)arg1;
- (int)technologyType;
- (id)transactionDate;
- (id)transactionIdentifier;
- (unsigned int)transactionSources;
- (int)transactionStatus;
- (int)transactionType;

@end
