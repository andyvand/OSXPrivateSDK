/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol ISOSUpdateProgressObserver
- (void)osUpdates:(id)arg1 didFailWithError:(id)arg2;
- (void)osUpdates:(id)arg1 didProgressWithState:(long long)arg2 percentComplete:(double)arg3 statusInfo:(id)arg4 includesCriticalUpdates:(BOOL)arg5 canCancel:(BOOL)arg6;
@end

