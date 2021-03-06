/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSColor;

@interface SPCColor : NSObject <NSCopying, NSSecureCoding>
{
    struct CGColor *_CGColor;
}

+ (BOOL)supportsSecureCoding;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
@property(nonatomic) struct CGColor *CGColor; // @synthesize CGColor=_CGColor;
- (void)setFillInContext:(struct CGContext *)arg1;
- (void)setStrokeInContext:(struct CGContext *)arg1;
- (void)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (BOOL)isEqualToColor:(id)arg1 withTolerance:(double)arg2;
- (BOOL)isEqualToColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)representationForSPCArchive:(id)arg1;
@property(nonatomic) NSColor *NSColor;

@end

