/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/SiteMetadataFetchOperation.h>

#import "SiteMetadataFetcherClient-Protocol.h"

@class NSString;

// Not exported
@interface TouchIconFetchOperation : SiteMetadataFetchOperation <SiteMetadataFetcherClient>
{
    struct RefPtr<Safari::SiteMetadataFetcher> _fetcher;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)_touchIconSizeScalingProportionallyToFit:(struct CGSize)arg1 maximumTouchIconWidthOrHeight:(double)arg2;
- (id)_resizeTouchIcon:(id)arg1 newSize:(struct CGSize)arg2;
- (void)didReceiveSiteMetadataResponse:(id)arg1 toRequest:(id)arg2;
- (void)_saveFaviconData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 requestURL:(id)arg4;
- (void)_startOffscreenTouchIconRequest;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
