/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface GQDWPListLabelGeometry : NSObject <GQDNameMappable> {
    float mBaselineOffset;
    int mLabelAlignment;
    float mScale;
    BOOL mScaleWithText;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (float)baselineOffset;
- (int)labelAlignment;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (float)scale;
- (BOOL)scaleWithText;

@end
