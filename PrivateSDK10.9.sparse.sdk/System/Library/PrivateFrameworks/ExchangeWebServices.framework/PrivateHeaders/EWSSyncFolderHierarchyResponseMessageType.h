//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSArray, NSString;

@interface EWSSyncFolderHierarchyResponseMessageType : EWSResponseMessageType
{
    NSString *SyncState;
    BOOL IncludesLastFolderInRange;
    NSArray *Changes;
}

+ (id)definition;
@property(retain, nonatomic) NSArray *Changes; // @synthesize Changes;
@property(nonatomic) BOOL IncludesLastFolderInRange; // @synthesize IncludesLastFolderInRange;
@property(retain, nonatomic) NSString *SyncState; // @synthesize SyncState;
- (id)description;
- (void)dealloc;

@end
