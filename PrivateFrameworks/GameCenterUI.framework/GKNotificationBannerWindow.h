/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKNotificationBannerWindow : UIWindow {
    NSObject<OS_dispatch_semaphore> * _bannerSemaphore;
    GKNotificationBannerViewController * _currentBannerViewController;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_semaphore> *bannerSemaphore;
@property (nonatomic, retain) GKNotificationBannerViewController *currentBannerViewController;

+ (id)bannerWindow;
+ (void)enqueBanner:(id)arg1;
+ (id)queue;

- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)_canBecomeKeyWindow;
- (void)_hideBanner:(id)arg1 quickly:(BOOL)arg2;
- (BOOL)_includeInDefaultImageSnapshot;
- (void)_showBanner:(id)arg1;
- (id)bannerSemaphore;
- (id)currentBannerViewController;
- (void)dealloc;
- (void)handlePan:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setCurrentBannerViewController:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
