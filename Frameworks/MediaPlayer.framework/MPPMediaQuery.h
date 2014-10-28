/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray;

@interface MPPMediaQuery : PBCodable <NSCopying> {
    struct { 
        unsigned int entityOrder : 1; 
        unsigned int groupingType : 1; 
        unsigned int staticEntityType : 1; 
        unsigned int filteringDisabled : 1; 
    int _entityOrder;
    NSMutableArray *_filterPredicates;
    BOOL _filteringDisabled;
    int _groupingType;
    } _has;
    NSMutableArray *_staticEntityIdentifiers;
    int _staticEntityType;
}

@property int entityOrder;
@property(retain) NSMutableArray * filterPredicates;
@property BOOL filteringDisabled;
@property int groupingType;
@property BOOL hasEntityOrder;
@property BOOL hasFilteringDisabled;
@property BOOL hasGroupingType;
@property BOOL hasStaticEntityType;
@property(retain) NSMutableArray * staticEntityIdentifiers;
@property int staticEntityType;

- (void).cxx_destruct;
- (void)addFilterPredicates:(id)arg1;
- (void)addStaticEntityIdentifiers:(id)arg1;
- (void)clearFilterPredicates;
- (void)clearStaticEntityIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)entityOrder;
- (id)filterPredicates;
- (id)filterPredicatesAtIndex:(unsigned int)arg1;
- (unsigned int)filterPredicatesCount;
- (BOOL)filteringDisabled;
- (int)groupingType;
- (BOOL)hasEntityOrder;
- (BOOL)hasFilteringDisabled;
- (BOOL)hasGroupingType;
- (BOOL)hasStaticEntityType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEntityOrder:(int)arg1;
- (void)setFilterPredicates:(id)arg1;
- (void)setFilteringDisabled:(BOOL)arg1;
- (void)setGroupingType:(int)arg1;
- (void)setHasEntityOrder:(BOOL)arg1;
- (void)setHasFilteringDisabled:(BOOL)arg1;
- (void)setHasGroupingType:(BOOL)arg1;
- (void)setHasStaticEntityType:(BOOL)arg1;
- (void)setStaticEntityIdentifiers:(id)arg1;
- (void)setStaticEntityType:(int)arg1;
- (id)staticEntityIdentifiers;
- (id)staticEntityIdentifiersAtIndex:(unsigned int)arg1;
- (unsigned int)staticEntityIdentifiersCount;
- (int)staticEntityType;
- (void)writeTo:(id)arg1;

@end
