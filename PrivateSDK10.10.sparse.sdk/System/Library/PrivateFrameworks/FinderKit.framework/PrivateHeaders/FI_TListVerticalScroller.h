/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSScroller.h"

@class FI_TListViewController;

// Not exported
@interface FI_TListVerticalScroller : NSScroller
{
    FI_TListViewController *_listViewController;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
+ (BOOL)isCompatibleWithOverlayScrollers;
@property(retain, nonatomic) FI_TListViewController *listViewController; // @synthesize listViewController=_listViewController;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;

@end

