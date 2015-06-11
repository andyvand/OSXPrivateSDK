/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TTableViewItem.h>

@class NSImage, NSString;

// Not exported
@interface FI_TTagColumnTableViewItem : FI_TTableViewItem
{
    struct TFENode _node;
    _Bool _drawSelected;
}

+ (id)keyPathsForValuesAffectingImage;
@property(nonatomic) _Bool drawSelected; // @synthesize drawSelected=_drawSelected;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSImage *image; // @dynamic image;
@property(readonly, retain, nonatomic) NSString *name; // @dynamic name;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct TFENode)node;
- (id)initWithTagNode:(const struct TFENode *)arg1;

@end
