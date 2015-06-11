/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaUI/MediaUIControl.h>

@class NSImage, NSMenu, NSString;

@interface MediaUIPullDownButton : MediaUIControl
{
    NSImage *_image;
    NSString *_title;
    NSMenu *_menu;
    unsigned int _bordered:1;
    unsigned int _showsIndicator:1;
}

+ (void)initialize;
- (double)MediaUI_slice;
- (void)renewGState;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)isFlipped;
- (void)_menuAction:(id)arg1;
- (void)performClick:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
@property(retain, nonatomic) NSMenu *menu;
@property(nonatomic) BOOL showsIndicator;
- (void)setHighlighted:(BOOL)arg1;
@property(nonatomic, getter=isBordered) BOOL bordered;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) NSImage *image;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
