/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAVDaemonListener, IMLocalObject, IMRemoteObject<IMAVDaemonProtocol>, NSLock, NSMutableArray, NSProtocolChecker, NSString;

@interface IMAVDaemonController : NSObject
{
    IMRemoteObject<IMAVDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IMAVDaemonListener *_daemonListener;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSMutableArray *_listeners;
    NSLock *_connectionLock;
    struct dispatch_queue_s *_listenerLockQueue;
    struct dispatch_queue_s *_remoteDaemonLockQueue;
    struct dispatch_queue_s *_remoteMessageQueue;
    struct dispatch_queue_s *_localObjectLockQueue;
    struct __CFRunLoopSource *_runLoopSource;
    BOOL _hasCheckedForDaemon;
    BOOL _acquiringDaemonConnection;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) struct dispatch_queue_s *_remoteMessageQueue; // @synthesize _remoteMessageQueue;
@property(readonly, nonatomic) IMAVDaemonListener *listener; // @synthesize listener=_daemonListener;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (void)localObjectDiedNotification:(id)arg1;
- (void)_remoteObjectDiedNotification:(id)arg1;
- (void)_localObjectDiedNotification:(id)arg1;
- (void)_disconnectFromDaemon;
- (void)_cleanUpConnection;
- (void)_connectToDaemon;
- (BOOL)_makeConnectionWithCompletionBlock:(id)arg1;
- (BOOL)removeListenerID:(id)arg1;
- (BOOL)hasListenerForID:(id)arg1;
- (BOOL)addListenerID:(id)arg1;
- (void)_listenerSetUpdated;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (BOOL)localObjectExists;
- (BOOL)remoteObjectExists;
- (void)_noteSetupComplete;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (BOOL)__isRemoteObjectValidOnQueue:(struct dispatch_queue_s *)arg1;
- (BOOL)__isLocalObjectValidOnQueue:(struct dispatch_queue_s *)arg1;
- (void)dealloc;
- (id)init;

@end

