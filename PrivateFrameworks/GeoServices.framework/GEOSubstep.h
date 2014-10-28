/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEONameInfo, NSMutableArray;

@interface GEOSubstep : PBCodable <NSCopying> {
    struct { 
        unsigned int maneuverType : 1; 
        unsigned int zilchIndex : 1; 
    } _has;
    int _maneuverType;
    GEONameInfo *_name;
    NSMutableArray *_signposts;
    int _zilchIndex;
}

@property BOOL hasManeuverType;
@property(readonly) BOOL hasName;
@property BOOL hasZilchIndex;
@property int maneuverType;
@property(retain) GEONameInfo * name;
@property(retain) NSMutableArray * signposts;
@property int zilchIndex;

- (void)addSignpost:(id)arg1;
- (void)clearSignposts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasManeuverType;
- (BOOL)hasName;
- (BOOL)hasZilchIndex;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)maneuverType;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setHasManeuverType:(BOOL)arg1;
- (void)setHasZilchIndex:(BOOL)arg1;
- (void)setManeuverType:(int)arg1;
- (void)setName:(id)arg1;
- (void)setSignposts:(id)arg1;
- (void)setZilchIndex:(int)arg1;
- (id)signpostAtIndex:(unsigned int)arg1;
- (id)signposts;
- (unsigned int)signpostsCount;
- (void)writeTo:(id)arg1;
- (int)zilchIndex;

@end
