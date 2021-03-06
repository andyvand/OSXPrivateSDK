/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSValueTransformer.h"

@class ILMediaGroupsTreeController;

@interface ILMediaGroupToObjectCountTransformer : NSValueTransformer
{
    ILMediaGroupsTreeController *_treeController;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (id)treeController;
- (void)setTreeController:(id)arg1;
- (id)transformedValue:(id)arg1;
- (void)dealloc;

@end

