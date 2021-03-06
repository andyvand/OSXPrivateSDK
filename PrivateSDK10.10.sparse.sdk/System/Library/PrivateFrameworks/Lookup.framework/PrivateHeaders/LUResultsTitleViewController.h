/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

@class LUTitleLink, NSButton, NSLayoutConstraint;

@interface LUResultsTitleViewController : NSViewController
{
    LUTitleLink *_titleText;
    NSButton *_backButton;
    NSLayoutConstraint *_titleConstraintWithBackButton;
    NSLayoutConstraint *_titleConstraintWithoutBackButton;
}

@property(retain) NSLayoutConstraint *titleConstraintWithoutBackButton; // @synthesize titleConstraintWithoutBackButton=_titleConstraintWithoutBackButton;
@property(retain) NSLayoutConstraint *titleConstraintWithBackButton; // @synthesize titleConstraintWithBackButton=_titleConstraintWithBackButton;
@property(retain) NSButton *backButton; // @synthesize backButton=_backButton;
@property(retain) LUTitleLink *titleText; // @synthesize titleText=_titleText;
- (void)openLinkURL:(id)arg1;
- (void)goBack:(id)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 menu:(id)arg3 backButton:(BOOL)arg4 linkURL:(id)arg5 linkDescription:(id)arg6;
- (void)dealloc;
- (id)init;

@end

