//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

#import "NSWindowDelegate.h"

@class FRStoreWindowController, NSString, WKView;

@interface FRJSSheetController : NSWindow <NSWindowDelegate>
{
    WKView *webView;
    NSString *inputWindowData;
    FRStoreWindowController *_storeWindowController;
}

+ (id)sharedInstance;
@property __weak FRStoreWindowController *storeWindowController; // @synthesize storeWindowController=_storeWindowController;
- (void).cxx_destruct;
- (id)colorWithHexColorString:(id)arg1;
- (id)getWindowData;
- (id)getWindowID;
- (void)closeWindowWithData:(id)arg1;
- (void)openWindowWithID:(id)arg1 title:(id)arg2 url:(id)arg3 html:(id)arg4 size:(struct CGSize)arg5 backgroundColor:(id)arg6 opacity:(double)arg7 data:(id)arg8;

@end
