/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ViewBridge/NSVB_TargetedProxy.h>

#import "_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface-Protocol.h"

@class NSString, NSVB_ViewAnimationAttributes;

@interface NSVB_ViewServiceImplicitAnimationDecodingProxy : NSVB_TargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface>
{
    SEL _implicitAnimationSelector;
    NSVB_ViewAnimationAttributes *_animationAttributes;
}

+ (id)proxyDecodingAnimationsForTarget:(id)arg1;
- (void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

