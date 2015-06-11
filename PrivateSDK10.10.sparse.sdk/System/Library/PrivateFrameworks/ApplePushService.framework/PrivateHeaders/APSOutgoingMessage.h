/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ApplePushService/APSMessage.h>

@class NSString;

@interface APSOutgoingMessage : APSMessage
{
}

@property(copy, nonatomic) NSString *senderTokenName;
- (void)setPriority:(long long)arg1;
- (long long)priority;
@property(nonatomic) unsigned long long payloadLength;
@property(nonatomic) unsigned long long payloadFormat;
- (void)setTimedOut:(BOOL)arg1;
- (BOOL)hasTimedOut;
- (void)setCancelled:(BOOL)arg1;
- (BOOL)wasCancelled;
- (void)setSendInterface:(long long)arg1;
- (long long)sendInterface;
- (void)setSent:(BOOL)arg1;
- (BOOL)wasSent;
@property(nonatomic, getter=isCritical) BOOL critical;
- (id)rawTimeoutTime;
- (id)sendTimeoutTime;
- (unsigned long long)_effectiveSendTimeout;
@property(nonatomic) unsigned long long timeout;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)setMessageID:(unsigned long long)arg1;
- (unsigned long long)messageID;

@end
