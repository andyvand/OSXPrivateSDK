//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAnimation.h"

#import "NSAnimationDelegate.h"

__attribute__((visibility("hidden")))
@interface WKFindIndicatorWindowAnimation : NSAnimation <NSAnimationDelegate>
{
    struct FindIndicatorWindow *_findIndicatorWindow;
    // Error parsing type: , name: _animationProgressCallback
    // Error parsing type: , name: _animationDidEndCallback
}

- (void)animationDidEnd:(id)arg1;
- (void)setCurrentProgress:(float)arg1;
- (id)_initWithFindIndicatorWindow:(struct FindIndicatorWindow *)arg1 animationDuration:(double)arg2 animationProgressCallback:animationDidEndCallback: /* Error: Ran out of types for this method. */;

@end
