/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDSIDQueryController.h"

@interface IDSIDQueryController (IMCoreIDSLookupAdditions)
- (void)__imQueryKnownIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(struct dispatch_queue_s *)arg4 completionBlock:(id)arg5;
- (void)__imQueryKnownIDStatusForPerson:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(struct dispatch_queue_s *)arg4 completionBlock:(id)arg5;
- (void)__imQueryKnownIDStatusForHandles:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(struct dispatch_queue_s *)arg4 completionBlock:(id)arg5;
- (id)__imBlockingCurrrentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(struct dispatch_queue_s *)arg4;
- (void)__imQueryIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(struct dispatch_queue_s *)arg4 completionBlock:(id)arg5;
- (void)__imQueryIDStatusForPerson:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(struct dispatch_queue_s *)arg4 completionBlock:(id)arg5;
- (void)__imQueryIDStatusForHandles:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(struct dispatch_queue_s *)arg4 completionBlock:(id)arg5;
@end

