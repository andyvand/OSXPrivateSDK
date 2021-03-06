/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface SPCFunction : NSObject
{
    NSString *_name;
    Class _returnType;
    NSArray *_parameterTypes;
    id _block;
}

+ (id)functionWithName:(id)arg1 returnType:(Class)arg2 parameterTypes:(id)arg3 block:(id)arg4;
@property(copy, nonatomic) id block; // @synthesize block=_block;
@property(copy, nonatomic) NSArray *parameterTypes; // @synthesize parameterTypes=_parameterTypes;
@property(retain, nonatomic) Class returnType; // @synthesize returnType=_returnType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)callWithArguments:(id)arg1 environment:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithName:(id)arg1 returnType:(Class)arg2 parameterTypes:(id)arg3 block:(id)arg4;

@end

