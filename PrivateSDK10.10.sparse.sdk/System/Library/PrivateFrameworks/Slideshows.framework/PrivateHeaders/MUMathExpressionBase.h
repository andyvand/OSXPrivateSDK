/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError, NSMutableDictionary;

@interface MUMathExpressionBase : NSObject
{
    NSMutableDictionary *_indicesForVariables;
    NSError *_lastError;
}

+ (id)parserErrorToString:(CDStruct_b6748e3c *)arg1;
- (id)lastError;
- (void)dealloc;
- (void)_cleanup;
- (id)init;
- (void)setLastError:(CDStruct_b6748e3c *)arg1;

@end
