//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedRemoteCalendar.h>

@class NSString;

@interface CalManagedExchangeCalendar : CalManagedRemoteCalendar
{
}

+ (void)enableChangeRequestNotifications;
+ (id)entityName;
- (void)setSharees:(id)arg1;
- (id)sharees;
- (id)fixAndReportIssuesInNewlyImportedItem:(id)arg1;
- (void)deleteItemsWithoutIds:(id)arg1;
- (void)deleteItemsWithIds:(id)arg1;
- (id)properties;
- (BOOL)shareDefaultAlarmSettings;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForWrite:(id *)arg1;
- (id)nodesInNamespace;
- (BOOL)hasCapability:(int)arg1;
- (BOOL)isAffectingAvailability;
- (BOOL)isRenameable;
- (BOOL)isDeletable;
- (BOOL)keepSyncRecordLocal;
- (id)type;
- (id)relativePath;
- (id)calendarSource;

// Remaining properties
@property(retain) NSString *changeKey; // @dynamic changeKey;
@property(retain) NSString *folderID; // @dynamic folderID;
@property BOOL isDistinguished; // @dynamic isDistinguished;
@property(retain) NSString *parentFolderID; // @dynamic parentFolderID;
@property(retain) NSString *syncState; // @dynamic syncState;

@end
