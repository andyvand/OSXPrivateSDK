/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

// Not exported
@interface XQuerySortItem : NSObject
{
    id _value;
    long long _position;
    NSArray *_sortInfo;
}

- (long long)position;
- (id)sortInfo;
- (id)value;
- (id)initWithValue:(id)arg1 sortInfo:(id)arg2 forPosition:(long long)arg3;
- (void)finalize;
- (void)dealloc;

@end
