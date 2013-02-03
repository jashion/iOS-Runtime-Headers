/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKPreferences : NSObject {
}

@property BOOL alertsEnabled;
@property BOOL badgesEnabled;
@property NSInteger environment;
@property BOOL forceRelay;
@property BOOL ignoreSandbox;
@property NSUInteger maxPlayersHosted;
@property NSUInteger maxPlayersP2P;
@property NSUInteger operationRetryCount;
@property double operationRetryDelay;
@property double operationTimeout;
@property(readonly) BOOL parentalControlsEnabled;
@property BOOL preemptiveRelay;
@property NSInteger pushEnvironment;
@property BOOL soundsEnabled;
@property BOOL useTestProtocols;
@property BOOL verboseLogging;

+ (id)sharedPreferences;

- (BOOL)alertsEnabled;
- (BOOL)badgesEnabled;
- (NSInteger)environment;
- (BOOL)forceRelay;
- (BOOL)ignoreSandbox;
- (NSUInteger)maxPlayersHosted;
- (NSUInteger)maxPlayersP2P;
- (NSUInteger)operationRetryCount;
- (double)operationRetryDelay;
- (double)operationTimeout;
- (BOOL)parentalControlsEnabled;
- (BOOL)preemptiveRelay;
- (NSInteger)pushEnvironment;
- (void)setAlertsEnabled:(BOOL)arg1;
- (void)setBadgesEnabled:(BOOL)arg1;
- (void)setEnvironment:(NSInteger)arg1;
- (void)setForceRelay:(BOOL)arg1;
- (void)setIgnoreSandbox:(BOOL)arg1;
- (void)setMaxPlayersHosted:(NSUInteger)arg1;
- (void)setMaxPlayersP2P:(NSUInteger)arg1;
- (void)setOperationRetryCount:(NSUInteger)arg1;
- (void)setOperationRetryDelay:(double)arg1;
- (void)setOperationTimeout:(double)arg1;
- (void)setPreemptiveRelay:(BOOL)arg1;
- (void)setPushEnvironment:(NSInteger)arg1;
- (void)setSoundsEnabled:(BOOL)arg1;
- (void)setUseTestProtocols:(BOOL)arg1;
- (void)setVerboseLogging:(BOOL)arg1;
- (BOOL)soundsEnabled;
- (BOOL)useTestProtocols;
- (BOOL)verboseLogging;

@end