/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBWallpaperDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, retain) NSDate *dateIrisWallpaperLastPlayed;
@property (nonatomic, retain) NSString *homeScreenCropRectString;
@property (nonatomic) BOOL homeScreenMagnifyEnabled;
@property (nonatomic) float homeScreenParallaxFactor;
@property (nonatomic) BOOL homeScreenPortrait;
@property (nonatomic) BOOL homeScreenSupportsCropping;
@property (nonatomic, retain) NSString *homeScreenWallpaperIdentifier;
@property (nonatomic, retain) NSString *homeScreenWallpaperName;
@property (nonatomic, retain) NSDictionary *homeScreenWallpaperOptions;
@property (nonatomic) BOOL homeScreenWallpaperWasUserSet;
@property (nonatomic) float homeScreenZoomScale;
@property (nonatomic) unsigned int irisWallpaperPlayCount;
@property (nonatomic, readonly) BOOL legacyUsesUniqueHomeScreenWallpaper;
@property (nonatomic, retain) NSString *lockScreenCropRectString;
@property (nonatomic) BOOL lockScreenHasVideo;
@property (nonatomic) BOOL lockScreenMagnifyEnabled;
@property (nonatomic) float lockScreenParallaxFactor;
@property (nonatomic) BOOL lockScreenPortrait;
@property (nonatomic) double lockScreenStillTimeInVideo;
@property (nonatomic) BOOL lockScreenSupportsCropping;
@property (nonatomic, retain) NSString *lockScreenWallpaperIdentifier;
@property (nonatomic, retain) NSString *lockScreenWallpaperName;
@property (nonatomic, retain) NSDictionary *lockScreenWallpaperOptions;
@property (nonatomic) BOOL lockScreenWallpaperWasUserSet;
@property (nonatomic) float lockScreenZoomScale;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end