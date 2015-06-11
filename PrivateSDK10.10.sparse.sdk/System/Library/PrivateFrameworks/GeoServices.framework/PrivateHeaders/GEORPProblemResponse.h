/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface GEORPProblemResponse : PBCodable <NSCopying>
{
    NSString *_problemId;
    int _statusCode;
    BOOL _isNotificationSupported;
    struct {
        unsigned int statusCode:1;
        unsigned int isNotificationSupported:1;
    } _has;
}

@property(nonatomic) BOOL isNotificationSupported; // @synthesize isNotificationSupported=_isNotificationSupported;
@property(retain, nonatomic) NSString *problemId; // @synthesize problemId=_problemId;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsNotificationSupported;
@property(readonly, nonatomic) BOOL hasProblemId;
@property(nonatomic) BOOL hasStatusCode;
- (void)dealloc;

@end
