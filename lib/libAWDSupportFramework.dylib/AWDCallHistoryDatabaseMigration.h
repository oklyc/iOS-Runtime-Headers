/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCallHistoryDatabaseMigration : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int domain : 1; 
        unsigned int error : 1; 
        unsigned int newSchema : 1; 
        unsigned int oldSchema : 1; 
    unsigned int _domain;
    unsigned int _error;
    } _has;
    unsigned int _newSchema;
    unsigned int _oldSchema;
    unsigned long long _timestamp;
}

@property unsigned int domain;
@property unsigned int error;
@property BOOL hasDomain;
@property BOOL hasError;
@property BOOL hasNewSchema;
@property BOOL hasOldSchema;
@property BOOL hasTimestamp;
@property unsigned int newSchema;
@property unsigned int oldSchema;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)domain;
- (unsigned int)error;
- (BOOL)hasDomain;
- (BOOL)hasError;
- (BOOL)hasNewSchema;
- (BOOL)hasOldSchema;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)newSchema;
- (unsigned int)oldSchema;
- (BOOL)readFrom:(id)arg1;
- (void)setDomain:(unsigned int)arg1;
- (void)setError:(unsigned int)arg1;
- (void)setHasDomain:(BOOL)arg1;
- (void)setHasError:(BOOL)arg1;
- (void)setHasNewSchema:(BOOL)arg1;
- (void)setHasOldSchema:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setNewSchema:(unsigned int)arg1;
- (void)setOldSchema:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
