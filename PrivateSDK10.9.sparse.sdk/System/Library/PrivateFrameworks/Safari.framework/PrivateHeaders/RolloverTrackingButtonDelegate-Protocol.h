//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSEvent, RolloverTrackingButton;

@protocol RolloverTrackingButtonDelegate
- (void)rolloverTrackingButton:(RolloverTrackingButton *)arg1 didMouseDown:(NSEvent *)arg2;
- (void)rolloverTrackingButton:(RolloverTrackingButton *)arg1 didMouseUp:(NSEvent *)arg2;
- (void)rolloverTrackingButton:(RolloverTrackingButton *)arg1 mouseDidEnterOrExit:(BOOL)arg2;
@end

