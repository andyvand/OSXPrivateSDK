/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface RMList : NSObject
{
    NSMutableArray *_items;
}

@property(readonly) NSArray *listItems; // @synthesize listItems=_items;
- (struct CGRect)bounds;
@property(readonly) struct CGPDFPage *page; // @dynamic page;
- (void)addItem:(id)arg1;

@end
