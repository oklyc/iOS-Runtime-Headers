/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSError, NSURL, UIImage;

@interface QLThumbnailCreationOperation : NSOperation {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _contentRect;
    NSURL *_documentURL;
    NSError *_error;
    BOOL _executing;
    BOOL _finished;
    UIImage *_image;
    float _maximumDimension;
    float _scaleFactor;
    unsigned int _useMode;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentRect;
@property(retain) NSURL * documentURL;
@property(retain) NSError * error;
@property(retain) UIImage * image;
@property float maximumDimension;
@property float scaleFactor;
@property unsigned int useMode;

- (void)_finish;
- (BOOL)_finishIfCancelled;
- (void)checkIfThumbnailExistsAtPhysicalURL:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (void)dealloc;
- (id)documentURL;
- (id)error;
- (id)image;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (float)maximumDimension;
- (void)retrieveThumbnailForPhysicalURL:(id)arg1 hasThumbnailInIndex:(BOOL)arg2;
- (float)scaleFactor;
- (void)setContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDocumentURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExecuting:(BOOL)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setMaximumDimension:(float)arg1;
- (void)setScaleFactor:(float)arg1;
- (void)setUseMode:(unsigned int)arg1;
- (void)start;
- (unsigned int)useMode;

@end
