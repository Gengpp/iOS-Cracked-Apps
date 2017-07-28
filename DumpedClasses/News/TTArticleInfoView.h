//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedLabel, TTAlphaThemedButton, TTArticleTagView, TTDiggButton;

@interface TTArticleInfoView : SSThemedView
{
    id <TTInfoViewProtocol> _delegate;
    TTArticleTagView *_typeIconView;
    TTDiggButton *_digButton;
    TTAlphaThemedButton *_commentButton;
    SSThemedLabel *_timeLabel;
}

@property(retain, nonatomic) SSThemedLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) TTAlphaThemedButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) TTDiggButton *digButton; // @synthesize digButton=_digButton;
@property(retain, nonatomic) TTArticleTagView *typeIconView; // @synthesize typeIconView=_typeIconView;
@property(nonatomic) __weak id <TTInfoViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateInfoView:(id)arg1;
- (void)layoutInfoView;
- (void)commentButtonClicked;
- (void)digButtonClicked;
- (void)refreshCommentButton:(id)arg1;
- (void)refreshDiggButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool hideTimeLabel;
- (void)setFrame:(struct CGRect)arg1;

@end

