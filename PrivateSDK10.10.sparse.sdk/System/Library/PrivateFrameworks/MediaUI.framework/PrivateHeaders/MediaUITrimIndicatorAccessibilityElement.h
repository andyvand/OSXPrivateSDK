/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MediaUITrimView;

@interface MediaUITrimIndicatorAccessibilityElement : NSObject
{
    MediaUITrimView *_trimView;
    unsigned long long _part;
}

- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (struct CGRect)accessibilityRect;
@property(readonly, nonatomic) unsigned long long part;
@property(readonly, retain, nonatomic) MediaUITrimView *trimView;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTrimView:(id)arg1 part:(unsigned long long)arg2;
- (id)init;

@end

