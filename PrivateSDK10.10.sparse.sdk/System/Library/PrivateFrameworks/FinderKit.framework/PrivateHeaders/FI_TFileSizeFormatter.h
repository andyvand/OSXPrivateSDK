/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSNumberFormatter.h"

@class NSString;

// Not exported
@interface FI_TFileSizeFormatter : NSNumberFormatter
{
    NSString *_invalidSizeStr;
    unsigned long long _options;
}

+ (id)fileSizeFormatter;
@property(retain) NSString *invalidSizeStr; // @synthesize invalidSizeStr=_invalidSizeStr;
- (id)numberFromString:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
@property _Bool specialZeroHandling; // @dynamic specialZeroHandling;
@property _Bool sizeInBytes; // @dynamic sizeInBytes;
@property _Bool stableWidth; // @dynamic stableWidth;
- (void)dealloc;
- (void)initCommon;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

