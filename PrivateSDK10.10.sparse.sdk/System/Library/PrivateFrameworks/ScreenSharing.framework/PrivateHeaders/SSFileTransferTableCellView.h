/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableCellView.h"

@class NSButton, NSImage, NSImageView, NSLayoutConstraint, NSProgress, NSProgressIndicator, NSTextField, NSTimer, SSFileTransfer;

// Not exported
@interface SSFileTransferTableCellView : NSTableCellView
{
    NSImageView *documentImageView;
    NSProgressIndicator *progressIndicator;
    NSTextField *upperTextField;
    NSTextField *lowerTextField;
    NSButton *cancelButton;
    NSButton *revealButton;
    SSFileTransfer *fileTransfer;
    NSImage *cancelImagePressed;
    NSImage *cancelImageActive;
    NSImage *cancelImageSelected;
    NSImage *revealImagePressed;
    NSImage *revealImageActive;
    NSImage *revealImageSelected;
    NSProgress *progress;
    NSLayoutConstraint *_lowerTextBottomConstraint;
    NSLayoutConstraint *_upperTextTopConstraint;
    NSTimer *_progressUpdateTimer;
}

@property(retain) NSTimer *progressUpdateTimer; // @synthesize progressUpdateTimer=_progressUpdateTimer;
@property(retain) NSLayoutConstraint *upperTextTopConstraint; // @synthesize upperTextTopConstraint=_upperTextTopConstraint;
@property(retain) NSLayoutConstraint *lowerTextBottomConstraint; // @synthesize lowerTextBottomConstraint=_lowerTextBottomConstraint;
@property(retain) NSProgress *progress; // @synthesize progress;
@property NSTextField *lowerTextField; // @synthesize lowerTextField;
@property NSButton *revealButton; // @synthesize revealButton;
@property NSButton *cancelButton; // @synthesize cancelButton;
@property NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
- (void)update:(id)arg1;
- (void)observe:(id)arg1;
- (void)unobserve:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)revealPressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
@property(retain) SSFileTransfer *fileTransfer;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

