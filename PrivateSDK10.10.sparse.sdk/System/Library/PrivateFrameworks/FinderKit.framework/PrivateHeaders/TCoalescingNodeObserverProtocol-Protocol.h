/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol TCoalescingNodeObserverProtocol <NSObject>

@optional
- (void)queryStopped:(const struct TFENode *)arg1;
- (void)childrenSpatialDataChanged:(const struct TFENode *)arg1;
- (void)aliasTargetChanged:(const struct TFENode *)arg1;
- (void)openChildListUpdated:(const struct TFENode *)arg1;
- (void)syncCompleted:(const struct TFENode *)arg1;
- (void)openSyncCompleted:(const struct TFENode *)arg1;
- (void)openSyncStarted:(const struct TFENode *)arg1;
- (void)nodeMDAttributeChanged:(const struct TFENode *)arg1 attributes:(id)arg2 isDisplayAttributes:(_Bool)arg3;
- (void)nodeMoved:(const struct TFENode *)arg1;
- (void)bulkNodesDeleted:(const struct map<const TFENode, const TFENodeVector *const, std::__1::less<const TFENode>, std::__1::allocator<std::__1::pair<const TFENode, const TFENodeVector *const>>> *)arg1;
- (void)bulkNodesChanged:(const map_39732344 *)arg1;
- (void)bulkNodesAdded:(const struct map<const TFENode, const TFENodeVector *const, std::__1::less<const TFENode>, std::__1::allocator<std::__1::pair<const TFENode, const TFENodeVector *const>>> *)arg1;
- (void)aliasesTargetChanged:(const struct TFENodeVector *)arg1;
- (void)nodesGoingAway:(const struct TFENodeVector *)arg1;
- (void)nodesDeleted:(const struct TFENodeVector *)arg1 fromObservedNode:(const struct TFENode *)arg2;
- (void)nodesChanged:(const vector_614ab7ad *)arg1 inObservedNode:(const struct TFENode *)arg2;
- (void)nodesAdded:(const struct TFENodeVector *)arg1 toObservedNode:(const struct TFENode *)arg2;
@end

