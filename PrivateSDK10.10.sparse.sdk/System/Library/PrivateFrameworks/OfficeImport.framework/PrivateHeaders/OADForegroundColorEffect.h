/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

// Not exported
@interface OADForegroundColorEffect : OADBlipEffect
{
    OADColor *mForegroundColor;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (id)foregroundColor;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

