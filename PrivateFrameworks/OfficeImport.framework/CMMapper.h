/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CMMapper;

@interface CMMapper : NSObject <CMMapperRootArchiver> {
    CMMapper *mParent;
}

- (void)addAttribute:(id)arg1 toNode:(id)arg2 value:(id)arg3;
- (void)addStyle:(id)arg1 withName:(id)arg2;
- (void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2 embedStyle:(BOOL)arg3;
- (void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2;
- (id)archiver;
- (void)finishMappingWithState:(id)arg1;
- (id)initWithParent:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapElement:(id)arg1 atIndex:(unsigned int)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4;
- (void)mapStylesheetAt:(id)arg1 stylesheet:(id)arg2;
- (id)parent;
- (id)root;
- (void)setParent:(id)arg1;
- (void)startMappingWithState:(id)arg1;

@end
