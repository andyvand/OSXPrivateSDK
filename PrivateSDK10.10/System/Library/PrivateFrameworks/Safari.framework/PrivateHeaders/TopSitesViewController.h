/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "GridViewDataSource-Protocol.h"
#import "GridViewDelegate-Protocol.h"
#import "SafariViewDelegate-Protocol.h"
#import "StartPageContentViewController-Protocol.h"
#import "TopSitesGridCellAccessoryViewDelegate-Protocol.h"

@class GridView, NSArray, NSLayoutConstraint, NSMapTable, NSScrollView, NSString, NSView, StartPageViewController;

// Not exported
@interface TopSitesViewController : NSViewController <GridViewDataSource, GridViewDelegate, TopSitesGridCellAccessoryViewDelegate, SafariViewDelegate, StartPageContentViewController>
{
    struct TopSite *_draggedTopSite;
    unsigned long long _draggedCellIndex;
    NSMapTable *_cellsToMetadataTokens;
    BOOL _shouldIgnoreTopSitesChangesNotifications;
    BOOL _hasPendingReload;
    NSLayoutConstraint *_contentToRootViewPercentConstraint;
    NSArray *_centeringConstraints;
    StartPageViewController *_startPageViewController;
    NSView *_externalCenteringView;
    NSScrollView *_scrollView;
    NSView *_documentView;
    GridView *_topSitesGridView;
    NSLayoutConstraint *_documentViewClipViewCenteringConstraint;
    NSLayoutConstraint *_gridViewClipViewGreaterThanOrEqualHeightConstraint;
    NSLayoutConstraint *_gridViewClipViewGreaterThanOrEqualWidthConstraint;
}

+ (id)defaultPageTitle;
@property(nonatomic) __weak NSLayoutConstraint *gridViewClipViewGreaterThanOrEqualWidthConstraint; // @synthesize gridViewClipViewGreaterThanOrEqualWidthConstraint=_gridViewClipViewGreaterThanOrEqualWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *gridViewClipViewGreaterThanOrEqualHeightConstraint; // @synthesize gridViewClipViewGreaterThanOrEqualHeightConstraint=_gridViewClipViewGreaterThanOrEqualHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *documentViewClipViewCenteringConstraint; // @synthesize documentViewClipViewCenteringConstraint=_documentViewClipViewCenteringConstraint;
@property(nonatomic) __weak GridView *topSitesGridView; // @synthesize topSitesGridView=_topSitesGridView;
@property(nonatomic) __weak NSView *documentView; // @synthesize documentView=_documentView;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSView *externalCenteringView; // @synthesize externalCenteringView=_externalCenteringView;
@property(nonatomic) __weak StartPageViewController *startPageViewController; // @synthesize startPageViewController=_startPageViewController;
- (void).cxx_destruct;
- (void)_popDisappearingItemCursorIfNeeded;
- (BOOL)_screenPointIsOverDeleteSafeZone:(struct CGPoint)arg1;
- (BOOL)_screenPointIsValidDropLocationInGridView:(struct CGPoint)arg1;
- (void)_rearrangeTopSitesByInsertingURL:(id)arg1 withTitle:(id)arg2 atIndex:(unsigned long long)arg3 indexExchanges:(id)arg4;
- (void)_sortTopSites:(const Vector_3100def6 *)arg1 inVector:(Vector_3100def6 *)arg2 withIndexExchanges:(id)arg3;
- (BOOL)_pasteboardContainsExactlyOneViableTopSiteURL:(id)arg1;
- (struct TopSite *)_topSiteAtIndex:(unsigned long long)arg1;
- (void)_topSitePinnedStatusChanged:(id)arg1;
- (void)_topSitesArrangementChanged:(id)arg1;
- (void)_topSitesChanged:(id)arg1;
- (void)_topSiteRemoved:(id)arg1;
- (id)_enqueuedSiteMetadataRequestForCellView:(id)arg1 topSiteURL:(id)arg2;
- (void)_cancelPendingMetadataRequests;
- (void)_reloadData;
- (void)_updateRowAndColumnCounts;
- (void)_getPreferredNumberOfRows:(unsigned long long *)arg1 columns:(unsigned long long *)arg2;
- (unsigned long long)_maximumNumberOfCells;
- (id)_centeringConstraintForDescendentView:(id)arg1;
- (void)_updateExternalCenteringConstraints;
- (void)_updateWidthRatioConstraint;
- (void)_updateLayoutStyleAttributes;
- (void)removeButtonPressedInTopSitesGridCellAccessoryView:(id)arg1;
- (void)pinButtonPressedInTopSitesGridCellAccessoryView:(id)arg1;
- (unsigned long long)gridView:(id)arg1 indexOfCellReplacedByDrop:(id)arg2;
- (id)indexesOfCellsWithFixedLocationDuringDraggingInGridView:(id)arg1;
- (void)gridView:(id)arg1 didSelectCellAtIndex:(unsigned long long)arg2;
- (void)_gridView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 proposedOperation:(unsigned long long *)arg4;
- (void)gridView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 proposedOperation:(unsigned long long *)arg4;
- (void)gridView:(id)arg1 draggingSession:(id)arg2 movedToPoint:(struct CGPoint)arg3;
- (id)gridView:(id)arg1 pasteboardWriterForCellAtIndex:(unsigned long long)arg2;
- (id)draggingItemClassesForGridView:(id)arg1;
- (void)gridView:(id)arg1 didCompleteDrop:(id)arg2 index:(unsigned long long)arg3 exchangedIndexes:(id)arg4;
- (BOOL)gridView:(id)arg1 acceptDrop:(id)arg2 index:(unsigned long long)arg3 exchangedIndexes:(id)arg4;
- (unsigned long long)gridView:(id)arg1 validateDrop:(id)arg2 proposedIndex:(unsigned long long *)arg3;
- (void)gridView:(id)arg1 willRecycleView:(id)arg2;
- (void)gridView:(id)arg1 prepareView:(id)arg2 forCellAtIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfCellsInGridView:(id)arg1;
- (void)delegatingViewDidMoveToWindow:(id)arg1;
- (void)delegatingView:(id)arg1 willMoveToWindow:(id)arg2;
@property(readonly, nonatomic) NSView *titleView;
- (void)_scrollViewDidResize:(id)arg1;
- (void)awakeFromNib;
- (id)nibName;
@property(readonly, nonatomic) NSString *pageTitle;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
