/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary;

@interface _NSThreadData : NSObject {
    struct _opaque_pthread_attr_t { 
        long __sig; 
        BOOL __opaque[36]; 
    id argument;
    } attr;
    unsigned char cancel;
    double defpri;
    id dict;
    id name;
    NSMutableDictionary *performD;
    id performQ;
    double pri;
    BOOL qos;
    unsigned char qstate;
    SEL selector;
    int seqNum;
    unsigned char status;
    id target;
    struct _opaque_pthread_t { long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[4088]; } *tid;
}

@end
