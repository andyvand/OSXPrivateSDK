/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SCROutputSpeechSynthesizerProtocol <NSObject>
- (void)stopSpeaking;
- (BOOL)isPaused;
- (BOOL)isSpeaking;
- (id)category;
- (void)setCategory:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void)unlockSynthesizer;
- (void)lockSynthesizer;
- (id)supportedLiteralCharacterRanges;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)startAction;
@end
