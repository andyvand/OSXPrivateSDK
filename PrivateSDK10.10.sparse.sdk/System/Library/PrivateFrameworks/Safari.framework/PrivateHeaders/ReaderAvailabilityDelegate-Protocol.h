/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol ReaderAvailabilityDelegate <NSObject>
- (void)readerControllerDidBecomeUnavailableUnexpectedly:(const struct ReaderController *)arg1;
- (void)readerController:(const struct ReaderController *)arg1 didUpdateAvailability:(int)arg2;
@end

