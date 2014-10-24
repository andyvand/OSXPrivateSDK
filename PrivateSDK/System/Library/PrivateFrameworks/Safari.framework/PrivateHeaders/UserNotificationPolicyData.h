//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSImage, NSString;

__attribute__((visibility("hidden")))
@interface UserNotificationPolicyData : NSObject <NSCopying>
{
    NSString *_displayName;
    NSImage *_icon;
    int _policy;
}

@property(readonly, nonatomic) int policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)updatePermission:(int)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisplayName:(id)arg1 icon:(id)arg2 policy:(int)arg3;

@end
