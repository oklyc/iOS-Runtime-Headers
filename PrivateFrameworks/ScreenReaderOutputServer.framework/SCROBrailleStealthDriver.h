/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSString;

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol> {
    BOOL _isDriverLoaded;
    int _mainSize;
    NSString *_modelIdentifier;
    int _statusSize;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (int)brailleInputMode;
- (void)dealloc;
- (id)getInputEvents;
- (id)init;
- (unsigned int)interfaceVersion;
- (BOOL)isDriverLoaded;
- (BOOL)isInputEnabled;
- (BOOL)isSleeping;
- (int)loadDriverWithIOElement:(id)arg1;
- (int)mainSize;
- (id)modelIdentifier;
- (BOOL)postsKeyboardEvents;
- (BOOL)setMainCells:(const char *)arg1 length:(int)arg2;
- (BOOL)setStatusCells:(const char *)arg1 length:(int)arg2;
- (int)statusSize;
- (BOOL)supportsBlinkingCursor;
- (BOOL)unloadDriver;

@end
