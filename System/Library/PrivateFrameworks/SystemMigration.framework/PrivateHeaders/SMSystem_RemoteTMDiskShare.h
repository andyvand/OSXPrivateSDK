//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMSystem.h>

@class NSMutableSet, NSString;

@interface SMSystem_RemoteTMDiskShare : SMSystem
{
    NSString *_shareName;
    NSString *_humanName;
    NSString *_mountPoint;
    long long _sharedSystems;
    long long _dmgsProcessed;
    unsigned int _flags;
    NSMutableSet *_timeMachineSystems;
}

+ (id)keyPathsForValuesAffectingAvailableActionLabel;
+ (id)keyPathsForValuesAffectingAvailableAction;
+ (id)keyPathsForValuesAffectingDisplayState;
+ (id)keyPathsForValuesAffectingVolumeName;
+ (id)keyPathsForValuesAffectingDisplayName;
@property(retain) NSString *shareName; // @synthesize shareName=_shareName;
- (BOOL)selectableSystem;
- (void)pressedActionButton:(id)arg1;
- (id)availableActionLabel;
- (BOOL)availableAction;
- (BOOL)mountedFromServer;
- (BOOL)requiresUsername;
- (BOOL)usesSinglePassword;
- (BOOL)usesGuestAccess;
- (long long)sharedSystems;
- (id)childSystems;
- (void)unRegisterTMSystem:(id)arg1;
- (void)registerTMSystem:(id)arg1;
- (id)displayState;
- (void)setState:(int)arg1;
- (int)state;
- (BOOL)isMountableByUser;
- (id)UUID;
- (id)mountPoint;
- (void)setMountPoint:(id)arg1;
- (BOOL)isMounting;
- (BOOL)isMounted;
- (id)volumeIcon;
- (id)volumeName;
- (id)systemDescription;
- (id)displayName;
- (BOOL)isInternal;
- (id)systemVersion;
- (id)systemName;
- (int)systemType;
- (id)path;
- (BOOL)mount:(BOOL)arg1;
- (void)searchForBackupsAtMountpoint:(id)arg1;
- (BOOL)mountNetAuth:(BOOL)arg1;
- (BOOL)mount;
- (void)unmount;
- (void)dealloc;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)modelIcon;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 humanName:(id)arg2 flags:(unsigned int)arg3;

@end
