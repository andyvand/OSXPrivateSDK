/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MMJSDialog, NSView, NSWindow;

@interface MMJSDialogController : NSObject
{
    NSView *_parentView;
    MMJSDialog *_mmJSDialog;
    struct OpaqueJSContext *_jsContext;
}

@property struct OpaqueJSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(retain) MMJSDialog *mmJSDialog; // @synthesize mmJSDialog=_mmJSDialog;
- (void)dealloc;
@property(readonly, retain) NSWindow *parentWindow; // @dynamic parentWindow;
- (id)initWithParentView:(id)arg1;

@end

