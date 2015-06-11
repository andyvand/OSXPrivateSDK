/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <SoftwareUpdate/SUDownloadServiceClient-Protocol.h>

@class NSString, NSXPCConnection;

@interface SUDownloadServiceClient : NSObject <SUDownloadServiceClient>
{
    NSXPCConnection *_connection;
}

+ (void)authorizeForUpdating:(struct AuthorizationOpaqueRef *)arg1 overConnection:(id)arg2 reply:(id)arg3;
- (void)downloadedUpdatesDidChange:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
