//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CannedAVSync : NSObject
{
    double _base;
    double _modulo;
}

+ (id)sharedCannedAVSync;
@property(nonatomic) double modulo; // @synthesize modulo=_modulo;
@property(nonatomic) double base; // @synthesize base=_base;
- (double)clampForTime:(double)arg1;
- (void)addDrift:(double)arg1;
- (void)addStreamWithCount:(int)arg1 rate:(double)arg2;
- (void)clear;
- (id)init;

@end
