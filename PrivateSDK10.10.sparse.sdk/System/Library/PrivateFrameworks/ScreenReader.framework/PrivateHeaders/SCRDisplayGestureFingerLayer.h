/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

// Not exported
@interface SCRDisplayGestureFingerLayer : CALayer
{
    CALayer *_fingerLayer;
    double _width;
    struct CGRect _totalBounds;
    struct CGPoint _fingerPoint;
}

@property(nonatomic) struct CGPoint fingerPoint; // @synthesize fingerPoint=_fingerPoint;
- (void)update;
- (void)hide;
- (id)init;

@end

