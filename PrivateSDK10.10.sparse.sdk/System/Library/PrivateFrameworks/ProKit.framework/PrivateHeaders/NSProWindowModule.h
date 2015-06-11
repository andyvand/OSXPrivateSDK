/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/MKOldWindowModule.h>

@interface NSProWindowModule : MKOldWindowModule
{
    void *_proReserved7;
    void *_proReserved8;
    void *_proReserved9;
}

+ (id)toolbarConfigurationFile;
+ (Class)toolbarItemClass;
+ (Class)toolbarClass;
+ (Class)windowClass;
+ (Class)windowControllerClass;
- (id)_stringFromWindowStyleMask:(unsigned long long)arg1;
- (unsigned long long)_windowStyleMaskFromString:(id)arg1;
- (void)_setImageForToolbarItem:(id)arg1 withInfo:(id)arg2;
- (id)toolbarImageSource;
- (id)customContentSeparatorColorForState:(BOOL)arg1;
- (void)applyLayoutDictionary:(id)arg1;
- (BOOL)loadView;

@end
