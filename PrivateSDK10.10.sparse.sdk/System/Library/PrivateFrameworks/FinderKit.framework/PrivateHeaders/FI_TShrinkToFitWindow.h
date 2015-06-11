/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPanel.h"

@class FI_TShrinkToFitScrollView, FI_TShrinkToFitTextView;

// Not exported
@interface FI_TShrinkToFitWindow : NSPanel
{
    FI_TShrinkToFitScrollView *_stfScrollView;
    FI_TShrinkToFitTextView *_stfTextView;
}

- (void)undo:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (struct CGRect)calcGlobalFrame;
- (void)sizeToFit;
- (void)stfScrollViewScrollerStyleChanged:(id)arg1;
- (void)stfScrollViewFrameChanged:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)_resignKeyFocus;
- (BOOL)_canBecomeSecondaryKeyWindow;
- (BOOL)canBecomeKeyWindow;
- (void)dealloc;
- (id)initWithSTFTextView:(id)arg1;
- (double)_focusRingThickness;

@end
