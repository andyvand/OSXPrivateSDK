/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MRTransition.h>

@class NSMutableArray;

@interface MRTransitionTileFlip : MRTransition
{
    NSMutableArray *mSortedTiles;
    unsigned int mNumberOfTilesX;
    unsigned int mNumberOfTilesY;
    float mFlipOverlap;
    BOOL mUseLighting;
    double _x0;
    double _y0;
    double _x;
    double _y;
}

- (double)pzrCancel:(id)arg1;
- (double)pzrEnd:(id)arg1;
- (double)pzrUpdate:(id)arg1;
- (double)pzrStart:(id)arg1;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)setAttributes:(id)arg1;
- (void)buildTiles;
- (BOOL)supportsDirectionOverride;
- (void)unload;
- (void)cleanup;
- (id)initWithTransitionID:(id)arg1;

@end

