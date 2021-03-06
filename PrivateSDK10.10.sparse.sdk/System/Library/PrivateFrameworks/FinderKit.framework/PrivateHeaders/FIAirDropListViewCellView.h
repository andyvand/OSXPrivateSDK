/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableCellView.h"

@class FIAirDropProgressView, FI_TTextField;

// Not exported
@interface FIAirDropListViewCellView : NSTableCellView
{
    FIAirDropProgressView *_progressView;
    FI_TTextField *_personNameTxtFld;
    struct TKeyValueBinder _percentCompleteBinder;
    function_988d70bf _clickHandler;
}

@property(readonly, retain) FI_TTextField *personNameTxtFld; // @synthesize personNameTxtFld=_personNameTxtFld;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_hitTestWithLocalPoint:(const struct CGPoint *)arg1;
@property(readonly, retain) FI_TTextField *machineNameTxtFld; // @dynamic machineNameTxtFld;
- (void)setClickHandler:(const function_988d70bf *)arg1;
- (void)awakeFromNib;

@end

