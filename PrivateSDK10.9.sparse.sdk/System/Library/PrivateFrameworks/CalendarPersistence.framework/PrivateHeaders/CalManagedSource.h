//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CoreCalendarSource.h>

@interface CalManagedSource : CoreCalendarSource
{
    int _status;
}

- (id)eventsWithFutureInvitationsInManagedObjectContext:(id)arg1;
- (BOOL)hasEntitiesInManagedObjectContext:(id)arg1;
- (BOOL)removeEntities:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)removeEntity:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)modifyEntities:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)modifyEntity:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)addEntities:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)addEntity:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)entitiesMatchingSearchElement:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)hasCalendarItemForSharedUID:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)entityForSharedUID:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)entityForLocalUID:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)calendarItemsWithFilenames:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)calendarItemsWithSharedUID:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)batchCalendarItemsWithSharedUIDsHelper:(id)arg1 inContext:(id)arg2;
- (id)calendarItemWithSharedUID:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)batchCalendarItemsWithSharedUIDs:(id)arg1 inContext:(id)arg2;
- (id)calendarItemWithLocalUID:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)calendarInManagedObjectContext:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)initWithKey:(id)arg1;

@end

