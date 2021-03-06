//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPAVRoutingControllerDelegate.h"

@class MPAVRoute, MPAVRoutingController, MPReportingController, NSDate, NSObject<OS_dispatch_source>, RUPlaybackTimeoutInfoController, RadioStation;

@interface MusicRadioPlaybackCoordinator : NSObject <MPAVRoutingControllerDelegate>
{
    MPAVRoutingController *_routingController;
    MPAVRoute *_pickedRoute;
    BOOL _deviceIsDocked;
    BOOL _deviceIsLocked;
    BOOL _didPresentNotificationForCurrentItem;
    int _lockStateNotifyToken;
    BOOL _lockStateNotifyTokenIsValid;
    void *_mediaRemoteCommandObserver;
    NSObject<OS_dispatch_source> *_pauseTimeoutTimerSource;
    RadioStation *_playbackNotificationStation;
    BOOL _playbackIsPaused;
    NSDate *_playbackTimeoutBeginDate;
    double _playbackTimeoutDuration;
    RUPlaybackTimeoutInfoController *_playbackTimeoutInfoController;
    struct __CFUserNotification *_playbackTimeoutNotification;
    BOOL _playbackTimeoutNotificationDidExpire;
    NSObject<OS_dispatch_source> *_playbackTimeoutNotificationExpirationTimerSource;
    struct __CFRunLoopSource *_playbackTimeoutNotificationRunLoopSource;
    NSObject<OS_dispatch_source> *_presentPlaybackTimeoutTimerSource;
    BOOL _wasUsingBackgroundNetwork;
    RadioStation *_currentStation;
    MPReportingController *_reportingController;
}

+ (id)sharedCoordinator;
@property(retain, nonatomic) MPReportingController *reportingController; // @synthesize reportingController=_reportingController;
@property(retain, nonatomic) RadioStation *currentStation; // @synthesize currentStation=_currentStation;
- (void).cxx_destruct;
- (void)_updatePlaybackTimerForDeviceStateChange;
- (void)_schedulePlaybackTimeoutNotificationExpirationTimerIfNeeded;
- (void)_resetPlaybackTimeoutInformation;
- (void)_receivedUserNotificationResponseForUserNotification:(struct __CFUserNotification *)arg1 withResponseFlags:(unsigned long)arg2;
- (void)_presentPlaybackTimeoutNotificationForCurrentItemIfNeeded;
- (BOOL)_isRadioRelevantItem:(id)arg1;
- (BOOL)_isPauseTimeoutActive;
- (void)_dismissExpiredPlaybackTimeoutNotificationForced:(BOOL)arg1;
- (void)_cancelPresentPlaybackTimeoutTimer;
- (void)_cancelPlaybackTimeoutNotificationExpirationTimer;
- (void)_cancelPlaybackTimeoutNotification;
- (void)_cancelPauseTimeoutTimer;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_playbackContentsDidChangeNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_itemIsLikedDidChangeNotification:(id)arg1;
- (void)_itemIsInWishListDidChangeNotification:(id)arg1;
- (void)_itemIsBannedDidChangeNotification:(id)arg1;
- (void)_itemDurationDidBecomeAvailableNotification:(id)arg1;
- (void)_fullMuteDidChangeNotification:(id)arg1;
- (void)_effectiveVolumeDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_setupPlayerWithRadioPlaybackContext:(id)arg1;
- (void)setupPlaybackQueueWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

