/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarUI/CalUIResizingTextField.h>

#import "CalUIAutocompletingField-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class NSString;

@interface CalUILocationTextField : CalUIResizingTextField <NSTextViewDelegate, CalUIAutocompletingField>
{
    BOOL _expanded;
    double _menuWidth;
}

@property double menuWidth; // @synthesize menuWidth=_menuWidth;
@property(getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
- (void)setObjectValue:(id)arg1;
- (id)objectValueAsArray;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)mouseDragged:(id)arg1;
- (void)configureText;
- (void)mouseDown:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

