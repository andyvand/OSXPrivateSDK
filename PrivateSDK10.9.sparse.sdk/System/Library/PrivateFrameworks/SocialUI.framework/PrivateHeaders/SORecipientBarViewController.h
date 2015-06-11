//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/SOViewController.h>

#import "CNContactPickerDelegate.h"
#import "NSMenuDelegate.h"
#import "NSPopoverDelegate.h"
#import "SOBuddyOutlineViewControllerDelegate.h"

@class CNContactPicker, NSButton, SOBuddyOutlineViewController, SOChatDisplayController, SORecipientBarView;

@interface SORecipientBarViewController : SOViewController <NSMenuDelegate, NSPopoverDelegate, CNContactPickerDelegate, SOBuddyOutlineViewControllerDelegate>
{
    BOOL _reloadContactPicker;
    NSButton *_addRecipientButton;
    SOChatDisplayController *_chatDisplayController;
    CNContactPicker *_contactPicker;
    SOBuddyOutlineViewController *_buddyViewController;
}

+ (Class)tokenFieldControllerClass;
@property BOOL reloadContactPicker; // @synthesize reloadContactPicker=_reloadContactPicker;
@property(retain) SOBuddyOutlineViewController *buddyViewController; // @synthesize buddyViewController=_buddyViewController;
@property(retain) CNContactPicker *contactPicker; // @synthesize contactPicker=_contactPicker;
@property(retain, nonatomic) SOChatDisplayController *chatDisplayController; // @synthesize chatDisplayController=_chatDisplayController;
@property(retain) NSButton *addRecipientButton; // @synthesize addRecipientButton=_addRecipientButton;
- (void).cxx_destruct;
- (id)_createAndConfigureAddRecipientButton;
- (id)_createAndConfigureCollapseButton;
- (id)_createAndConfigureExpandButton;
- (id)_createTextButtonWithString:(id)arg1;
- (id)_createAndConfigureRecipientScrollView;
- (id)_createAndConfigureToLabel;
- (void)dealloc;
- (void)loadView;
- (void)contactPicker:(id)arg1 didSearchForString:(id)arg2;
- (void)contactPicker:(id)arg1 didChooseContact:(id)arg2 key:(id)arg3 value:(id)arg4;
- (void)outlineViewController:(id)arg1 selectedHandle:(id)arg2;
- (void)showContacts:(id)arg1;
- (void)_storeViewConfigurationData;
- (void)_chatDisplayControllerWillBeEncoded:(id)arg1;
- (void)accountLoginStatusChanged:(id)arg1;
- (void)recipientsDidChange;
- (double)baseRecipientActionViewOffset;
- (void)addRecipientActionView:(id)arg1 verticalOffset:(double)arg2;
- (void)chatDisplayControllerDidChange;
- (void)chatDisplayControllerWillChange:(id)arg1;
@property(getter=isEditable) BOOL editable; // @dynamic editable;
@property(readonly) SORecipientBarView *recipientBarView; // @dynamic recipientBarView;

@end
