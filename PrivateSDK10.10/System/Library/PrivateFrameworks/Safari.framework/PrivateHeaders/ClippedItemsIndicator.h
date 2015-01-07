/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/ChevronButton.h>

#import "NSMenuDelegate-Protocol.h"

@class NSString;

// Not exported
@interface ClippedItemsIndicator : ChevronButton <NSMenuDelegate>
{
    id _delegate;
}

+ (Class)cellClass;
- (void).cxx_destruct;
- (void)_popUpMenu;
- (void)mouseDown:(id)arg1;
- (void)performClick:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (BOOL)needsPanelToBecomeKey;
- (id)delegate;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
