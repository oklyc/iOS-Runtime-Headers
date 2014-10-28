/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, NSString;

@interface VMUProcInfo : NSObject {
    struct timeval { 
        int tv_sec; 
        int tv_usec; 
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_firstArg;
    NSString *_name;
    BOOL _needTaskPortDealloc;
    int _pid;
    int _ppid;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    } _startTime;
    unsigned int _task;
}

+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(int)arg1;
+ (int)processParentId:(int)arg1;

- (id)_infoFromCommandLine:(int)arg1;
- (id)arguments;
- (int)compare:(id)arg1;
- (int)compareByName:(id)arg1;
- (int)compareByUserAppName:(id)arg1;
- (int)cpuType;
- (void)dealloc;
- (id)description;
- (id)envVars;
- (void)finalize;
- (id)firstArgument;
- (unsigned int)hash;
- (id)init;
- (id)initWithPid:(int)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (BOOL)isApp;
- (BOOL)isCFM;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMachO;
- (BOOL)isNative;
- (BOOL)isRunning;
- (id)name;
- (int)pid;
- (int)ppid;
- (id)procTableName;
- (id)realAppName;
- (id)requestedAppName;
- (BOOL)signal:(int)arg1;
- (struct timeval { int x1; int x2; })startTime;
- (unsigned int)task;
- (BOOL)terminate;
- (void)update;
- (id)userAppName;
- (id)valueForEnvVar:(id)arg1;

@end
