//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIView<KPAlertViewProtocol>;

@interface KPAlertView : UIView
{
    NSString *_identifier;
    UIView<KPAlertViewProtocol> *_parentView;
    NSString *_title;
    NSString *_subTitle;
    NSString *_confirmTitle;
    NSString *_cancelTitle;
}

@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(copy, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak UIView<KPAlertViewProtocol> *parentView; // @synthesize parentView=_parentView;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)btnConfirmClicked:(id)arg1;
- (void)btnCancelClicked:(id)arg1;
- (void)show;
- (void)makeUI;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 confirmTitle:(id)arg3 cancelTitle:(id)arg4 parentView:(id)arg5 identifier:(id)arg6;

@end

