/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSString;

@interface FBSContext : NSObject <BSXPCCoding> {
    unsigned int _identifier;
    float _level;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) unsigned int identifier;
@property(readonly) float level;
@property(readonly) Class superclass;

+ (id)contextWithSceneContext:(id)arg1;

- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned int)hash;
- (unsigned int)identifier;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (float)level;

@end
