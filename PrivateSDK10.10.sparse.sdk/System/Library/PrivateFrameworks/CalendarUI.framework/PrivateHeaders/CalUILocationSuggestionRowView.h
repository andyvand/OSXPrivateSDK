/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableRowView.h"

@interface CalUILocationSuggestionRowView : NSTableRowView
{
    BOOL _isGroup;
    BOOL _shouldDrawBorder;
}

@property BOOL shouldDrawBorder; // @synthesize shouldDrawBorder=_shouldDrawBorder;
@property BOOL isGroup; // @synthesize isGroup=_isGroup;
- (long long)selectionHighlightStyle;
- (void)drawBorderInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
