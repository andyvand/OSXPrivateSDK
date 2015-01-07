/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSLock;

// Not exported
@interface SCROutputTextAttributesManager : NSObject
{
    NSLock *_previousAttributesLock;
    NSDictionary *_previousAttributes;
}

+ (id)defaultManager;
- (id)_attributesWithResolvedFontTraitsFromAttributes:(id)arg1;
- (id)_createDeltaTextAttributesWithAttributes:(id)arg1 previousAttributes:(id)arg2;
- (id)_createStringDescribingAttributes:(id)arg1 isSpeechComponent:(BOOL)arg2;
- (id)_attributesOfOffsetMappedString:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)stringRepresentingTextAttributes:(id)arg1;
- (id)previousAttributes;
- (void)setPreviousAttributes:(id)arg1;
- (id)createActionsByExpandingTextAttributesInAction:(id)arg1 targetComponent:(id)arg2;
- (void)dealloc;
- (id)init;

@end
