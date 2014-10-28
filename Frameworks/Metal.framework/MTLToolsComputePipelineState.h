/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLDevice>, <MTLFunction>, NSString;

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI> {
    <MTLFunction> *_function;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) <MTLDevice> * device;
@property(readonly) unsigned int hash;
@property(readonly) unsigned int maxTotalThreadsPerThreadgroup;
@property(readonly) unsigned int staticLocalMemorySize;
@property(readonly) Class superclass;
@property(readonly) unsigned int threadExecutionWidth;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (id)device;
- (unsigned int)maxTotalThreadsPerThreadgroup;
- (unsigned int)staticLocalMemorySize;
- (unsigned int)threadExecutionWidth;

@end
