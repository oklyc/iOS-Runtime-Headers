/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface ESDMetafileBlipContext : ESDBlipContext {
    unsigned long defaultHeaderSize;
    unsigned long mCb;
}

@property unsigned long defaultHeaderSize;

- (unsigned long)defaultHeaderSize;
- (id)initWithOffset:(unsigned int)arg1 byteCount:(unsigned int)arg2 uncompressed:(unsigned long)arg3 stream:(struct SsrwOOStream { int (**x1)(); }*)arg4 streamID:(unsigned int)arg5;
- (bool)loadDelayedNode:(id)arg1;
- (void)setDefaultHeaderSize:(unsigned long)arg1;

@end
