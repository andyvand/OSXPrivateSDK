/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DSMDataStreamElement-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface DSMBasicDataStreamEvent : NSObject <DSMDataStreamElement, NSCoding>
{
    struct timeval _wallclockTime;
    unsigned long long _machAbsoluteTimestampInNs;
    NSArray *_metaDataArray;
}

@property(readonly) NSArray *metaDataArray; // @synthesize metaDataArray=_metaDataArray;
@property(readonly) unsigned long long machAbsoluteTimestampInNs; // @synthesize machAbsoluteTimestampInNs=_machAbsoluteTimestampInNs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)dataType;
- (id)initWithMachAbsoluteTimestampInNs:(unsigned long long)arg1 andWallclockTime:(struct timeval *)arg2 andMetaDataArray:(id)arg3;
- (double)value;
- (unsigned long long)durationInNs;
- (struct timeval *)wallclockTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

