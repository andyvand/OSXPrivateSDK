//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSXPCConnection;

@interface SOAActiveChatManager : NSObject
{
    NSXPCConnection *_delegateConnection;
    NSMutableDictionary *_chatGUIDToLastReadMessage;
    NSMutableDictionary *_chatGUIDToLastPostedMessage;
}

+ (id)weakSharedInstance;
@property(retain, nonatomic) NSMutableDictionary *chatGUIDToLastPostedMessage; // @synthesize chatGUIDToLastPostedMessage=_chatGUIDToLastPostedMessage;
@property(retain, nonatomic) NSMutableDictionary *chatGUIDToLastReadMessage; // @synthesize chatGUIDToLastReadMessage=_chatGUIDToLastReadMessage;
@property(nonatomic) __weak NSXPCConnection *delegateConnection; // @synthesize delegateConnection=_delegateConnection;
- (void).cxx_destruct;
- (BOOL)shouldPostNotificationForMessage:(id)arg1 inChat:(id)arg2;
- (void)setLastPostedMessage:(id)arg1 forChatGUID:(id)arg2;
- (void)setLastReadMessage:(id)arg1 forChatGUID:(id)arg2;
- (void)markChatGUIDAsRead:(id)arg1;
- (void)runBlock:(CDUnknownBlockType)arg1 forChatGUID:(id)arg2;
- (id)init;

@end
