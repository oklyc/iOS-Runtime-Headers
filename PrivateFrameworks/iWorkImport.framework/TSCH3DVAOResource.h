/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSIndexSet, TSCH3DResource;

@interface TSCH3DVAOResource : TSCH3DResource {
    struct vector<TSCH3D::ResourceAttributeState, std::__1::allocator<TSCH3D::ResourceAttributeState> > { 
        struct ResourceAttributeState {} *__begin_; 
        struct ResourceAttributeState {} *__end_; 
        struct __compressed_pair<TSCH3D::ResourceAttributeState *, std::__1::allocator<TSCH3D::ResourceAttributeState> > { 
            struct ResourceAttributeState {} *__first_; 
        } __end_cap_; 
    } mAttributes;
    NSIndexSet *mEnabledArrays;
    BOOL mFailed;
    TSCH3DResource *mIndices;
}

@property(retain) NSIndexSet * enabledArrays;
@property BOOL failed;

+ (id)resourceWithObjectState:(const struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_1_1; } x1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_1_1; struct Lookup {} *x_2_1_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_2_1; } x_2_1_3; } x2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_2_1; } x_3_1_1[8]; } x3; struct array<TSCH3D::TextureAttributes, 8> { struct TextureAttributes { int x_1_2_1; int x_1_2_2; BOOL x_1_2_3; BOOL x_1_2_4; BOOL x_1_2_5; int x_1_2_6; struct TextureSizeHint { int x_7_3_1; struct tvec2<int> { union { int x_1_5_1; int x_1_5_2; int x_1_5_3; } x_2_4_1; union { int x_2_5_1; int x_2_5_2; int x_2_5_3; } x_2_4_2; } x_7_3_2; } x_1_2_7; BOOL x_1_2_8; } x_4_1_1[8]; } x4; }*)arg1 indices:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)enabledArrays;
- (BOOL)failed;
- (id)get;
- (unsigned int)hash;
- (id)initWithObjectState:(const struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_1_1; } x1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_1_1; struct Lookup {} *x_2_1_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_2_1; } x_2_1_3; } x2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_2_1; } x_3_1_1[8]; } x3; struct array<TSCH3D::TextureAttributes, 8> { struct TextureAttributes { int x_1_2_1; int x_1_2_2; BOOL x_1_2_3; BOOL x_1_2_4; BOOL x_1_2_5; int x_1_2_6; struct TextureSizeHint { int x_7_3_1; struct tvec2<int> { union { int x_1_5_1; int x_1_5_2; int x_1_5_3; } x_2_4_1; union { int x_2_5_1; int x_2_5_2; int x_2_5_3; } x_2_4_2; } x_7_3_2; } x_1_2_7; BOOL x_1_2_8; } x_4_1_1[8]; } x4; }*)arg1 indices:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setEnabledArrays:(id)arg1;
- (void)setFailed:(BOOL)arg1;

@end
