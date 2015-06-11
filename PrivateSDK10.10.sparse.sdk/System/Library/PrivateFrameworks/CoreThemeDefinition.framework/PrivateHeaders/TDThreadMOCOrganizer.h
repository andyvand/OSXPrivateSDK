/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CoreThemeDocument, NSThread;

@interface TDThreadMOCOrganizer : NSObject
{
    NSThread *mainThread;
    CoreThemeDocument *document;
}

- (id)initWithDocument:(id)arg1 mainThread:(id)arg2;
- (id)init;
- (id)threadMOC;
- (id)mainMOC;
- (id)document;
- (id)mainThread;
- (void)setThreadMOC:(id)arg1;

@end
