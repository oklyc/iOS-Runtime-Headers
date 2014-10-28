/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINib : NSObject {
    id storage;
}

+ (id)nibWithData:(id)arg1 bundle:(id)arg2;
+ (id)nibWithNibName:(id)arg1 bundle:(id)arg2;

- (void)_registerForMemoryWarningIfNeeded;
- (id)bundleResourcePath;
- (BOOL)captureEnclosingNIBBundleOnDecode;
- (BOOL)captureImplicitLoadingContextOnDecode;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)effectiveBundle;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierForStringsFile;
- (id)initWithBundle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 directory:(id)arg2 bundle:(id)arg3;
- (id)instantiateWithOwner:(id)arg1 options:(id)arg2;
- (BOOL)instantiatingForSimulator;
- (id)lazyArchiveData;
- (id)nibDataForPath:(id)arg1;
- (void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)arg1;
- (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)arg1;
- (void)setIdentifierForStringsFile:(id)arg1;
- (void)setInstantiatingForSimulator:(BOOL)arg1;
- (id)unarchiverForInstantiatingReturningError:(id*)arg1;

@end
