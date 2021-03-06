/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface XSWebProxy : NSObject <NSCoding, NSCopying>
{
    NSMutableArray *_urls;
    NSString *_path;
}

@property(retain) NSString *path; // @synthesize path=_path;
@property(retain) NSMutableArray *urls; // @synthesize urls=_urls;
- (id)settings;
- (id)initWithSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

