/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString;

@interface WKNPAPIPlugInContainer : NSObject <WKNPAPIPlugInContainer> {
    struct NetscapePlugin { } *_plugin;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)_initWithNetscapePlugin:(struct NetscapePlugin { }*)arg1;
- (void)_invalidate;
- (BOOL)openPlugInPreferencePane;

@end
