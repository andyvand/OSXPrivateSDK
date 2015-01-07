/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOCompletionItem-Protocol.h"
#import "_GEOCompletionSearchHint-Protocol.h"

@class GEOMapServiceTraits, GEOPlaceResult, NSArray, NSData, NSString;

// Not exported
@interface _GEOPlaceResultCompletionItem : NSObject <GEOCompletionItem, _GEOCompletionSearchHint>
{
    GEOPlaceResult *_placeResult;
    NSString *_query;
    GEOMapServiceTraits *_traits;
    NSData *_completionMetaData;
}

@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSData *metadata;
@property(readonly, nonatomic) NSData *entryMetadata;
- (void)sendFeedback;
- (id)completionLocation;
- (id)query;
- (id)suggestionsOptions;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem;
- (BOOL)getCoordinate:(CDStruct_c3b9c2ee *)arg1;
- (id)calloutTitle;
- (id)queryLine;
- (id)highlightsForLine:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *displayLines;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithPlaceResult:(id)arg1 query:(id)arg2 completion:(id)arg3 traits:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
