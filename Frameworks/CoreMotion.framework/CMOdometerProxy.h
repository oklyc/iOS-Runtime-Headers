/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDate, NSObject<OS_dispatch_queue>;

@interface CMOdometerProxy : NSObject {
    int _mode;
    NSDate *_startDate;
    double _totalDistance;
    NSObject<OS_dispatch_queue> *fCallbackQueue;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; id x4; struct CLConnection {} *x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct CLNameValuePair { int (**x_7_1_1)(); struct __CFDictionary {} *x_7_1_2; } x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; id x9; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x10; id x11; void*x12; struct map<std::__1::basic_string<char>, void (^)(CLConnectionMessage *), std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, void (^)(CLConnectionMessage *)> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)> > >=^{__tree_node<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, void *> {} x13; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *> {} x14; } *fLocationdConnection;
}

@property int mode;
@property(retain) NSDate * startDate;
@property double totalDistance;

- (void)_startDaemonConnection;
- (void)_startOdometerUpdatesForActivity:(int)arg1 withHandler:(id)arg2;
- (void)_stopOdometerUpdates;
- (void)_teardown;
- (void)dealloc;
- (id)init;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTotalDistance:(double)arg1;
- (id)startDate;
- (double)totalDistance;

@end
