//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileSync/SFSyncSet.h>

#import "SFPHDSyncSet.h"

@class NSString, SFPeer;

@interface SFPHDSyncSet : SFSyncSet <SFPHDSyncSet>
{
}


// Remaining properties
@property(readonly) SFPeer *localPeer; // @dynamic localPeer;
@property(copy) NSString *mountSuffixPath; // @dynamic mountSuffixPath;
@property(copy) NSString *remoteHomePath; // @dynamic remoteHomePath;
@property(copy) NSString *remoteHomeXMLSpec; // @dynamic remoteHomeXMLSpec;
@property(readonly) SFPeer *remotePeer; // @dynamic remotePeer;
@end
