/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString;

@interface DSMMode : NSObject
{
    NSString *_modeName;
    NSString *_detailedModeDescription;
    id <DataSourceManager> _parentDSM;
    NSDictionary *_supportedStreams;
}

@property(readonly) NSDictionary *supportedStreams; // @synthesize supportedStreams=_supportedStreams;
@property(readonly) __weak id <DataSourceManager> parentDSM; // @synthesize parentDSM=_parentDSM;
@property(readonly) NSString *detailedModeDescription; // @synthesize detailedModeDescription=_detailedModeDescription;
@property(readonly) NSString *modeName; // @synthesize modeName=_modeName;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 andDescription:(id)arg2 andDataStreamDescriptionDictionary:(id)arg3 andDataSourceManager:(id)arg4;

@end
