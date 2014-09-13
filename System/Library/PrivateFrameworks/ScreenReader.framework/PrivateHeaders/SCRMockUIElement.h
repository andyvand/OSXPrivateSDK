//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRUIElement.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCRMockUIElement : SCRUIElement
{
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_writableAttributes;
}

- (BOOL)isMockUIElement;
- (BOOL)isValid;
- (BOOL)supportsAXAttribute:(struct __CFString *)arg1;
- (void)fillStaticCache;
- (BOOL)isPromotable;
- (BOOL)isArrayEmptyForAXAttribute:(struct __CFString *)arg1;
- (unsigned long long)arrayCountForAXAttribute:(struct __CFString *)arg1;
- (id)uiElementArrayForAXAttribute:(struct __CFString *)arg1;
- (id)urlForAXAttribute:(struct __CFString *)arg1;
- (struct _NSRange)rangeForAXAttribute:(struct __CFString *)arg1;
- (struct CGSize)sizeForAXAttribute:(struct __CFString *)arg1;
- (struct CGPoint)pointForAXAttribute:(struct __CFString *)arg1;
- (id)numberForAXAttribute:(struct __CFString *)arg1;
- (long long)longForAXAttribute:(struct __CFString *)arg1;
- (float)floatForAXAttribute:(struct __CFString *)arg1;
- (BOOL)boolForAXAttribute:(struct __CFString *)arg1;
- (id)objectForAXAttribute:(struct __CFString *)arg1 parameter:(void *)arg2 expectedType:(unsigned long long)arg3;
- (id)objectForAXAttribute:(struct __CFString *)arg1 parameter:(void *)arg2;
- (id)objectForAXAttribute:(struct __CFString *)arg1;
- (id)stringForAXAttribute:(struct __CFString *)arg1;
- (id)arrayForAXAttribute:(struct __CFString *)arg1;
- (void)setValue:(id)arg1 forAXAttribute:(struct __CFString *)arg2;
- (id)uiElementArrayForAXAttribute:(struct __CFString *)arg1 atIndex:(unsigned long long)arg2 length:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (id)uiElementForAXAttribute:(struct __CFString *)arg1;
- (id)uiElementForAXAttribute:(struct __CFString *)arg1 options:(unsigned long long)arg2;
- (BOOL)canSetAXAttribute:(struct __CFString *)arg1;
- (void)setWritable:(BOOL)arg1 forAXAttribute:(struct __CFString *)arg2;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)disableCache;
- (void)enableCache;
- (id)_valueForAttribute:(struct __CFString *)arg1;
- (unsigned long long)permutatedHashCode;
- (void)dealloc;
- (id)init;

@end
