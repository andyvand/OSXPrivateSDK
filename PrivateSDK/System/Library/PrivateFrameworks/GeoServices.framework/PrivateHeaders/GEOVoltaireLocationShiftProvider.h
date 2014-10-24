//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOLocationShiftProvider.h>

#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireLocationShiftProvider : GEOLocationShiftProvider <PBRequesterDelegate>
{
    GEORequester *_requester;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _finishedHandler;
}

+ (void)_resetURL;
+ (unsigned short)providerID;
- (void)requesterDidFinish:(id)arg1;
- (void)requesterDidCancel:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)cancelRequest;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end
