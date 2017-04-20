/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

@interface SOSContactsManager : NSObject {
    FKFriendsManager * _friendsManager;
    int  _healthContactsNotificationToken;
    HKHealthStore * _healthStore;
    NSObject<OS_dispatch_semaphore> * _initialStateSemaphore;
    SOSLegacyContactsManager * _legacyContactsManager;
    NSArray * _medicalIDEmergencyContacts;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    }  _medicalIDEmergencyContactsMutex;
}

@property (nonatomic, readonly) BOOL SOSContactsExist;
@property (nonatomic, retain) FKFriendsManager *friendsManager;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *initialStateSemaphore;
@property (nonatomic, readonly) SOSLegacyContactsManager *legacyContactsManager;
@property (nonatomic, retain) NSArray *medicalIDEmergencyContacts;
@property (nonatomic) struct _opaque_pthread_mutex_t { long x1; BOOL x2[40]; } medicalIDEmergencyContactsMutex;

+ (BOOL)authorizedToUseContactStore;
+ (id)contactStore;
+ (void)preloadContactStoreIfNecessary;

- (void).cxx_destruct;
- (id)SOSContactDestinations;
- (BOOL)SOSContactsExist;
- (void)SOSContactsWithTimeout:(double)arg1 andCompletion:(id /* block */)arg2;
- (id)SOSDestinationsForFriend:(id)arg1;
- (id)SOSFormattedDestinationForFriend:(id)arg1 withDestinationNumber:(id)arg2;
- (id)SOSFriends;
- (id)SOSFriendsDestinations;
- (id)_contactFromFriend:(id)arg1;
- (BOOL)_isEmergencyNumber:(id)arg1;
- (void)_medicalContactsDidChange;
- (void)_medicalIDEmergencyContactsWithCompletion:(id /* block */)arg1;
- (id)_userDefaults;
- (void)_waitForInitialState;
- (BOOL)addContactAsSOSFriend:(id)arg1 destinationNumber:(id)arg2 error:(id*)arg3;
- (BOOL)addSOSFriend:(id)arg1 destinationNumber:(id)arg2 error:(id*)arg3;
- (void)contactStoreDidChange;
- (void)dealloc;
- (id)friendsManager;
- (BOOL)hasValidContactsToMessage;
- (id)healthStore;
- (id)init;
- (id)initialStateSemaphore;
- (id)legacyContactsManager;
- (id)medicalIDEmergencyContacts;
- (struct _opaque_pthread_mutex_t { long x1; BOOL x2[40]; })medicalIDEmergencyContactsMutex;
- (id)phoneNumbersToMessage;
- (void)removeSOSFriend:(id)arg1 destinationNumber:(id)arg2;
- (void)setFriendsManager:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setInitialStateSemaphore:(id)arg1;
- (void)setMedicalIDEmergencyContacts:(id)arg1;
- (void)setMedicalIDEmergencyContactsMutex:(struct _opaque_pthread_mutex_t { long x1; BOOL x2[40]; })arg1;

@end