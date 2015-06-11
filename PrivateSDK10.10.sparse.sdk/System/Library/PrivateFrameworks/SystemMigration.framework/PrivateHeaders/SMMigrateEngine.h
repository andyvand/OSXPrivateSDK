/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SMMigrationEngineProtocol-Protocol.h"
#import "SMSystemScannerChangesProtocol-Protocol.h"
#import "SMSystemScannerDaemonClient-Protocol.h"

@class EngineDelegateProxy, NSArray, NSDate, NSError, NSFileHandle, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SMMigrationRequest, XMSandbox;

@interface SMMigrateEngine : NSObject <SMMigrationEngineProtocol, SMSystemScannerDaemonClient, SMSystemScannerChangesProtocol>
{
    double _transferRateChart[32];
    unsigned long long _transferRateMarker;
    BOOL _isRebasingTimeRemaining;
    BOOL _tracedUnderOneMinute;
    unsigned long long _state;
    SMMigrationRequest *_migrationRequest;
    EngineDelegateProxy *_delegate;
    NSString *_tracingUUID;
    NSObject<OS_dispatch_queue> *_enginePropertiesQueue;
    NSObject<OS_dispatch_queue> *_engineQueue;
    long long _totalBytes;
    long long _finishedBytes;
    NSMutableArray *_engineSteps;
    NSArray *_engineStepsForCurrentMigration;
    unsigned long long _requestedDaemonScannerState;
    XMSandbox *_windowsSandbox;
    NSMutableDictionary *_windowsDeconflictedNamesMap;
    double _progressLastSize;
    double _progressLastRate;
    unsigned long long _progressMaxRange;
    NSDate *_progressLastDate;
    double _progressThrottleReferenceTimeInterval;
    double _lastPercentUpdate;
    double _startTime;
    NSFileHandle *_performanceLog;
    NSError *_error;
}

+ (id)sortOrder;
+ (void)writeCurrentMigrationDescriptionFromSystem:(id)arg1 toSystem:(id)arg2;
@property BOOL tracedUnderOneMinute; // @synthesize tracedUnderOneMinute=_tracedUnderOneMinute;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSFileHandle *performanceLog; // @synthesize performanceLog=_performanceLog;
@property double startTime; // @synthesize startTime=_startTime;
@property BOOL isRebasingTimeRemaining; // @synthesize isRebasingTimeRemaining=_isRebasingTimeRemaining;
@property double lastPercentUpdate; // @synthesize lastPercentUpdate=_lastPercentUpdate;
@property double progressThrottleReferenceTimeInterval; // @synthesize progressThrottleReferenceTimeInterval=_progressThrottleReferenceTimeInterval;
@property(retain) NSDate *progressLastDate; // @synthesize progressLastDate=_progressLastDate;
@property unsigned long long progressMaxRange; // @synthesize progressMaxRange=_progressMaxRange;
@property double progressLastRate; // @synthesize progressLastRate=_progressLastRate;
@property double progressLastSize; // @synthesize progressLastSize=_progressLastSize;
@property(retain) NSMutableDictionary *windowsDeconflictedNamesMap; // @synthesize windowsDeconflictedNamesMap=_windowsDeconflictedNamesMap;
@property(retain) XMSandbox *windowsSandbox; // @synthesize windowsSandbox=_windowsSandbox;
@property unsigned long long requestedDaemonScannerState; // @synthesize requestedDaemonScannerState=_requestedDaemonScannerState;
@property(retain) NSArray *engineStepsForCurrentMigration; // @synthesize engineStepsForCurrentMigration=_engineStepsForCurrentMigration;
@property(retain) NSMutableArray *engineSteps; // @synthesize engineSteps=_engineSteps;
@property long long finishedBytes; // @synthesize finishedBytes=_finishedBytes;
@property long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(retain) NSObject<OS_dispatch_queue> *engineQueue; // @synthesize engineQueue=_engineQueue;
@property(retain) NSObject<OS_dispatch_queue> *enginePropertiesQueue; // @synthesize enginePropertiesQueue=_enginePropertiesQueue;
@property(retain) NSString *tracingUUID; // @synthesize tracingUUID=_tracingUUID;
@property(retain) EngineDelegateProxy *delegate; // @synthesize delegate=_delegate;
@property(retain) SMMigrationRequest *migrationRequest; // @synthesize migrationRequest=_migrationRequest;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_messageTraceStartForSourceSystem:(id)arg1;
- (BOOL)rebuildXPCCachePostMigration;
- (void)_postProcessSystemsForUsers;
- (void)_preProcessSystemsForUsers;
- (void)stopAllSteps;
- (void)deletePathsBeforeShove;
- (void)runEngine;
- (void)_aggregateEngineErrorsAndWarnings;
- (id)_fdeNeedsToBeReeanbled;
- (id)_notEnoughFreeSpaceOnVolumeError:(id)arg1;
- (id)_notEnoughFreeSpaceOnTargetError;
- (id)_userCanceledError;
- (id)_stepErrorWithException:(id)arg1;
- (id)_errorWithMessage:(id)arg1;
- (void)migrateError:(int)arg1 forMigrateStep:(id)arg2;
- (void)migrateProgressKey:(id)arg1 arguments:(id)arg2 forMigrateStep:(id)arg3;
- (void)migrateProgressString:(id)arg1 forMigrateStep:(id)arg2;
- (void)migrateProgressChangedForMigrateStep:(id)arg1;
- (void)calculateTimeRemainingWithStep:(id)arg1;
- (void)stop;
- (void)stopOrSuspend:(unsigned long long)arg1;
- (void)acknowledgeCompletedRequest;
- (void)run;
- (void)doneWithCurrentRequest;
- (void)predetermineTranslatedUIDs;
- (void)generatePreflightSteps;
- (void)generateAppsFileStep;
- (void)generateMachineSettingsStep;
- (void)generateUsersStep;
- (void)acceptNewMigrationRequest:(id)arg1;
- (void)generateEngineSteps;
- (void)systemsAreAvailable;
- (void)awaitSystemAvailability;
- (void)startupNewRequest;
- (void)systemScannerSystemChanged:(id)arg1 onSystem:(id)arg2;
- (void)systemScannerRemovedSystem:(id)arg1;
- (void)systemScannerAddedSystem:(id)arg1;
- (BOOL)engineShouldContinue;
- (BOOL)isEngineState:(unsigned long long)arg1;
@property unsigned long long state; // @synthesize state=_state;
@property(readonly) BOOL useSandbox;
- (id)findStepOfClass:(Class)arg1;
@property(readonly, copy) NSString *description;
- (id)stepsToProcess;
- (void)addStep:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
