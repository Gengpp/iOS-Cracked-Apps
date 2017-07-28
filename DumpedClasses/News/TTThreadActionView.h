//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTThreadCellItemBase.h"

@class SSThemedButton, SSThemedLabel, TTArticleTagView, TTDiggButton, Thread;

@interface TTThreadActionView : TTThreadCellItemBase
{
    Thread *_originalThreadData;
    TTArticleTagView *_tagView;
    TTDiggButton *_diggButton;
    SSThemedButton *_commentButton;
    SSThemedLabel *_timeLabel;
}

+ (_Bool)shouldShowForData:(id)arg1 listType:(unsigned long long)arg2;
+ (double)heightForData:(id)arg1 width:(double)arg2 listType:(unsigned long long)arg3;
@property(retain, nonatomic) SSThemedLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) SSThemedButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) TTDiggButton *diggButton; // @synthesize diggButton=_diggButton;
@property(retain, nonatomic) TTArticleTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) Thread *originalThreadData; // @synthesize originalThreadData=_originalThreadData;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVO;
- (void)addKVO;
- (void)tapComment;
- (void)diggAction;
- (void)refreshWithData:(id)arg1 listType:(unsigned long long)arg2;
- (void)refreshUI;
- (void)setFrame:(struct CGRect)arg1;
- (void)createComponent;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

