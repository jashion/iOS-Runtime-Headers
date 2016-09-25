/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFeedbackAVHapticPlayer : NSObject <_UIFeedbackPlayer> {
    AVHapticPlayerChannel * _channel;
    unsigned int  _continuousPlayingCount;
    id /* block */  _invalidationBlock;
}

@property (nonatomic, retain) AVHapticPlayerChannel *channel;
@property (nonatomic) unsigned int continuousPlayingCount;
@property (nonatomic, copy) id /* block */ invalidationBlock;

- (void).cxx_destruct;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (void)_stopFeedback:(id)arg1;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (id)channel;
- (unsigned int)continuousPlayingCount;
- (id /* block */)invalidationBlock;
- (BOOL)isEqual:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setContinuousPlayingCount:(unsigned int)arg1;
- (void)setInvalidationBlock:(id /* block */)arg1;

@end