/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache;

@interface CKBookCache : NSObject
{
    NSCache *_cache;
}

+ (id)sharedCache;
@property(readonly) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)purge;
- (void)cacheBook:(id)arg1;
- (id)cachedBookWithUniqueIdentifier:(id)arg1;
- (id)init;

@end

