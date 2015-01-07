/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ACSHHIDDeviceDelegate-Protocol.h"
#import "ACSHHIDDeviceDetectorDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface ACSHHIDDeviceManager : NSObject <ACSHHIDDeviceDetectorDelegate, ACSHHIDDeviceDelegate>
{
    id <ACSHHIDDeviceManagerDelegate> _delegate;
    BOOL _detectDevices;
    NSMutableArray *_devices;
    double _lastMoveTimeX;
    double _lastMoveTimeY;
    double _allowedMoveRate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)sharedManager;
@property(nonatomic) BOOL detectDevices; // @synthesize detectDevices=_detectDevices;
@property(nonatomic) id <ACSHHIDDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)device:(id)arg1 didPostEvent:(id)arg2;
- (void)device:(id)arg1 didUnload:(BOOL)arg2;
- (void)deviceDetector:(id)arg1 didFindDevice:(struct __IOHIDDevice *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
