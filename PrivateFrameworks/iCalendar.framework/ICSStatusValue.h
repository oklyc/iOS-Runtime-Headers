/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSString;

@interface ICSStatusValue : ICSPredefinedValue {
    NSString *_statusString;
}

@property(retain) NSString * statusString;

+ (id)statusTypeFromCode:(int)arg1 statusString:(id)arg2;
+ (id)statusTypeFromCode:(int)arg1;
+ (id)statusValueFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (void)dealloc;
- (void)setStatusString:(id)arg1;
- (id)statusString;

@end
