/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PBRequesterDelegate-Protocol.h"

@class GEORequester, NSString;

@interface GEOVoltaireMapMatchProvider : NSObject <PBRequesterDelegate>
{
    GEORequester *_requester;
    id _errorHandler;
    id _finishedHandler;
    BOOL _cancelled;
}

+ (id)providerURL;
@property(retain, nonatomic) GEORequester *requester; // @synthesize requester=_requester;
- (void)requesterDidFinish:(id)arg1;
- (void)requesterDidCancel:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)cancelRequest;
- (void)startRequest:(id)arg1 finished:(id)arg2 error:(void)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

