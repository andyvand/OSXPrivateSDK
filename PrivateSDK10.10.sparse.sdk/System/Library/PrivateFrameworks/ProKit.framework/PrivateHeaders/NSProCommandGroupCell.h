/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/NSProTextFieldCell.h>

@class NSColor;

// Not exported
@interface NSProCommandGroupCell : NSProTextFieldCell
{
    BOOL _divider;
    NSColor *_color;
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setDivider:(BOOL)arg1;
- (BOOL)isDivider;
- (id)initTextCell:(id)arg1;

@end

