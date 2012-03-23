/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface ClockManager : NSObject
{
    BOOL _performingUpgrade;
    NSArray *_scheduledLocalNotifications;
    BOOL runningInSpringBoard;
    BOOL runningInAssistantPlugin;
    BOOL ignoringNotificationPostRequests;
}

+ (void)loadUserPreferences;
+ (void)saveAndNotifyForUserPreferences:(BOOL)arg1 localNotifications:(BOOL)arg2;
+ (void)openClockAppWithSection:(int)arg1;
+ (int)sectionFromClockAppURL:(id)arg1;
+ (id)sharedManager;
- (void)dealloc;
- (BOOL)upgradeIfNeverAttempted;
- (BOOL)upgrade;
- (BOOL)discardOldVersion;
- (void)postUserPreferencesChangedNotification;
- (void)scheduleLocalNotification:(id)arg1;
- (void)cancelLocalNotification:(id)arg1;
- (void)refreshScheduledLocalNotificationsCache;
- (id)scheduledLocalNotificationsCache;
@property(nonatomic, getter=isIgnoringNotificationPostRequests) BOOL ignoringNotificationPostRequests; // @synthesize ignoringNotificationPostRequests;
@property(nonatomic, getter=isRunningInAssistantPlugin) BOOL runningInAssistantPlugin; // @synthesize runningInAssistantPlugin;
@property(nonatomic, getter=isRunningInSpringBoard) BOOL runningInSpringBoard; // @synthesize runningInSpringBoard;

@end
