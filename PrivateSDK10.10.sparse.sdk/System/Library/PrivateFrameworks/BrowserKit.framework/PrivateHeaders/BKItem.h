/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <BrowserKit/BKItem-Protocol.h>

@interface BKItem : NSObject <BKItem>
{
}

+ (id)mapOfAudiokMDItemToItemKeys;
+ (id)mapOfVideokMDItemToItemKeys;
+ (id)mapOfImagekMDItemToItemKeys;
+ (id)audioSpotlightKeys;
+ (id)videoSpotlightKeys;
+ (id)imageSpotlightKeys;
+ (id)browserKitPixelSizeStringWithWidth:(id)arg1 height:(id)arg2;
+ (BOOL)contentType:(id)arg1 conformsTo:(id)arg2;
+ (id)localizedStringForContentType:(id)arg1;
+ (id)localizedStringForItemKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (id)description;
- (BOOL)itemDisplayNameEditable;
- (id)itemPasteboardDataTypes;
- (id)itemPasteboardObjectForType:(id)arg1;
- (id)itemUniqueIdentifier;
- (BOOL)itemIsLeaf;
- (id)itemKeys;

@end

