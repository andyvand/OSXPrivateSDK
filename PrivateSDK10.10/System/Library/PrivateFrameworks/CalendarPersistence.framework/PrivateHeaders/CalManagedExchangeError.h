/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalManagedError.h>

@class CalManagedExchangePrincipal, CalManagedPersistentOperation;

@interface CalManagedExchangeError : CalManagedError
{
}

+ (id)entityName;
- (id)copyScrubbedUserInfoForError:(id)arg1;

// Remaining properties
@property(retain) CalManagedPersistentOperation *operation; // @dynamic operation;
@property(retain) CalManagedExchangePrincipal *principal; // @dynamic principal;

@end
