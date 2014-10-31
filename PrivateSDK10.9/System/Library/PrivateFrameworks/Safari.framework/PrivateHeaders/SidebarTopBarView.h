//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "CustomKeyViewLoop.h"
#import "SegmentedTabBarDelegate.h"

@class NSTextField, SegmentedTabBar;

__attribute__((visibility("hidden")))
@interface SidebarTopBarView : NSView <SegmentedTabBarDelegate, CustomKeyViewLoop>
{
    id <SidebarTopBarViewDelegate> _delegate;
    NSTextField *_sidebarLabel;
    SegmentedTabBar *_tabBar;
    BOOL _tall;
}

@property(nonatomic) NSTextField *sidebarLabel; // @synthesize sidebarLabel=_sidebarLabel;
@property(nonatomic) id <SidebarTopBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_createSharedLinksTab;
- (id)_createReadingListTab;
- (id)_createBookmarksTab;
- (void)_updateTabWidth;
- (void)_addSegmentedTabBarItem:(id)arg1 withOverriddenTabWidth:(double)arg2;
- (void)_setSidebarLabelHidden:(BOOL)arg1;
- (id)safari_keyViews;
- (void)segmentedTabBar:(id)arg1 selectedTabDidChangeWithIdentifier:(id)arg2 index:(unsigned long long)arg3;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct CGRect)frameOfTabWithIdentifier:(id)arg1;
@property(nonatomic) BOOL showsSocialLinksTab;
@property(nonatomic, getter=isTall) BOOL tall;
- (id)initWithFrame:(struct CGRect)arg1;

@end
