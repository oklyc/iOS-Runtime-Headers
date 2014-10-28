/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDWrapPolygon : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;
    BOOL mComputedBounds;
    BOOL mComputedSelfIntersection;
    BOOL mIntersectsSelf;
    void *mPolygon;
}

- (id).cxx_construct;
- (id)bezierPath;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (struct CGPoint { float x1; float x2; })intersectionPointBetween:(struct CGPoint { float x1; float x2; })arg1 and:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)intersectsSelf;
- (void)p_computeIntersectionState;
- (int)p_countSegments;
- (void)p_freePolygon;
- (void)p_setPolygon:(struct { int x1; int *x2; struct { /* ? */ } *x3; }*)arg1;
- (void*)polygon;
- (void)setIntersectsSelf:(BOOL)arg1;
- (void)setPath:(id)arg1;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;

@end
