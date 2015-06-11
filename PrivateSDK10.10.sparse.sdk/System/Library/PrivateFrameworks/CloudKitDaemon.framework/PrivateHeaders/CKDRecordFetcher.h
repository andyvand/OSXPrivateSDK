/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_group>, NSSet;

// Not exported
@interface CKDRecordFetcher : CKDDatabaseOperation
{
    BOOL _fetchAssetContents;
    BOOL _preserveOrdering;
    NSArray *_recordResponsesToFetch;
    NSSet *_desiredKeys;
    id _recordFetchedBlock;
    NSObject<OS_dispatch_group> *_fetchGroup;
    NSMutableDictionary *_fetchedRecordInfoByRecordID;
    NSMutableArray *_recordIDsToFetch;
}

@property(retain, nonatomic) NSMutableArray *recordIDsToFetch; // @synthesize recordIDsToFetch=_recordIDsToFetch;
@property(retain, nonatomic) NSMutableDictionary *fetchedRecordInfoByRecordID; // @synthesize fetchedRecordInfoByRecordID=_fetchedRecordInfoByRecordID;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property(copy, nonatomic) id recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
@property(retain, nonatomic) NSSet *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) BOOL preserveOrdering; // @synthesize preserveOrdering=_preserveOrdering;
@property(nonatomic) BOOL fetchAssetContents; // @synthesize fetchAssetContents=_fetchAssetContents;
@property(retain, nonatomic) NSArray *recordResponsesToFetch; // @synthesize recordResponsesToFetch=_recordResponsesToFetch;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_flushFetchedRecordsToConsumer;
- (void)_fetchRecordsFromServer:(id)arg1 fullRecords:(id)arg2;
- (BOOL)shouldCheckAppVersion;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
