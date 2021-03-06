/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface EWSFindFolderParentType : NSObject
{
    NSArray *_Folders;
    long long _IndexedPagingOffset;
    long long _NumeratorOffset;
    long long _AbsoluteDenominator;
    BOOL _IncludesLastItemInRange;
    long long _TotalItemsInView;
}

+ (id)definition;
@property(nonatomic) long long TotalItemsInView; // @synthesize TotalItemsInView=_TotalItemsInView;
@property(nonatomic) BOOL IncludesLastItemInRange; // @synthesize IncludesLastItemInRange=_IncludesLastItemInRange;
@property(nonatomic) long long AbsoluteDenominator; // @synthesize AbsoluteDenominator=_AbsoluteDenominator;
@property(nonatomic) long long NumeratorOffset; // @synthesize NumeratorOffset=_NumeratorOffset;
@property(nonatomic) long long IndexedPagingOffset; // @synthesize IndexedPagingOffset=_IndexedPagingOffset;
@property(copy, nonatomic) NSArray *Folders; // @synthesize Folders=_Folders;
- (void)dealloc;

@end

