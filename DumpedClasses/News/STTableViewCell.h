//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSString, SSThemedTextField, STTableViewCellItem, UISwitch;

@interface STTableViewCell : SSThemedTableViewCell <UITextFieldDelegate>
{
    UISwitch *_switchView;
    STTableViewCellItem *_cellItem;
    SSThemedTextField *_textFieldView;
}

@property(retain, nonatomic) SSThemedTextField *textFieldView; // @synthesize textFieldView=_textFieldView;
@property(retain, nonatomic) STTableViewCellItem *cellItem; // @synthesize cellItem=_cellItem;
@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
- (void).cxx_destruct;
- (void)_textFieldActionFired:(id)arg1;
- (void)_switchActionFired:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

