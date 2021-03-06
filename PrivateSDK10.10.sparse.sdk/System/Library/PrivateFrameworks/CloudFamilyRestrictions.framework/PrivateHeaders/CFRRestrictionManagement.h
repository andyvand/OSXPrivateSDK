/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSXPCConnection;

@interface CFRRestrictionManagement : NSObject
{
    NSXPCConnection *_connection;
    id <CFRRestrictionManaging> _serviceProxy;
    id _connectionErrorHandler;
}

@property(copy, nonatomic) id connectionErrorHandler; // @synthesize connectionErrorHandler=_connectionErrorHandler;
@property(retain, nonatomic) id <CFRRestrictionManaging> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithConnectionErrorHandler:(id)arg1;

@end

