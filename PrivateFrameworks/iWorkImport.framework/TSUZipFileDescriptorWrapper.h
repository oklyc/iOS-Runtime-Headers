/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSUReadChannel>, NSObject<OS_dispatch_group>;

@interface TSUZipFileDescriptorWrapper : NSObject {
    NSObject<OS_dispatch_group> *_accessGroup;
    int _fileDescriptor;
    <TSUReadChannel> *_readChannel;
}

@property(readonly) int fileDescriptor;
@property(readonly) <TSUReadChannel> * readChannel;

- (void).cxx_destruct;
- (void)beginAccess;
- (void)dealloc;
- (void)endAccess;
- (int)fileDescriptor;
- (id)init;
- (id)initWithFileDescriptor:(int)arg1;
- (id)readChannel;
- (void)waitForAccessToEnd;

@end
