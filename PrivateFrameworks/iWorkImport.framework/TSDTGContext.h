/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSDThumbnailConsumer>, <TSDThumbnailIdentifier>, <TSDThumbnailProducer>, TSUImage;

@interface TSDTGContext : NSObject {
    <TSDThumbnailConsumer> *_consumer;
    BOOL _continueThumbnailing;
    <TSDThumbnailProducer> *_producer;
    TSUImage *_thumbnail;
    <TSDThumbnailIdentifier> *_thumbnailId;
}

@property(readonly) <TSDThumbnailConsumer> * consumer;
@property BOOL continueThumbnailing;
@property(readonly) <TSDThumbnailProducer> * producer;
@property(retain) TSUImage * thumbnail;
@property <TSDThumbnailIdentifier> * thumbnailId;

- (id)consumer;
- (BOOL)continueThumbnailing;
- (void)dealloc;
- (id)initWithConsumer:(id)arg1 producer:(id)arg2;
- (id)producer;
- (void)setContinueThumbnailing:(BOOL)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnailId:(id)arg1;
- (id)thumbnail;
- (id)thumbnailId;

@end
