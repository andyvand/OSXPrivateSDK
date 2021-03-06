/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalSession.h>

#import "EWSExchangeServiceBindingDelegate-Protocol.h"

@class CalOperationQueue, NSMutableDictionary, NSString;

@interface CalExchangeSession : CalSession <EWSExchangeServiceBindingDelegate>
{
    CalOperationQueue *_queue;
    BOOL _connectionHasBeenTested;
    BOOL _connectionIsBeingTested;
    NSMutableDictionary *_managedObjectIDsToItemIds;
}

@property BOOL connectionHasBeenTested; // @synthesize connectionHasBeenTested=_connectionHasBeenTested;
- (id)debugInfo;
- (void)systemNetworkDidChange;
- (id)managedPrincipalInContext:(id)arg1;
- (void)testConnection;
- (void)setItemId:(id)arg1 forManagedObjectID:(id)arg2;
- (id)itemIdForManagedObjectID:(id)arg1;
- (void)exchangeServiceBinding:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)exchangeServiceBinding:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)deletePersistedErrorAndNotify;
- (BOOL)persistError:(id)arg1 forOperation:(id)arg2;
- (BOOL)persistErrorAndNotify;
- (BOOL)processChangeRequests:(BOOL)arg1;
- (void)synchronizeDelegatesWithCompletion:(id)arg1;
- (void)synchronizeWithFlags:(long long)arg1;
- (void)mailModifiedEWSInvitation:(id)arg1;
- (id)webServicesURL;
- (id)operationQueue;
- (double)timeSinceLastSync;
- (BOOL)activate;
- (void)deactivate;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

