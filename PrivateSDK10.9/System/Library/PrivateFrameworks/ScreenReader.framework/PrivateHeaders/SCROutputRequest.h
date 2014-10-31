//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSMutableArray, NSSet, NSString, SCRCIndexMap;

@interface SCROutputRequest : NSObject <NSCopying>
{
    unsigned long long _uniqueID;
    NSDate *_dateWhenSent;
    NSMutableArray *_sequentialSteps;
    double _sendDelay;
    NSString *_queueIdentifier;
    double _timeout;
    NSSet *_nonInterruptibleQueueIdentifiers;
    SCRCIndexMap *_info;
    struct __sroFlags {
        unsigned int blockSubsequentRequestsUntilFinished:1;
        unsigned int sendRequestSynchronously:1;
        unsigned int isSavedCopy:1;
        unsigned int hasBeenPreparedForBraille:1;
        unsigned int interruptsOutputRequests:1;
        unsigned int isStopRequest:1;
        unsigned int reserved:26;
    } _sroFlags;
}

+ (BOOL)consoleEnabled;
+ (void)setConsoleEnabled:(BOOL)arg1;
+ (id)createSystemRequest;
+ (id)createConsoleRequest;
- (id)fullString;
- (id)targetedCategory;
- (void)setTargetedCategory:(id)arg1;
- (id)shortDescription;
- (id)description;
- (id)info;
- (BOOL)isStopRequest;
- (void)setIsStopRequest:(BOOL)arg1;
- (BOOL)interruptsOutputRequests;
- (id)nonInterruptibleQueueIdentifiers;
- (void)setInterruptsOutputRequests:(BOOL)arg1 excluding:(id)arg2;
- (void)setInterruptsOutputRequests:(BOOL)arg1;
- (void)excludeFromBraille;
- (void)prepareForBrailleAnnouncement;
- (void)prepareForBrailleAlertWithTimeout:(BOOL)arg1 priority:(int)arg2 force:(BOOL)arg3;
- (void)prepareForBrailleAlertWithTimeout:(BOOL)arg1 priority:(int)arg2;
- (void)prepareForBrailleAlert;
- (void)addVariant:(int)arg1 object:(id)arg2;
- (void)addNotificationEventWithTag:(int)arg1 eventInfo:(id)arg2;
- (void)addNotificationEventWithTag:(int)arg1;
- (void)addRepeatingSoundWithIdentifier:(id)arg1 category:(id)arg2 interval:(double)arg3;
- (void)addKeyboardModifier:(unsigned long long)arg1 category:(id)arg2;
- (void)addCharacterEchoWithString:(id)arg1 modifier:(unsigned long long)arg2 category:(id)arg3 variants:(id)arg4;
- (void)addCharacterEchoWithAttributedString:(id)arg1 category:(id)arg2;
- (void)addCharacterEchoWithAttributedString:(id)arg1 category:(id)arg2 variants:(id)arg3;
- (void)addCharacterEchoWithString:(id)arg1 category:(id)arg2;
- (void)addCharacterEchoWithString:(id)arg1 category:(id)arg2 component:(id)arg3 variants:(id)arg4;
- (void)addCharacterEchoWithString:(id)arg1 category:(id)arg2 variants:(id)arg3;
- (void)addSoundWithIdentifier:(id)arg1 category:(id)arg2 asynchronous:(BOOL)arg3 variants:(id)arg4;
- (void)addSoundWithIdentifier:(id)arg1 category:(id)arg2 variants:(id)arg3;
- (void)addSoundWithIdentifier:(id)arg1 variants:(id)arg2;
- (void)addAttributedString:(id)arg1 category:(id)arg2;
- (void)addAttributedString:(id)arg1 category:(id)arg2 variants:(id)arg3;
- (void)addString:(id)arg1 category:(id)arg2;
- (void)addString:(id)arg1 category:(id)arg2 variants:(id)arg3;
- (void)addString:(id)arg1 category:(id)arg2 component:(id)arg3 variants:(id)arg4;
- (id)sendDate;
- (unsigned long long)uniqueID;
- (void)removeSequentialSteps:(int)arg1;
- (void)removeAllSequentialSteps;
- (void)removeSequentialStepAtIndex:(unsigned long long)arg1;
- (void)addSequentialStep:(id)arg1;
- (void)insertSequentialStep:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)sequentialStepAtIndex:(unsigned long long)arg1;
- (id)sequentialSteps;
- (BOOL)containsActions;
- (BOOL)send;
- (BOOL)isSavedCopy;
- (void)setIsSavedCopy:(BOOL)arg1;
- (id)lastAction;
- (void)synchronousRequestCompleted;
- (BOOL)sendSynchronously;
- (void)setSendSynchronously:(BOOL)arg1;
- (void)setDelay:(double)arg1;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (id)queueIdentifier;
- (void)setQueueIdentifier:(id)arg1;
- (void)addSequentialStep:(id)arg1 forCategory:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithOutputRequest:(id)arg1;
- (id)initWithSequentialStep:(id)arg1 forCategory:(id)arg2;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
