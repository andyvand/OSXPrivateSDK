/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SODynamicLayoutManager : NSObject
{
    double *_minHeightArray;
    double *_currentOriginArray;
    double *_currentEasing;
    double *_targetOriginArray;
    double *_targetEasing;
    unsigned long long *_orientations;
    BOOL _isResting;
    BOOL _easingUp;
    unsigned long long _size;
    double _displayLinkTime;
    double _previousTimestamp;
    double _minSpace;
    double _scale;
    double _viewHeight;
    double _anchorYPosition;
    struct CGPoint _targetContentOffset;
}

@property(nonatomic) double anchorYPosition; // @synthesize anchorYPosition=_anchorYPosition;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic) BOOL easingUp; // @synthesize easingUp=_easingUp;
@property(nonatomic) BOOL isResting; // @synthesize isResting=_isResting;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double minSpace; // @synthesize minSpace=_minSpace;
@property(nonatomic) double previousTimestamp; // @synthesize previousTimestamp=_previousTimestamp;
@property(nonatomic) double displayLinkTime; // @synthesize displayLinkTime=_displayLinkTime;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
- (double *)currentOriginsForItemsInRange:(struct _NSRange)arg1 withMovement:(double)arg2;
- (void)setTargetOriginArray:(double *)arg1 minHeights:(double *)arg2 orientations:(unsigned long long *)arg3;
- (double *)minHeightArray;
- (double *)targetOriginArray;
- (void)dealloc;
- (void)_freeArrays;
- (id)init;

@end

