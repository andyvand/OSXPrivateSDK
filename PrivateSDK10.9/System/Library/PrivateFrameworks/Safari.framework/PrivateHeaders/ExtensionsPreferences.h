//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

@class WebView;

__attribute__((visibility("hidden")))
@interface ExtensionsPreferences : PreferencesModule
{
    WebView *webView;
    struct OwnPtr<Safari::ExtensionsPreferencesView> _view;
    struct OwnPtr<Safari::ExtensionsPreferencesViewController> _viewController;
    struct CGSize _originalContentMinSize;
    struct CGSize _originalContentMaxSize;
    unsigned long long _previousEnabledHeight;
    BOOL _usingDisabledHeight;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resizeWindowToEnabledHeight;
- (void)resizeWindowToDisabledHeight;
- (void)_resizeWindowToContentHeight:(double)arg1 animated:(BOOL)arg2;
- (void)_updateMinSize;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)willBeDisplayed;
- (BOOL)isResizable;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)arg1;

@end
