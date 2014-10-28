/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSDate, NSMutableSet, PLEntryNotificationOperatorComposition, PLOperator;

@interface PLAWDCpuAP : PLAWDAuxMetrics {
    long _apSubmitCnt;
    long _cpuLoadSubmitCnt;
    PLEntryNotificationOperatorComposition *_ioreportEnergyEventCallback;
    BOOL _isIoreportEnergy;
    PLEntryNotificationOperatorComposition *_monitorEventCallback;
    NSDate *_sleepStartTime;
    PLEntryNotificationOperatorComposition *_wakeEventCallback;
}

@property long apSubmitCnt;
@property long cpuLoadSubmitCnt;
@property(retain) PLEntryNotificationOperatorComposition * ioreportEnergyEventCallback;
@property BOOL isIoreportEnergy;
@property(retain) PLEntryNotificationOperatorComposition * monitorEventCallback;
@property PLOperator * operator;
@property(retain) NSMutableSet * runningMetrics;
@property(retain) NSDate * sleepStartTime;
@property(retain) PLEntryNotificationOperatorComposition * wakeEventCallback;

+ (id)entryAggregateDefinitionAwdAp;
+ (id)entryAggregateDefinitionAwdCpu;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (void).cxx_destruct;
- (void)addEntryToApMetricsTable:(id)arg1 withValue:(double)arg2;
- (long)apSubmitCnt;
- (long)cpuLoadSubmitCnt;
- (void)handleIOReportEnergyCallback:(id)arg1;
- (void)handleMonitorCallback:(id)arg1;
- (void)handleWakeCallback:(id)arg1;
- (id)ioreportEnergyEventCallback;
- (BOOL)isIoreportEnergy;
- (id)monitorEventCallback;
- (void)resetApTable;
- (void)setApSubmitCnt:(long)arg1;
- (void)setCpuLoadSubmitCnt:(long)arg1;
- (void)setIoreportEnergyEventCallback:(id)arg1;
- (void)setIsIoreportEnergy:(BOOL)arg1;
- (void)setMonitorEventCallback:(id)arg1;
- (void)setSleepStartTime:(id)arg1;
- (void)setWakeEventCallback:(id)arg1;
- (id)sleepStartTime;
- (void)startApMetricCollection:(id)arg1;
- (void)startCpuMetricCollection:(id)arg1;
- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (BOOL)submitApDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (BOOL)submitCpuDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (id)wakeEventCallback;

@end
