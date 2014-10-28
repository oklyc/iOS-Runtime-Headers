/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@class GLKShaderBlockNode, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface GLKEffect : NSObject {
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    struct GLKBigInt_s { 
        unsigned long long n0; 
        unsigned long long n1; 
    struct GLKBigInt_s { 
        unsigned long long n0; 
        unsigned long long n1; 
    int _aColorLoc;
    } _baseLightingColor;
    int _baseLightingColorLoc;
    unsigned char _colorMaterialEnabled;
    unsigned long long _dirtyUniforms;
    id *_effectShaderArray;
    struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } *_fshMask;
    unsigned int _fshName;
    GLKShaderBlockNode *_fshRootNode;
    char **_fshStrings;
    NSString *_label;
    } _lightModelAmbientColor;
    int _lightModelAmbientColorLoc;
    unsigned char _lightModelTwoSided;
    NSMutableArray *_lightProperties;
    unsigned char _masksInitialized;
    float *_materialAmbientColor;
    float *_materialDiffuseColor;
    unsigned int _numFshStrings;
    unsigned int _numLights;
    unsigned int _numTextures;
    unsigned int _numVshStrings;
    unsigned char _perPixelLightingEnabled;
    unsigned char _perVertexLightingEnabled;
    } _prevFshMask;
    } _prevVshMask;
    NSMutableDictionary *_programHash;
    unsigned int _programName;
    NSMutableArray *_properties;
    NSArray *_textureOrder;
    unsigned char _texturingEnabled;
    struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } *_vshMask;
    unsigned int _vshName;
    GLKShaderBlockNode *_vshRootNode;
    char **_vshStrings;
    bool_textureOrderStale;
}

@property int aColorLoc;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } baseLightingColor;
@property int baseLightingColorLoc;
@property unsigned char colorMaterialEnabled;
@property unsigned long long dirtyUniforms;
@property id* effectShaderArray;
@property struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }* fshMask;
@property unsigned int fshName;
@property(readonly) GLKShaderBlockNode * fshRootNode;
@property char ** fshStrings;
@property(copy) NSString * label;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } lightModelAmbientColor;
@property int lightModelAmbientColorLoc;
@property unsigned char lightModelTwoSided;
@property(retain) NSMutableArray * lightProperties;
@property unsigned char masksInitialized;
@property(readonly) float* materialAmbientColor;
@property(readonly) float* materialDiffuseColor;
@property unsigned int numFshStrings;
@property unsigned int numLights;
@property unsigned int numTextures;
@property unsigned int numVshStrings;
@property unsigned char perPixelLightingEnabled;
@property unsigned char perVertexLightingEnabled;
@property struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } prevFshMask;
@property struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } prevVshMask;
@property(readonly) NSMutableDictionary * programHash;
@property unsigned int programName;
@property(retain) NSMutableArray * properties;
@property(copy) NSArray * textureOrder;
@property bool textureOrderStale;
@property unsigned char texturingEnabled;
@property struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }* vshMask;
@property unsigned int vshName;
@property(readonly) GLKShaderBlockNode * vshRootNode;
@property char ** vshStrings;

+ (void)initialize;
+ (void)initializeStaticMasks;
+ (bool)parseXMLFile:(id)arg1 rootNode:(id)arg2;
+ (id)programInfoLogForName:(unsigned int)arg1 effectLabel:(id)arg2 msg:(const char *)arg3;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
+ (id)shaderInfoLogForName:(unsigned int)arg1 effectLabel:(id)arg2 msg:(const char *)arg3;
+ (void)unrollLoopNodesForStaticTreeWithRoot:(id)arg1;

- (int)aColorLoc;
- (void)addTransformProperty;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })baseLightingColor;
- (int)baseLightingColorLoc;
- (void)bind;
- (unsigned char)colorMaterialEnabled;
- (void)createAndUseProgramWithShadingHash:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)dirtyAllUniforms;
- (unsigned long long)dirtyUniforms;
- (id*)effectShaderArray;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)fshMask;
- (unsigned int)fshMaskCt;
- (char **)fshMaskStr;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)fshMasks;
- (unsigned int)fshName;
- (id)fshRootNode;
- (char **)fshStrings;
- (bool)includeFshShaderTextForRootNode:(id)arg1;
- (bool)includeShaderTextForRootNode:(id)arg1;
- (bool)includeVshShaderTextForRootNode:(id)arg1;
- (id)init;
- (id)initWithPropertyArray:(id)arg1;
- (void)initializeMasks;
- (id)label;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })lightModelAmbientColor;
- (int)lightModelAmbientColorLoc;
- (unsigned char)lightModelTwoSided;
- (id)lightProperties;
- (unsigned char)masksInitialized;
- (float*)materialAmbientColor;
- (float*)materialDiffuseColor;
- (unsigned int)numFshStrings;
- (unsigned int)numLights;
- (unsigned int)numTextures;
- (unsigned int)numVshStrings;
- (unsigned char)perPixelLightingEnabled;
- (unsigned char)perVertexLightingEnabled;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })prevFshMask;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })prevVshMask;
- (id)programHash;
- (unsigned int)programName;
- (id)properties;
- (void)setAColorLoc:(int)arg1;
- (void)setBaseLightingColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setBaseLightingColorLoc:(int)arg1;
- (void)setColorMaterialEnabled:(unsigned char)arg1;
- (void)setDirtyUniforms:(unsigned long long)arg1;
- (void)setEffectShaderArray:(id*)arg1;
- (void)setFshMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)setFshName:(unsigned int)arg1;
- (void)setFshStrings:(char **)arg1;
- (void)setLabel:(id)arg1;
- (void)setLightModelAmbientColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setLightModelAmbientColorLoc:(int)arg1;
- (void)setLightModelTwoSided:(unsigned char)arg1;
- (void)setLightProperties:(id)arg1;
- (void)setMasksInitialized:(unsigned char)arg1;
- (void)setNumFshStrings:(unsigned int)arg1;
- (void)setNumLights:(unsigned int)arg1;
- (void)setNumTextures:(unsigned int)arg1;
- (void)setNumVshStrings:(unsigned int)arg1;
- (void)setPerPixelLightingEnabled:(unsigned char)arg1;
- (void)setPerVertexLightingEnabled:(unsigned char)arg1;
- (void)setPrevFshMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPrevVshMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setProgramName:(unsigned int)arg1;
- (void)setProperties:(id)arg1;
- (void)setShaderBindings;
- (void)setTextureIndices;
- (void)setTextureOrder:(id)arg1;
- (void)setTextureOrderStale:(bool)arg1;
- (void)setTexturingEnabled:(unsigned char)arg1;
- (void)setVshMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)setVshName:(unsigned int)arg1;
- (void)setVshStrings:(char **)arg1;
- (id)textureOrder;
- (bool)textureOrderStale;
- (unsigned char)texturingEnabled;
- (void)updateFshStringsWithRoot:(id)arg1 enabled:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })arg2;
- (void)updateVshStringsWithRoot:(id)arg1 enabled:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })arg2;
- (BOOL)useColorAttrib;
- (BOOL)useTexCoordAttrib;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)vshMask;
- (unsigned int)vshMaskCt;
- (char **)vshMaskStr;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)vshMasks;
- (unsigned int)vshName;
- (id)vshRootNode;
- (char **)vshStrings;

@end
