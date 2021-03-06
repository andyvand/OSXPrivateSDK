/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSDictionary, NSString;

@interface GKLeaderboardSetInternal : GKInternalRepresentation
{
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_title;
    NSDictionary *_leaderboardIdentifiers;
    NSDictionary *_icons;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) NSDictionary *leaderboardIdentifiers; // @synthesize leaderboardIdentifiers=_leaderboardIdentifiers;
@property(retain, nonatomic) NSDictionary *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSString *setIdentifier;

@end

