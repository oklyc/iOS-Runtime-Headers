/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class GEOActiveTileSet, VKTilePool, VKTimer, _VKTileSetBackedTileSourceTimerTarget;

@interface VKTileSetBackedTileSource : VKTileSource {
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _downloadTemplate;
    VKTimer *_expirationTimer;
    VKTilePool *_expiredTilePool;
    unsigned int _maximumDownloadZoomLevel;
    unsigned int _minimumDownloadZoomLevel;
    GEOActiveTileSet *_tileSet;
    _VKTileSetBackedTileSourceTimerTarget *_timerTarget;
    } _zoomLevelRange;
}

@property(retain) GEOActiveTileSet * tileSet;

- (id).cxx_construct;
- (double)_expirationInterval;
- (void)_expireTiles;
- (double)_nextTileExpirationDate;
- (void)_scheduleTileExpirationTimer:(double)arg1 forceUpdate:(BOOL)arg2;
- (void)clearCaches;
- (void)dealloc;
- (int)defaultMaximumZoomLevel;
- (int)defaultMinimumZoomLevel;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (BOOL)expires;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (id)initWithTileSet:(id)arg1 tileGroupIdentifier:(unsigned int)arg2 locale:(id)arg3;
- (unsigned long long)mapLayerForZoomLevelRange;
- (unsigned int)maximumDownloadZoomLevel;
- (int)maximumZoomLevel;
- (unsigned int)minimumDownloadZoomLevel;
- (int)minimumZoomLevel;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (void)setClient:(id)arg1;
- (void)setStyleManager:(id)arg1;
- (void)setTileSet:(id)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })sourceKeyForRenderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)tileLoader;
- (id)tileSet;
- (int)tileSize;

@end
