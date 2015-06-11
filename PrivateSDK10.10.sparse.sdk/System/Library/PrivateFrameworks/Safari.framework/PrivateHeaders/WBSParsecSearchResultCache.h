/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

// Not exported
@interface WBSParsecSearchResultCache : NSObject
{
    NSMutableDictionary *_resultSetCache;
    NSMutableDictionary *_resultCache;
    unsigned long long _cachedQueriesLimit;
    unsigned long long _cachedResultsLimit;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allCachedResultIdentifiers;
@property(readonly, nonatomic) NSArray *allCachedQueries;
- (id)resultForIdentifier:(id)arg1;
- (id)resultSetForQuery:(id)arg1;
- (void)cacheResult:(id)arg1;
- (void)cacheResultSet:(id)arg1;
- (id)initWithCachedQueriesLimit:(unsigned long long)arg1 cachedResultsLimit:(unsigned long long)arg2;

@end
