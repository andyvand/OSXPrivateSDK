/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FileSync/SFBase.h>

#import <FileSync/SFPeer-Protocol.h>

@class NSArray, NSSet, NSString;

@interface SFPeer : SFBase <SFPeer>
{
}

+ (BOOL)accessInstanceVariablesDirectly;
@property(readonly, copy) NSString *peerRef;

// Remaining properties
@property BOOL abortOnWriteToReadOnly; // @dynamic abortOnWriteToReadOnly;
@property(readonly, copy) NSString *descriptionDebug; // @dynamic descriptionDebug;
@property(copy) NSSet *exclusionList; // @dynamic exclusionList;
@property(copy) NSArray *exclusionSets; // @dynamic exclusionSets;
@property(copy) NSSet *inclusionList; // @dynamic inclusionList;
@property(copy) NSArray *inclusionSets; // @dynamic inclusionSets;
@property(readonly) BOOL isRemote; // @dynamic isRemote;
@property(readonly) BOOL isRemoteHomeDir; // @dynamic isRemoteHomeDir;
@property(copy) NSString *name; // @dynamic name;
@property BOOL nextSyncReadOnly; // @dynamic nextSyncReadOnly;
@property(readonly, copy) NSString *rootPath; // @dynamic rootPath;
@property(readonly, copy) NSString *storeID; // @dynamic storeID;

@end

