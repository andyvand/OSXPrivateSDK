//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ILMediaObjectsProvider.h"

@class NSMutableArray;

@interface ILDefaultMediaObjectsProvider : NSObject <ILMediaObjectsProvider>
{
    NSMutableArray *_mediaObjects;
}

- (void)cancelEvaluation;
- (BOOL)containsMediaObjectsWithMediaTypeMask:(unsigned long long)arg1;
- (unsigned long long)mediaObjectCount;
- (id)mediaObjectsAsync;
- (id)mediaObjects;
- (void)removeMediaObject:(id)arg1;
- (void)addMediaObjects:(id)arg1;
- (void)setMediaObjectsArray:(id)arg1;
- (BOOL)objectsFetched;
- (void)dealloc;
- (id)init;

@end
