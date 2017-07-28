//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, SSThemedImageView, SSThemedLabel, SSThemedView;

@interface TTBubbleView : UIView
{
    _Bool _willShow;
    _Bool _isShowing;
    _Bool _isAnimating;
    unsigned long long _type;
    NSString *_imageName;
    NSString *_text;
    double _arrowOffset;
    unsigned long long _arrowDirection;
    unsigned long long _arrowType;
    double _lineHeight;
    SSThemedView *_containerView;
    SSThemedImageView *_tipImageView;
    SSThemedLabel *_tipTextLabel;
    SSThemedView *_splitLine;
    SSThemedView *_line;
    SSThemedView *_dot;
    SSThemedView *_upArrowView;
    SSThemedView *_downArrowView;
    CDUnknownBlockType _tapHandle;
    CDUnknownBlockType _closeHandle;
}

@property(copy, nonatomic) CDUnknownBlockType closeHandle; // @synthesize closeHandle=_closeHandle;
@property(copy, nonatomic) CDUnknownBlockType tapHandle; // @synthesize tapHandle=_tapHandle;
@property(retain, nonatomic) SSThemedView *downArrowView; // @synthesize downArrowView=_downArrowView;
@property(retain, nonatomic) SSThemedView *upArrowView; // @synthesize upArrowView=_upArrowView;
@property(retain, nonatomic) SSThemedView *dot; // @synthesize dot=_dot;
@property(retain, nonatomic) SSThemedView *line; // @synthesize line=_line;
@property(retain, nonatomic) SSThemedView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) SSThemedLabel *tipTextLabel; // @synthesize tipTextLabel=_tipTextLabel;
@property(retain, nonatomic) SSThemedImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) SSThemedView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) unsigned long long arrowType; // @synthesize arrowType=_arrowType;
@property(nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool willShow; // @synthesize willShow=_willShow;
- (void).cxx_destruct;
- (void)setPadding:(double)arg1 ofScreen:(unsigned long long)arg2;
- (void)buildContainerViewWithCloseButton;
- (void)buildContainerViewWithoutImage;
- (void)buildContainerViewWithImage;
- (void)buildContainerView;
- (void)initAnimateState;
- (void)buildViewForArrowDown;
- (void)buildViewForArrowUp;
- (void)tap:(id)arg1;
- (void)hideTipWithAnimation:(_Bool)arg1 forceHide:(_Bool)arg2 completionHandle:(CDUnknownBlockType)arg3;
- (void)hideTipWithAnimation:(_Bool)arg1 forceHide:(_Bool)arg2;
- (void)showTipWithAnimation:(_Bool)arg1 automaticHide:(_Bool)arg2 animationCompleteHandle:(CDUnknownBlockType)arg3 autoHideHandle:(CDUnknownBlockType)arg4 tapHandle:(CDUnknownBlockType)arg5 closeHandle:(CDUnknownBlockType)arg6;
- (void)showTipWithAnimation:(_Bool)arg1 automaticHide:(_Bool)arg2 animationCompleteHandle:(CDUnknownBlockType)arg3 autoHideHandle:(CDUnknownBlockType)arg4 tapHandle:(CDUnknownBlockType)arg5;
- (void)showTipWithAnimation:(_Bool)arg1 automaticHide:(_Bool)arg2 animationCompleteHandle:(CDUnknownBlockType)arg3 tapHandle:(CDUnknownBlockType)arg4;
- (double)arrowWidth;
- (double)arrowHeight;
- (double)dotSize;
- (double)lineWidth;
- (double)containerViewCornerRadius;
- (double)textFontSize;
- (double)containerViewHeight;
- (double)imageAndTextMargin;
- (double)imageHeight;
- (double)imageWidth;
- (double)rightPadding;
- (double)leftPadding;
- (void)buildViews;
- (void)commonInit;
- (id)initWithImageName:(id)arg1 tipText:(id)arg2 arrowDirection:(unsigned long long)arg3 arrowOffset:(double)arg4 arrowType:(unsigned long long)arg5 lineHeight:(double)arg6 viewType:(unsigned long long)arg7;
- (id)initWithImageName:(id)arg1 tipText:(id)arg2 arrowDirection:(unsigned long long)arg3 arrowOffset:(double)arg4 arrowType:(unsigned long long)arg5 lineHeight:(double)arg6;

@end

