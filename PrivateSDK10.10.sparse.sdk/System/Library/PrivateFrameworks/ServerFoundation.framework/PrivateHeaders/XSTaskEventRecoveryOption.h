/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ServerFoundation/XSEventRecoveryOption.h>

@class NSArray, NSString;

@interface XSTaskEventRecoveryOption : XSEventRecoveryOption
{
    NSString *_command;
    NSArray *_arguments;
}

@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain) NSString *command; // @synthesize command=_command;
- (id)executionAction;
- (void)applySettings:(id)arg1;
- (void)setConfigurationFromDictionary:(id)arg1;
- (id)configurationDictionary;
- (void)dealloc;

@end

