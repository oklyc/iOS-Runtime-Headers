/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTraitsPhotoSize : PBCodable <NSCopying> {
    struct { 
        unsigned int height : 1; 
        unsigned int width : 1; 
    } _has;
    unsigned int _height;
    unsigned int _width;
}

@property BOOL hasHeight;
@property BOOL hasWidth;
@property unsigned int height;
@property unsigned int width;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHeight;
- (BOOL)hasWidth;
- (unsigned int)hash;
- (unsigned int)height;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasHeight:(BOOL)arg1;
- (void)setHasWidth:(BOOL)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;
- (void)writeTo:(id)arg1;

@end
