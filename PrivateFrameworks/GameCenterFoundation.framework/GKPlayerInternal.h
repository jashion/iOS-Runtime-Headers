/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKGameInternal, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface GKPlayerInternal : GKInternalRepresentation {
    union { 
        struct { 
            unsigned int _unused : 8; 
            unsigned int _purpleBuddyAccount : 1; 
            unsigned int _underage : 1; 
            unsigned int _photoPending : 1; 
            unsigned int _findable : 1; 
            unsigned int _reserved : 18; 
        } ; 
        unsigned int _value; 
    NSString *_alias;
    } _flags;
    unsigned int _numberOfAchievementPoints;
    unsigned int _numberOfAchievements;
    unsigned short _numberOfFriends;
    unsigned short _numberOfFriendsInCommon;
    unsigned short _numberOfGames;
    unsigned short _numberOfGamesInCommon;
    NSDictionary *_photos;
    NSString *_playerID;
}

@property(retain) NSString * accountName;
@property(retain) NSString * alias;
@property(retain) NSString * compositeName;
@property(retain) NSArray * emailAddresses;
@property(retain) NSString * facebookUserID;
@property(getter=isFindable) bool findable;
@property(retain) NSString * firstName;
@property unsigned int flags;
@property(retain) NSArray * friends;
@property(retain) NSNumber * iCloudUserID;
@property(readonly) bool isAnonymousPlayer;
@property(readonly) bool isAutomatchPlayer;
@property(readonly) bool isFriend;
@property(readonly) bool isLoaded;
@property(readonly) bool isLocalPlayer;
@property(readonly) bool isUnknownPlayer;
@property(retain) NSString * lastName;
@property(retain) NSDate * lastPlayedDate;
@property(retain) GKGameInternal * lastPlayedGame;
@property unsigned int numberOfAchievementPoints;
@property unsigned int numberOfAchievements;
@property unsigned short numberOfChallenges;
@property unsigned short numberOfFriends;
@property unsigned short numberOfFriendsInCommon;
@property unsigned short numberOfGames;
@property unsigned short numberOfGamesInCommon;
@property unsigned short numberOfRequests;
@property unsigned short numberOfTurns;
@property(getter=isPhotoPending) bool photoPending;
@property(retain) NSDictionary * photos;
@property(retain) NSString * playerID;
@property(getter=isPurpleBuddyAccount) bool purpleBuddyAccount;
@property(retain) NSString * status;
@property(getter=isUnderage) bool underage;

+ (Class)classForFamiliarity:(int)arg1;
+ (id)compositeNameForFirstName:(id)arg1 lastName:(id)arg2;
+ (id)displayNameWithOptions:(unsigned char)arg1 alias:(id)arg2 composite:(id)arg3;
+ (id)secureCodedPropertyKeys;

- (id)accountName;
- (id)alias;
- (bool)allowNearbyMultiplayer;
- (id)cacheKey;
- (id)compositeName;
- (id)conciseDescription;
- (void)dealloc;
- (int)defaultFamiliarity;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (id)emailAddresses;
- (id)facebookUserID;
- (id)firstName;
- (unsigned int)flags;
- (id)friends;
- (unsigned long long)hash;
- (id)iCloudUserID;
- (bool)isAnonymousPlayer;
- (bool)isAutomatchPlayer;
- (bool)isEqual:(id)arg1;
- (bool)isFindable;
- (bool)isFriend;
- (bool)isLoaded;
- (bool)isLocalPlayer;
- (bool)isPhotoPending;
- (bool)isPurpleBuddyAccount;
- (bool)isUnderage;
- (bool)isUnknownPlayer;
- (id)lastName;
- (id)lastPlayedDate;
- (id)lastPlayedGame;
- (id)minimalInternal;
- (unsigned int)numberOfAchievementPoints;
- (unsigned int)numberOfAchievements;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfFriends;
- (unsigned short)numberOfFriendsInCommon;
- (unsigned short)numberOfGames;
- (unsigned short)numberOfGamesInCommon;
- (unsigned short)numberOfRequests;
- (unsigned short)numberOfTurns;
- (id)photos;
- (id)playerID;
- (id)serverRepresentation;
- (void)setAccountName:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setAllowNearbyMultiplayer:(bool)arg1;
- (void)setCompositeName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setFacebookUserID:(id)arg1;
- (void)setFindable:(bool)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setFriends:(id)arg1;
- (void)setICloudUserID:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLastPlayedDate:(id)arg1;
- (void)setLastPlayedGame:(id)arg1;
- (void)setNumberOfAchievementPoints:(unsigned int)arg1;
- (void)setNumberOfAchievements:(unsigned int)arg1;
- (void)setNumberOfChallenges:(unsigned short)arg1;
- (void)setNumberOfFriends:(unsigned short)arg1;
- (void)setNumberOfFriendsInCommon:(unsigned short)arg1;
- (void)setNumberOfGames:(unsigned short)arg1;
- (void)setNumberOfGamesInCommon:(unsigned short)arg1;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (void)setPhotoPending:(bool)arg1;
- (void)setPhotos:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setPurpleBuddyAccount:(bool)arg1;
- (void)setStatus:(id)arg1;
- (void)setUnderage:(bool)arg1;
- (id)status;

@end