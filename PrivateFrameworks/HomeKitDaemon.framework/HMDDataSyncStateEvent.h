/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataSyncStateEvent : HMDLogEvent {
    unsigned int  _dataSyncState;
}

@property (nonatomic) unsigned int dataSyncState;

+ (id)dataSyncStateEstablished:(unsigned int)arg1;
+ (id)uuid;

- (unsigned int)dataSyncState;
- (id)initWithDataSyncState:(unsigned int)arg1;
- (void)setDataSyncState:(unsigned int)arg1;

@end
