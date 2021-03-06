/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SPCPosition, SPCSize;

@interface SPCRect : NSObject <NSCopying, NSCoding>
{
    SPCPosition *_origin;
    SPCSize *_size;
}

+ (id)rectWithOrigin:(id)arg1 size:(id)arg2;
+ (id)zeroRect;
@property(copy, nonatomic) SPCSize *size; // @synthesize size=_size;
@property(copy, nonatomic) SPCPosition *origin; // @synthesize origin=_origin;
- (struct CGRect)absoluteRectForEnclosingRect:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithOrigin:(id)arg1 size:(id)arg2;

@end

