/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSData, NSMutableArray, NSString;

@interface PQLFormatInjection : PQLNameInjectionBase <PQLInjecting> {
    NSMutableArray *_binds;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSData * sql;
@property(readonly) Class superclass;

+ (id)formatInjection:(id)arg1;

- (void).cxx_destruct;
- (int)bindWithStatement:(struct sqlite3_stmt { }*)arg1 startingAtIndex:(int)arg2;
- (id)description;
- (id)initWithFormat:(id)arg1 arguments:(void*)arg2;

@end
