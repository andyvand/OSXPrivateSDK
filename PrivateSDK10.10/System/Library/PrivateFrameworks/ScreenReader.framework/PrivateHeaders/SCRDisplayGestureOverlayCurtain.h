/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class SCRCTargetSelectorTimer, SCRDisplayGestureFingerLayer;

// Not exported
@interface SCRDisplayGestureOverlayCurtain : CALayer
{
    struct CGRect _curtainRegion;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
    CALayer *_topLayer;
    CALayer *_bottomLayer;
    CALayer *_touchLayer;
    SCRDisplayGestureFingerLayer *_fingerLayer;
    SCRCTargetSelectorTimer *_showTimer;
    struct CGRect _totalBounds;
    BOOL _fingerLayerEnabled;
}

@property(nonatomic) struct CGRect curtainRegion; // @synthesize curtainRegion=_curtainRegion;
- (void)_showCurtainRegion;
- (void)setFingerPoint:(struct CGPoint)arg1;
- (void)hide;
- (void)update;
- (void)dealloc;
- (id)initWithThreadKey:(id)arg1;

@end
