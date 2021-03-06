//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"

@class NSMenu, NSMutableDictionary, NSTimer, Watchdog;

__attribute__((visibility("hidden")))
@interface DebugUtilities : NSObject <NSMenuDelegate>
{
    NSMenu *debugMenu;
    Watchdog *watchdog;
    NSMutableDictionary *stopwatches;
    int numTestsLeftToComplete;
    BOOL memorySamplerIsRunning;
    NSTimer *memorySamplerFinishedTimer;
    BOOL automatedTestRunning;
}

+ (id)sharedDebugUtilities;
+ (void)overrideSystemHTTPProxy:(id)arg1 HTTPSProxy:(id)arg2;
+ (void)overrideSystemProxiesIfNeeded;
+ (void)startLaunchTimeLoggingIfNeeded;
- (id)watchdog;
- (void)stopWatchdog;
- (void)startWatchdog;
- (BOOL)shouldSuppressAlerts;
- (void)maybeQuitAfterTestCompleted;
- (double)stopwatchRunTimeWithIdentifier:(id)arg1;
- (void)stopStopwatchWithIdentifier:(id)arg1;
- (void)startStopwatchWithIdentifier:(id)arg1;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (void)menuNeedsUpdate:(id)arg1;
- (void)createDebugMenu;
- (void)_populateDebugMenu;
- (id)_worldLeaksSubmenuItem;
- (id)_miscellaneousFlagsSubmenuItem;
- (id)_drawingAndCompositingFlagsSubmenuItem;
- (void)setAutomatedTestRunning:(BOOL)arg1;
- (BOOL)isAutomatedTestRunning;
- (BOOL)validate_toggleMemorySamplerTool:(id)arg1;
- (void)toggleMemorySamplerTool:(id)arg1;
- (void)stopMemorySampler;
- (void)startMemorySampler:(double)arg1;
- (BOOL)validate_toggleWatchdog:(id)arg1;
- (void)toggleWatchdog:(id)arg1;
- (BOOL)validate_toggleSuppressAlerts:(id)arg1;
- (void)toggleSuppressAlerts:(id)arg1;
- (BOOL)_alertsAreAutomaticallySuppressed;
- (BOOL)validate_toggleStressTest:(id)arg1;
- (void)toggleStressTest:(id)arg1;
- (void)replaySession:(id)arg1;
- (void)stopStressTest;
- (void)startStressTest;
- (void)dealloc;
- (id)init;

@end

