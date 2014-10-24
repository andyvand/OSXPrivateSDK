//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessagesKit/SOHelper.h>

#import "SOBuddyHelperReceiverProtocol.h"

@interface SOBuddyHelper : SOHelper <SOBuddyHelperReceiverProtocol>
{
}

+ (id)weakSharedInstance;
+ (id)remoteReceiverProtocol;
+ (id)receiverProtocol;
+ (id)bundleName;
- (id)imageForName:(id)arg1;
- (void)openConversationWithBuddyID:(id)arg1 serviceName:(id)arg2;
- (void)openConversationWithBuddyDetails:(id)arg1;
- (id)bonjourBuddyListBlocking;
- (id)bonjourBuddyList;
- (id)bonjourBuddyListTitleBlocking;
- (id)bonjourBuddyListTitle;
- (id)buddyListsBlocking;
- (id)buddyLists;
- (id)buddyListTitleBlocking;
- (id)buddyListTitle;
- (void)setValue:(id)arg1 forControllerKey:(id)arg2;

@end
