/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CKDAccountInfoProvider <NSObject>
- (id)trafficContainerIdentifier;
- (BOOL)shouldFailAllTasks;
- (void)renewAuthTokenWithCompletionHandler:(id)arg1;
- (id)cloudKitAuthToken;
- (id)iCloudAuthToken;
- (BOOL)canAccessAccount;
- (BOOL)accountWantsPushRegistration;
- (BOOL)isUnitTestingAccount;
- (BOOL)isAnonymousAccount;
- (id)enabledKeyboards;
- (id)regionCode;
- (id)languageCode;
- (id)serverPreferredPushEnvironment;
- (id)deviceName;
- (id)hardwareID;
- (id)applicationBundle;
- (id)bundleID;
- (id)containerID;
- (id)containerScopedUserID;
- (id)dsid;
- (void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)resetMescalSession;
- (id)mescalSession;
- (void)fetchDeviceIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (void)fetchContainerScopedUserIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (void)fetchPublicURLUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 serverType:(long long)arg3 completionHandler:(id)arg4;
- (void)fetchConfigurationUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (id)config;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;

@optional
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (id)additionalHeaderValues;
@end

