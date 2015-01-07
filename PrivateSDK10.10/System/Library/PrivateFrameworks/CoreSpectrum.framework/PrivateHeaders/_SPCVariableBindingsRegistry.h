/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SPCModelChangeObserver-Protocol.h"

@class NSMutableDictionary, NSString;

@interface _SPCVariableBindingsRegistry : NSObject <SPCModelChangeObserver>
{
    id _object;
    NSMutableDictionary *_keyPathsForVariableNames;
    NSMutableDictionary *_blocksForVariableNames;
}

@property(retain) NSMutableDictionary *blocksForVariableNames; // @synthesize blocksForVariableNames=_blocksForVariableNames;
@property(retain) NSMutableDictionary *keyPathsForVariableNames; // @synthesize keyPathsForVariableNames=_keyPathsForVariableNames;
@property id object; // @synthesize object=_object;
- (id)_transformValue:(id)arg1 intoValueCompatibleWithPropertyAtKeyPath:(id)arg2;
- (void)_evaluateVariable:(id)arg1 passingResultToBlock:(id)arg2;
- (void)_evaluateVariable:(id)arg1 settingValueOnBoundObjectForKeyPath:(id)arg2;
- (void)_relinquishChangeManagerObservationForce:(BOOL)arg1;
- (void)_ensureChangeManagerObservation;
- (void)changeManager:(id)arg1 didReceiveChangesInChangeGroup:(id)arg2;
- (void)unregisterBlockForVariableNamed:(id)arg1;
- (void)registerBlock:(id)arg1 forChangesToVariableNamed:(void)arg2;
- (void)unregisterBindingForKeyPath:(id)arg1;
- (void)registerBindingForKeyPath:(id)arg1 variableName:(id)arg2;
- (id)_boundVariableNameForKeyPath:(id)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
