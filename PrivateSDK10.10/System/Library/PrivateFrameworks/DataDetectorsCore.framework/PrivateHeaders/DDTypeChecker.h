/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

// Not exported
@interface DDTypeChecker : NSObject
{
    NSMutableDictionary *_cache;
    NSDictionary *_collection;
    id <DDTypeCheckerDelegate> _delegate;
}

@property id <DDTypeCheckerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)validate:(id)arg1;
- (int)_validateRec:(id)arg1;
- (int)validateNamedType:(id)arg1;
- (int)_validateCurrent:(id)arg1;
- (int)_deepValidateSubComponentRec:(id)arg1;
- (void)dealloc;
- (id)initWithTypeCollection:(id)arg1;

@end
