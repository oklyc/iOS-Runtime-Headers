/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class <DAFolderChangeConsumer>, NSString;

@interface DAFolderChange : NSObject <NSSecureCoding> {
    int _changeType;
    <DAFolderChangeConsumer> *_consumer;
    int _dataclass;
    NSString *_displayName;
    NSString *_folderId;
    NSString *_parentFolderId;
    BOOL _renameOnCollision;
    unsigned int _taskId;
}

@property int changeType;
@property <DAFolderChangeConsumer> * consumer;
@property int dataclass;
@property(retain) NSString * displayName;
@property(retain) NSString * folderId;
@property(retain) NSString * parentFolderId;
@property BOOL renameOnCollision;
@property unsigned int taskId;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)changeType;
- (id)consumer;
- (int)dataclass;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)folderId;
- (id)initFolderChangeWithChangeType:(int)arg1 folderId:(id)arg2 parentFolderId:(id)arg3 displayName:(id)arg4 dataclass:(int)arg5 consumer:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)mf_deferredOperation;
- (id)parentFolderId;
- (BOOL)renameOnCollision;
- (void)setChangeType:(int)arg1;
- (void)setConsumer:(id)arg1;
- (void)setDataclass:(int)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFolderId:(id)arg1;
- (void)setParentFolderId:(id)arg1;
- (void)setRenameOnCollision:(BOOL)arg1;
- (void)setTaskId:(unsigned int)arg1;
- (unsigned int)taskId;

@end
