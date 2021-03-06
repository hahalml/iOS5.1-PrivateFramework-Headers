/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface GQZArchive : NSObject
{
    NSMutableDictionary *mEntries;
    id <GQZArchiveInputStream> mInput;
    BOOL mIsEncrypted;
    NSString *mFilename;
}

- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (void)dealloc;
- (id)entryWithName:(id)arg1;
- (id)entryNames;
- (BOOL)isEncrypted;
- (id)filename;

@end

