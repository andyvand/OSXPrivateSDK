//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKMapTileModel.h>

#import "VKMapLayer.h"

@class VKTrafficDrawStyle;

__attribute__((visibility("hidden")))
@interface VKRasterTrafficMapModel : VKMapTileModel <VKMapLayer>
{
    VKTrafficDrawStyle *_trafficDrawStyle;
    int _sourceTileZtoStencilOffset;
    BOOL _needsTileStencil;
}

- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)buildTileStencilWithContext:(id)arg1 scene:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)supportedRenderPasses;
- (unsigned long long)mapLayerPosition;
- (void)dealloc;

@end
