//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOClientCapabilities : PBCodable <NSCopying>
{
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_hardwareModel;
    int _maxManeuverTypeSupported;
    BOOL _internalInstall;
    struct {
        unsigned int maxManeuverTypeSupported:1;
        unsigned int internalInstall:1;
    } _has;
}

@property(nonatomic) BOOL internalInstall; // @synthesize internalInstall=_internalInstall;
@property(retain, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(retain, nonatomic) NSString *appMinorVersion; // @synthesize appMinorVersion=_appMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion; // @synthesize appMajorVersion=_appMajorVersion;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasInternalInstall;
@property(nonatomic) BOOL hasMaxManeuverTypeSupported;
@property(nonatomic) int maxManeuverTypeSupported; // @synthesize maxManeuverTypeSupported=_maxManeuverTypeSupported;
@property(readonly, nonatomic) BOOL hasHardwareModel;
@property(readonly, nonatomic) BOOL hasAppMinorVersion;
@property(readonly, nonatomic) BOOL hasAppMajorVersion;
- (void)dealloc;

@end
