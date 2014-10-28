/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class <SAAceSerializable>, NSNumber, NSString;

@interface SAAceView : AceObject <SAAceSerializable> {
}

@property(retain) <SAAceSerializable> * context;
@property(copy,readonly) NSString * debugDescription;
@property BOOL deferredRendering;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSNumber * listenAfterSpeaking;
@property(copy) NSString * speakableText;
@property(readonly) Class superclass;
@property(copy) NSString * viewId;

+ (id)aceView;
+ (id)aceViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)context;
- (BOOL)deferredRendering;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listenAfterSpeaking;
- (void)setContext:(id)arg1;
- (void)setDeferredRendering:(BOOL)arg1;
- (void)setListenAfterSpeaking:(id)arg1;
- (void)setSpeakableText:(id)arg1;
- (void)setViewId:(id)arg1;
- (id)speakableText;
- (id)viewId;

@end
