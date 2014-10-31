//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, SUCatalog;

@interface SUCatalogDataManager : NSObject
{
    NSString *_catalogEntityTag;
    NSMutableDictionary *_lastClientRetrievalPostDateByKey;
    BOOL _isDefaultAppleProductionCatalogURL;
    BOOL _isAppleSeedCatalogURL;
    SUCatalog *_catalog;
    NSString *_cachePathRoot;
    struct dispatch_semaphore_s *_inFlightSemaphore;
    struct dispatch_queue_s *_updateQueue;
    struct dispatch_queue_s *_loadQueue;
    struct dispatch_queue_s *_handlerQueue;
}

+ (id)sharedManager;
- (void)dumpDebugInfo;
- (void)resetState;
- (void)archiveToCoder:(id)arg1;
- (void)restoreFromCoder:(id)arg1;
- (void)_purgeChangedAndRemovedProductsFromCache;
- (void)_removeCacheForProduct:(id)arg1 reason:(id)arg2;
- (id)_cachePathForURL:(id)arg1 inProduct:(id)arg2;
- (id)_cachePathForProduct:(id)arg1;
- (void)invalidateResourcesForProduct:(id)arg1;
- (void)retrievePKMDataForProduct:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)undoRetrieveDistributionDataForProduct:(id)arg1;
- (void)retrieveDistributionDataForProduct:(id)arg1 preferredLocalizations:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_retrieveURL:(id)arg1 forProduct:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)enumerateProductsWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)isCurrentCatalogAppleSeed;
- (BOOL)isCurrentCatalogDefaultAppleProduction;
- (void)retrieveCatalogWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
