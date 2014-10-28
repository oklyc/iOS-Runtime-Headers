/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBlurShaderEffect : TSCH3DShaderEffect {
    float mKernelScale;
    unsigned int mRadius;
}

+ (id)effectWithRadius:(unsigned int)arg1 kernelScale:(float)arg2;
+ (id)variableBlurOffset;

- (void)addVariables:(id)arg1;
- (id)initWithRadius:(unsigned int)arg1 kernelScale:(float)arg2;
- (void)inject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (id)variableBlurOffset;

@end
