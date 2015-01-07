/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver-Protocol.h"

@class NSCache, NSMapTable, NSString, VKResourceManager;

@interface VKTrafficIncidentImageManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    NSCache *_imageCache;
    NSMapTable *_targetDisplayToProvider;
    VKResourceManager *_resourceManager;
    unsigned int _tileGroupIdentifier;
}

+ (id)sharedManager;
- (void)setIncidentIconProvider:(id)arg1 forTargetDisplay:(void)arg2;
- (id)imageForIncidentType:(long long)arg1 contentScale:(double)arg2;
- (id)imageForIncidentType:(long long)arg1 contentScale:(double)arg2 targetDisplay:(long long)arg3;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)dealloc;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 resourceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
