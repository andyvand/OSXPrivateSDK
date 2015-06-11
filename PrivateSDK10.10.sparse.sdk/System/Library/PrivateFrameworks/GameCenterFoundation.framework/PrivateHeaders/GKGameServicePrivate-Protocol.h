/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GKGameService-Protocol.h"

@protocol GKGameServicePrivate <GKGameService>
- (oneway void)loadTellAFriendMessageForGameWithAdamID:(id)arg1 handler:(id)arg2;
- (oneway void)submitRating:(float)arg1 forGame:(id)arg2 handler:(id)arg3;
- (oneway void)getRatingForGameDescriptor:(id)arg1 handler:(id)arg2;
- (oneway void)markGameRecommendations:(id)arg1 viewed:(BOOL)arg2 handler:(id)arg3;
- (oneway void)dismissGameRecommendations:(id)arg1 handler:(id)arg2;
- (oneway void)getGameRecommendationsWithHandler:(id)arg1;
- (oneway void)getGameMetadataForBundleIDs:(id)arg1 handler:(id)arg2;
- (oneway void)getGamesWithAchievementStatsForPlayer:(id)arg1 handler:(id)arg2;
- (oneway void)getGameStatsForPlayer:(id)arg1 bundleIDs:(id)arg2 handler:(id)arg3;
- (oneway void)getGamesForPlayer:(id)arg1 includeInstalled:(BOOL)arg2 handler:(id)arg3;
- (oneway void)removeGameForBundleID:(id)arg1 handler:(id)arg2;
- (oneway void)getTopGamesWithHandler:(id)arg1;
- (oneway void)getStoreItemsForAdamIDs:(id)arg1 handler:(id)arg2;
@end
