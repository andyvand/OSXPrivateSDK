//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSDuration;

@interface EWSFreeBusyViewOptionsType : NSObject
{
    EWSDuration *TimeWindow;
    long long MergedFreeBusyIntervalInMinutes;
    int RequestedView;
}

+ (id)definition;
@property(nonatomic) int RequestedView; // @synthesize RequestedView;
@property(nonatomic) long long MergedFreeBusyIntervalInMinutes; // @synthesize MergedFreeBusyIntervalInMinutes;
@property(retain, nonatomic) EWSDuration *TimeWindow; // @synthesize TimeWindow;
- (void)dealloc;

@end
