/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKFileTransfer>, NSData, NSDictionary, NSString, NSURL;

@interface CKMediaObject : NSObject <QLPreviewItem> {
    <CKFileTransfer> *_transfer;
}

@property(copy,readonly) NSString * UTIType;
@property(copy,readonly) NSData * data;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSURL * fileURL;
@property(copy,readonly) NSString * filename;
@property(readonly) unsigned int hash;
@property(readonly) int mediaType;
@property(copy,readonly) NSString * mimeType;
@property(readonly) NSString * previewItemTitle;
@property(readonly) NSURL * previewItemURL;
@property(readonly) Class superclass;
@property(copy,readonly) NSDictionary * transcoderUserInfo;
@property(retain) <CKFileTransfer> * transfer;
@property(copy,readonly) NSString * transferGUID;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)attachmentSummary:(unsigned int)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)iconCache;
+ (BOOL)isPreviewable;

- (id)JPEGDataFromImage:(id)arg1;
- (id)UTIType;
- (void)_sampleImageEdges:(id)arg1 usingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forMostlyWhitePixels:(unsigned int*)arg3 otherPixels:(unsigned int*)arg4;
- (Class)balloonViewClassForWidth:(float)arg1 orientation:(BOOL)arg2;
- (id)bbPreviewFillToSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })bbSize;
- (BOOL)canBeAttachmentContiguous;
- (BOOL)canExport;
- (Class)coloredBalloonViewClass;
- (id)composeImages;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)downloadProgressImage;
- (id)downloadProgressString;
- (void)export:(id)arg1;
- (id)fileManager;
- (id)fileSizeString;
- (id)fileURL;
- (id)filename;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(float)arg2 orientation:(BOOL)arg3;
- (id)generateThumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (id)generateThumbnailForWidth:(float)arg1 orientation:(BOOL)arg2;
- (id)icon;
- (id)initWithTransfer:(id)arg1;
- (BOOL)isPreviewable;
- (id)location;
- (int)mediaType;
- (id)mimeType;
- (id)pasteboardItem;
- (Class)previewBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)previewDispatchCache;
- (id)previewForWidth:(float)arg1 orientation:(BOOL)arg2;
- (id)previewItemURL;
- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (void)setTransfer:(id)arg1;
- (BOOL)shouldBeQuickLooked;
- (BOOL)shouldShowDisclosure;
- (BOOL)shouldShowViewer;
- (id)subtitle;
- (id)title;
- (id)transcoderUserInfo;
- (id)transfer;
- (id)transferGUID;

@end
