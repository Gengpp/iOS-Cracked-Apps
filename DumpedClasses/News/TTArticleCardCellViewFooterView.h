//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class NSString, SSThemedButton, SSThemedView, TTAlphaThemedButton;

@interface TTArticleCardCellViewFooterView : SSViewBase
{
    TTAlphaThemedButton *_leftTitleButton;
    SSThemedView *_leftSepLineView;
    TTAlphaThemedButton *_middleTitleButton;
    SSThemedView *_rightSepLineView;
    TTAlphaThemedButton *_rightTitleButton;
    SSThemedButton *_arrowTitleButton;
    SSThemedButton *_arrowImageButton;
    id _target;
    SEL _selector;
    NSString *_leftButtonUrl;
    NSString *_middleButtonUrl;
    NSString *_rightButtonUrl;
    NSString *_cardID;
    NSString *_categoryID;
}

@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *cardID; // @synthesize cardID=_cardID;
@property(copy, nonatomic) NSString *rightButtonUrl; // @synthesize rightButtonUrl=_rightButtonUrl;
@property(copy, nonatomic) NSString *middleButtonUrl; // @synthesize middleButtonUrl=_middleButtonUrl;
@property(copy, nonatomic) NSString *leftButtonUrl; // @synthesize leftButtonUrl=_leftButtonUrl;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;
- (void)buttonClicked:(id)arg1;
- (void)refreshUIWithModel:(id)arg1;
- (void)initConstraints;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

