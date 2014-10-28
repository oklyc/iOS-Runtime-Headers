/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSMutableArray, NSString;

@interface AWDMMCSGetRequestInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int duration : 1; 
        unsigned int localBytes : 1; 
        unsigned int resumedBytes : 1; 
        unsigned int startTime : 1; 
        unsigned int timestamp : 1; 
        unsigned int cancelledErrorCode : 1; 
        unsigned int itemCount : 1; 
        unsigned int itemsNeedingChunks : 1; 
        unsigned int requestErrorCode : 1; 
    NSMutableArray *_authHttpInfos;
    NSMutableArray *_cancelErrors;
    int _cancelledErrorCode;
    NSString *_cancelledErrorDomain;
    NSString *_clientId;
    NSMutableArray *_completeHttpInfos;
    NSMutableArray *_containerHttpInfos;
    long long _duration;
    NSMutableArray *_errors;
    } _has;
    int _itemCount;
    int _itemsNeedingChunks;
    long long _localBytes;
    int _requestErrorCode;
    NSString *_requestErrorDomain;
    long long _resumedBytes;
    long long _startTime;
    long long _timestamp;
}

@property(retain) NSMutableArray * authHttpInfos;
@property(retain) NSMutableArray * cancelErrors;
@property int cancelledErrorCode;
@property(retain) NSString * cancelledErrorDomain;
@property(retain) NSString * clientId;
@property(retain) NSMutableArray * completeHttpInfos;
@property(retain) NSMutableArray * containerHttpInfos;
@property long long duration;
@property(retain) NSMutableArray * errors;
@property BOOL hasCancelledErrorCode;
@property(readonly) BOOL hasCancelledErrorDomain;
@property(readonly) BOOL hasClientId;
@property BOOL hasDuration;
@property BOOL hasItemCount;
@property BOOL hasItemsNeedingChunks;
@property BOOL hasLocalBytes;
@property BOOL hasRequestErrorCode;
@property(readonly) BOOL hasRequestErrorDomain;
@property BOOL hasResumedBytes;
@property BOOL hasStartTime;
@property BOOL hasTimestamp;
@property int itemCount;
@property int itemsNeedingChunks;
@property long long localBytes;
@property int requestErrorCode;
@property(retain) NSString * requestErrorDomain;
@property long long resumedBytes;
@property long long startTime;
@property long long timestamp;

- (void)addAuthHttpInfos:(id)arg1;
- (void)addCancelError:(id)arg1;
- (void)addCompleteHttpInfos:(id)arg1;
- (void)addContainerHttpInfos:(id)arg1;
- (void)addError:(id)arg1;
- (id)authHttpInfos;
- (id)authHttpInfosAtIndex:(unsigned int)arg1;
- (unsigned int)authHttpInfosCount;
- (id)cancelErrorAtIndex:(unsigned int)arg1;
- (id)cancelErrors;
- (unsigned int)cancelErrorsCount;
- (int)cancelledErrorCode;
- (id)cancelledErrorDomain;
- (void)clearAuthHttpInfos;
- (void)clearCancelErrors;
- (void)clearCompleteHttpInfos;
- (void)clearContainerHttpInfos;
- (void)clearErrors;
- (id)clientId;
- (id)completeHttpInfos;
- (id)completeHttpInfosAtIndex:(unsigned int)arg1;
- (unsigned int)completeHttpInfosCount;
- (id)containerHttpInfos;
- (id)containerHttpInfosAtIndex:(unsigned int)arg1;
- (unsigned int)containerHttpInfosCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (id)errorAtIndex:(unsigned int)arg1;
- (id)errors;
- (unsigned int)errorsCount;
- (BOOL)hasCancelledErrorCode;
- (BOOL)hasCancelledErrorDomain;
- (BOOL)hasClientId;
- (BOOL)hasDuration;
- (BOOL)hasItemCount;
- (BOOL)hasItemsNeedingChunks;
- (BOOL)hasLocalBytes;
- (BOOL)hasRequestErrorCode;
- (BOOL)hasRequestErrorDomain;
- (BOOL)hasResumedBytes;
- (BOOL)hasStartTime;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)itemCount;
- (int)itemsNeedingChunks;
- (long long)localBytes;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)requestErrorCode;
- (id)requestErrorDomain;
- (long long)resumedBytes;
- (void)setAuthHttpInfos:(id)arg1;
- (void)setCancelErrors:(id)arg1;
- (void)setCancelledErrorCode:(int)arg1;
- (void)setCancelledErrorDomain:(id)arg1;
- (void)setClientId:(id)arg1;
- (void)setCompleteHttpInfos:(id)arg1;
- (void)setContainerHttpInfos:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setErrors:(id)arg1;
- (void)setHasCancelledErrorCode:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasItemCount:(BOOL)arg1;
- (void)setHasItemsNeedingChunks:(BOOL)arg1;
- (void)setHasLocalBytes:(BOOL)arg1;
- (void)setHasRequestErrorCode:(BOOL)arg1;
- (void)setHasResumedBytes:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setItemCount:(int)arg1;
- (void)setItemsNeedingChunks:(int)arg1;
- (void)setLocalBytes:(long long)arg1;
- (void)setRequestErrorCode:(int)arg1;
- (void)setRequestErrorDomain:(id)arg1;
- (void)setResumedBytes:(long long)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setTimestamp:(long long)arg1;
- (long long)startTime;
- (long long)timestamp;
- (void)writeTo:(id)arg1;

@end
