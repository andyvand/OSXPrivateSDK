/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol SUHelperDProtocol
- (id)lookupURLCredentialInSystemKeychainForHost:(id)arg1 port:(long long)arg2;
- (BOOL)commitLoginCredentialsDisablingFLO:(BOOL)arg1;
- (BOOL)stashLoginCredentialsEnablingFLO:(BOOL)arg1;
- (BOOL)restoreDefaultCatalog;
- (BOOL)setOSXAutoUpdate:(BOOL)arg1;
- (BOOL)setAppStoreAutoUpdate:(BOOL)arg1;
- (BOOL)clearCriticalUpdateNotificationDate;
- (BOOL)removeUpdatesAvailableCookie;
- (BOOL)createUpdatesAvailableCookie;
- (BOOL)updateAnyUserPreferences;
- (BOOL)clearAnyUserPreference:(id)arg1;
- (BOOL)setObject:(id)arg1 forAnyUserPreference:(id)arg2;
- (BOOL)getDigest:(id *)arg1 forPackageAtURL:(id)arg2;
- (BOOL)removeProductDirectoryForKey:(id)arg1;
- (BOOL)createDirectoryForProductKey:(id)arg1 Firmware:(BOOL)arg2;
- (BOOL)removeDistForProductKey:(id)arg1 withFilename:(id)arg2;
- (BOOL)writeUpdatesIndex:(id)arg1;
- (id)readUpdatesIndex;
- (BOOL)removeIndexFromUpdates;
- (BOOL)movePPDVersionCacheToUpdatesFromPath:(id)arg1;
- (BOOL)moveMetadataCacheToUpdatesFromPath:(id)arg1;
- (BOOL)removeMetadataCacheFromUpdates;
- (BOOL)moveInstalledPrintersToLibraryFromPath:(id)arg1;
- (BOOL)makeQueues;
- (BOOL)registerProductFile:(id)arg1 forProductKey:(id)arg2 firmware:(BOOL)arg3 trustLevel:(int *)arg4 keepOriginal:(BOOL)arg5;
- (int)prepareForLogoutAndInstall;
- (void)authorizeTool:(struct AuthorizationOpaqueRef *)arg1 forRights:(long long)arg2;
@end
