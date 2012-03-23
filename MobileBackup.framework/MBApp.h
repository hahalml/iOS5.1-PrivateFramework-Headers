/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface MBApp : NSObject <NSCopying>
{
    NSMutableDictionary *_plist;
}

+ (id)appWithBundleID:(id)arg1;
+ (id)appWithPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToApp:(id)arg1;
- (unsigned int)hash;
@property(readonly, nonatomic) NSString *bundleID;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(retain, nonatomic) NSString *containerDir;
@property(readonly, nonatomic) NSString *safeHarborDir;
@property(retain, nonatomic) NSDate *datePlacedInSafeHarbor;
@property(readonly, nonatomic, getter=isSafeHarbor) BOOL safeHarbor;
- (id)propertyListForSafeHarborInfo;
@property(readonly, nonatomic) BOOL isPlaceholder;
- (id)propertyListForBackupProperties;
- (id)domain;
- (id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)arg1;
- (id)placeholderDomainWithCache:(id)arg1;
@property(readonly, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_plist;

@end
