/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CalScriptSecurityPolicy : NSObject
{
}

+ (BOOL)allowAuditToken:(CDStruct_6ad76789)arg1 forServiceType:(struct __CFString *)arg2;
+ (BOOL)allowAuditTokenOnCurrentAppleEventForServiceType:(struct __CFString *)arg1;
+ (BOOL)isWhiteListedCreateClassName:(id)arg1;
+ (BOOL)allowCreateCommandWithImplementationClassName:(id)arg1 forServiceType:(struct __CFString *)arg2;
+ (BOOL)isWhiteListedApplicationSelector:(SEL)arg1;
+ (BOOL)allowApplicationSelector:(SEL)arg1 forServiceType:(struct __CFString *)arg2;
+ (void)setErrorOnCurrentCommand;

@end

