//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFMessageStore.h>

#import "MFPOPConnectionDelegate.h"
#import "MFRouterStore.h"

@class NSMutableIndexSet, NSMutableSet;

@interface MFPOPStore : MFMessageStore <MFPOPConnectionDelegate, MFRouterStore>
{
    NSMutableSet *_skippedMessageIds;
    NSMutableIndexSet *_messageNumbersToDelete;
    BOOL _lastConnectionFailed;
    BOOL _routerCancelled;
}

@property BOOL routerCancelled; // @synthesize routerCancelled=_routerCancelled;
- (void)messagesWereRouted:(id)arg1;
- (void)messagesWillBeRouted:(id)arg1;
- (id)_defaultRouterDestination;
- (void)cancel;
- (void)connection:(id)arg1 didRetrieveData:(id)arg2 forMessageNumber:(unsigned long long)arg3;
- (long long)connection:(id)arg1 willRetrieveMessageNumber:(unsigned long long)arg2 header:(id)arg3 size:(unsigned long long)arg4;
- (void)connection:(id)arg1 receivedNumberOfBytes:(unsigned long long)arg2;
- (BOOL)connectionShouldPrefetchMessages;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (void)_cancelAutosave;
- (void)_setNeedsAutosave;
- (void)writeUpdatedMessageDataToDisk;
- (id)messageForMessageID:(id)arg1;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)displayName;
- (BOOL)isOpened;
- (id)mailbox;
- (id)_copyMessageNumbersToDelete;
- (void)_clearMessageNumbersToDelete;
- (void)_addMessageNumberToDelete:(unsigned long long)arg1;
- (long long)_closeConnection:(id)arg1;
- (void)_deleteMessagesMarkedForDeletionUsingManager:(id)arg1;
- (void)_removeDeletedMessagesWithNumbers:(id)arg1 fromSeenMessageManager:(id)arg2 connection:(id)arg3;
- (BOOL)_shouldDeleteSeenMessage:(id)arg1 messageID:(id)arg2 deletionPolicy:(long long)arg3 cutoffDate:(id)arg4 url:(id)arg5 inbox:(id)arg6;
- (id)_messageIDForNumber:(unsigned long long)arg1 serverIdsByNumber:(id)arg2 connection:(id)arg3;
- (BOOL)_firstAndLast:(unsigned long long)arg1 onConnection:(id)arg2 alreadySeen:(id)arg3;
- (void)_backgroundFetchFailed:(id)arg1;
- (id)_authenticatedConnection;
- (BOOL)_createDirectoryIfNeeded;
- (void)fetchSynchronously;
- (void)deleteMessages:(id)arg1;
- (id)account;
- (void)dealloc;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2;
- (id)init;
- (id)initWithPOPAccount:(id)arg1;

@end

