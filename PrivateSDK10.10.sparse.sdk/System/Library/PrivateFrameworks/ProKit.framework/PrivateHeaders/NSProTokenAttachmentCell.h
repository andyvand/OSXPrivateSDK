/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTokenAttachmentCell.h"

@class NSColor, NSProTokenFieldCell;

// Not exported
@interface NSProTokenAttachmentCell : NSTokenAttachmentCell
{
    NSColor *_tokenColor;
    BOOL _disableMenu;
    NSProTokenFieldCell *_tokenFieldCell;
}

- (id)_proLabelFont;
- (id)dragImage;
- (struct CGRect)pullDownRectForBounds:(struct CGRect)arg1;
- (id)pullDownImage;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)drawTokenWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)tokenForegroundColor;
- (id)tokenBackgroundColor;
- (id)_textAttributes;
- (void)proTextColor:(id *)arg1 backgroundColor:(id *)arg2;
- (void)setTokenColor:(id)arg1;
- (id)tokenFieldCell;
- (void)setTokenFieldCell:(id)arg1;
- (id)tokenColor;
- (void)dealloc;
- (id)initTextCell:(id)arg1;

@end

