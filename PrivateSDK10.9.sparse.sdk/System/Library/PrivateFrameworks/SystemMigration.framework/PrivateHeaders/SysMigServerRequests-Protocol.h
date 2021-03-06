//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL, SMMigrationRequest, SMMigrationRequest_Xibalba, SMSystem, XMSystemProfile;

@protocol SysMigServerRequests
- (oneway void)quit;
- (NSArray *)incompatibleAppDataForSystemAtURL:(NSURL *)arg1;
- (NSArray *)logItems;
- (oneway void)removeKnownSystem:(SMSystem *)arg1;
- (oneway void)addNonBonjourRemoteShare:(NSURL *)arg1;
- (oneway void)unmountRemoteTMSharesExcluding:(SMSystem *)arg1;
- (oneway void)unmountAllRemoteTMShares;
- (oneway void)mountRemoteTMShare:(SMSystem *)arg1;
- (void)deletePreviousMigrationRequest;
- (BOOL)canResumePreviousMigrationRequest;
- (oneway void)resumeMigrationWithDelegate:(id)arg1;
- (oneway void)startMigrationWithDelegate:(id)arg1 andRequest:(bycopy SMMigrationRequest *)arg2;
- (oneway void)cancelMigration;
- (oneway void)resetMigration;
- (void)waitOnBlacklistUpdate;
- (oneway void)ensureUpdatedBlacklist;
- (oneway void)stopNetworkMigrationServer;
- (NSString *)startNetworkMigrationServer:(NSString *)arg1;
- (BOOL)outdatedNetworkMigrationClientsDiscovered;
- (NSString *)networkMigrationSharedSecret;
- (void)deleteNetworkMigrationKeychain;
- (void)releaseSystemAssertions;
- (NSMutableDictionary *)userDataStores;
- (void)setTrustedPassCode:(NSNumber *)arg1;
- (void)unmount:(NSURL *)arg1;
- (void)mount:(NSURL *)arg1 withCredentials:(NSString *)arg2;
- (int)checkUserCollisionOnSystem:(NSString *)arg1 withNewName:(NSString *)arg2 andNewLongName:(NSString *)arg3 conflictedUID:(unsigned int *)arg4 mayReplace:(char *)arg5;
- (NSNumber *)sizeForFileGroupingForPath:(NSString *)arg1 onSourceSystemUrl:(NSString *)arg2 andDestinationSystemUrl:(NSString *)arg3;
- (SMSystem *)getSystemAtLogicalVolumeUUID:(NSString *)arg1;
- (SMSystem *)getSystemAtURL:(NSURL *)arg1;
- (void)sizeAllUsersForSystem:(NSString *)arg1 sizeFileVaultUsers:(BOOL)arg2;
- (NSArray *)getAllUsersForSystem:(NSString *)arg1;
- (NSArray *)getAllSystems;
- (void)startSearchingForValidSystems;

@optional
- (oneway void)cancelXibalbaMigration;
- (oneway void)startXibalbaMigrationWithRequest:(SMMigrationRequest_Xibalba *)arg1 delegate:(id)arg2;
- (void)cancelSizingForSystemAtURL:(NSURL *)arg1;
- (void)sizeDeferredComponentsForSystemAtURL:(NSURL *)arg1;
- (bycopy NSDictionary *)defenestratedLocalUsers;
- (bycopy XMSystemProfile *)systemProfileAtURL:(NSURL *)arg1;
@end

