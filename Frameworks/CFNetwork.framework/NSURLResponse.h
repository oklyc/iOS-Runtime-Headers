/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSString, NSURL, NSURLResponseInternal;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {
    NSURLResponseInternal *_internal;
}

@property(copy,readonly) NSString * MIMEType;
@property(copy,readonly) NSURL * URL;
@property(readonly) long long expectedContentLength;
@property(copy,readonly) NSString * suggestedFilename;
@property(copy,readonly) NSString * textEncodingName;

+ (id)_responseWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
+ (id)getObjectKeyWithIndex:(long)arg1;
+ (BOOL)supportsSecureCoding;

- (id)MIMEType;
- (id)URL;
- (struct _CFURLResponse { }*)_CFURLResponse;
- (id)_cacheTime;
- (double)_calculatedExpiration;
- (double)_freshnessLifetime;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)_lastModifiedDate;
- (BOOL)_mustRevalidate;
- (id)_peerCertificateChain;
- (void)_setExpectedContentLength:(long long)arg1;
- (void)_setMIMEType:(id)arg1;
- (id)allHeaderFields;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedContentLength;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(int)arg3 textEncodingName:(id)arg4;
- (long long)maxExpectedContentLength;
- (int)statusCode;
- (id)suggestedFilename;
- (id)textEncodingName;
- (id)webui_certificateChain;

@end
