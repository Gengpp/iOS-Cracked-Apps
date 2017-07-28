//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "TTUserProfileInputViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AccountManager, NSArray, NSCharacterSet, NSString, SSAvatarView, UIActivityIndicatorView, UITableView;

@interface SSEditUserProfileView : SSViewBase <UITableViewDataSource, UITableViewDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate, TTUserProfileInputViewDelegate>
{
    _Bool _backButtonDisabled;
    _Bool _resetPasswordAlertShowed;
    id <SSEditUserProfileViewBaseDelegate> _delegate;
    UITableView *_listView;
    SSAvatarView *_avatarView;
    UIActivityIndicatorView *_avatarIndicator;
    UIActivityIndicatorView *_nameIndicator;
    UIActivityIndicatorView *_descIndicator;
    NSArray *_accounts;
    NSCharacterSet *_nameLatinCharacterSet;
    AccountManager *_accountManager;
    long long _currentLogout;
}

+ (double)fontSizeOfLogoutTitleLabel;
+ (double)fontSizeOfCellRightLabel;
+ (double)fontSizeOfCellLeftLabel;
+ (double)heightOfLogoutCell;
+ (double)heightOfAccountCell;
@property(nonatomic) _Bool resetPasswordAlertShowed; // @synthesize resetPasswordAlertShowed=_resetPasswordAlertShowed;
@property(nonatomic) long long currentLogout; // @synthesize currentLogout=_currentLogout;
@property(nonatomic) __weak AccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) NSCharacterSet *nameLatinCharacterSet; // @synthesize nameLatinCharacterSet=_nameLatinCharacterSet;
@property(copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(retain, nonatomic) UIActivityIndicatorView *descIndicator; // @synthesize descIndicator=_descIndicator;
@property(retain, nonatomic) UIActivityIndicatorView *nameIndicator; // @synthesize nameIndicator=_nameIndicator;
@property(retain, nonatomic) UIActivityIndicatorView *avatarIndicator; // @synthesize avatarIndicator=_avatarIndicator;
@property(retain, nonatomic) SSAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UITableView *listView; // @synthesize listView=_listView;
@property(nonatomic) _Bool backButtonDisabled; // @synthesize backButtonDisabled=_backButtonDisabled;
@property(nonatomic) __weak id <SSEditUserProfileViewBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)numberOfLoginedAccounts;
- (id)mobileNumber;
- (void)reloadData;
- (void)bindMobile;
- (void)reportUpdateUserPhotoFinishedNotification:(id)arg1;
- (void)updateUserFinished:(id)arg1;
- (void)handleLogoutUserNotification:(id)arg1;
- (void)handleLogoutResult:(id)arg1;
- (void)handleUpdateAccountsNotification:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)confirmButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)logout;
- (void)accountsSwitchButtonClicked:(id)arg1;
- (void)changeMobileActionFired:(id)arg1;
- (void)changePasswordActionFired:(id)arg1;
- (void)descriptionButtonClicked:(id)arg1;
- (void)nameButtonClicked:(id)arg1;
- (void)avatarButtonClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)willAppear;
- (void)themeChanged:(id)arg1;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

