/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SetupAssistantSupport/MBActivity.h>

@class NSMutableDictionary;

@interface MBIAActivity : MBActivity
{
    NSMutableDictionary *_IADictionary;
}

- (void)didFailWithError:(id)arg1 fromTransaction:(id)arg2;
- (void)didSucceedWithDictionary:(id)arg1 fromTransaction:(id)arg2;
- (id)initWithIADictionary:(id)arg1;

@end

