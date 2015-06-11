/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "NSTextFieldDelegate-Protocol.h"

@class CALayer, CATextLayer, LUIEffectsButton, LUISecureTextField, NSButton, NSImage, NSProgressIndicator, NSString;

@interface LUISecureTextFieldView : NSView <NSTextFieldDelegate>
{
    CALayer *_textFieldLayer;
    CATextLayer *_placeholderTextLayer;
    LUISecureTextField *_secureTextField;
    NSButton *_securityFieldActionButton;
    NSProgressIndicator *_securityFieldProgressIndicator;
    LUIEffectsButton *_securityFieldGoButton;
    NSImage *_goButtonImage;
    NSImage *_passwordHintImage;
    NSImage *_passwordErrorImage;
    id _delegate;
    id _target;
    SEL _action;
    BOOL _usesHint;
    int _currentMode;
    long long _previousLength;
}

@property id delegate; // @synthesize delegate=_delegate;
- (id)accessibilityPlaceholderValue;
- (void)controlTextDidChange:(id)arg1;
- (void)forceDrawFocusRing;
- (void)forceClearFocusRing;
- (struct CGRect)focusRingMaskBounds;
- (BOOL)acceptsFirstResponder;
- (void)resetPassword;
- (void)setHidden:(BOOL)arg1;
- (void)setUIEnabled:(BOOL)arg1;
- (void)actionButtonPressed:(id)arg1;
- (void)setPlaceholderString:(id)arg1;
- (void)setUsesHint:(BOOL)arg1;
- (BOOL)usesHint;
- (struct CGPoint)pointForPopover:(int)arg1;
- (struct CGRect)progressRect;
- (id)secureTextField;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setMode:(int)arg1;
- (int)mode;
- (void)resetButtonUIToMode:(int)arg1;
- (void)refreshButtonsAfterKeyInput;
- (void)setSecureTextFieldWidth:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadImages;
- (id)_placeholderTextColor;
- (float)_textFieldLayerOpacity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
