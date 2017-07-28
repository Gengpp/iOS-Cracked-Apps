//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreMomentListCellItemBase.h"

#import "ArticleMomentListCellCommentItemDelegate.h"
#import "SSAttributeLabelModelDelegate.h"

@class NSMutableArray, NSString, UIButton, UIView;

@interface ExploreMomentListCellCommentListItemView : ExploreMomentListCellItemBase <ArticleMomentListCellCommentItemDelegate, SSAttributeLabelModelDelegate>
{
    id <ExploreMomentListCellCommentListItemViewDelegate> _delegate;
    NSMutableArray *_commentItems;
    UIButton *_showMoreButton;
    NSString *_showMoreStr;
    UIButton *_writeCommentButton;
    UIView *_bgView;
}

+ (_Bool)needShowForModel:(id)arg1 userInfo:(id)arg2;
+ (double)heightForMomentModel:(id)arg1 cellWidth:(double)arg2 userInfo:(id)arg3;
+ (_Bool)needShowHasMoreView:(id)arg1;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIButton *writeCommentButton; // @synthesize writeCommentButton=_writeCommentButton;
@property(copy, nonatomic) NSString *showMoreStr; // @synthesize showMoreStr=_showMoreStr;
@property(retain, nonatomic) UIButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(retain, nonatomic) NSMutableArray *commentItems; // @synthesize commentItems=_commentItems;
@property(nonatomic) __weak id <ExploreMomentListCellCommentListItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ShowMoreButtonClicked:(id)arg1;
- (void)commentItemDidSeletedNameButton:(id)arg1;
- (void)commentItemDidSeletedReplyNameButton:(id)arg1;
- (void)commentItemDidSeletedCommentButton:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)writeCommentButtonClicked:(id)arg1;
- (double)heightForMomentModel:(id)arg1 cellWidth:(double)arg2;
- (void)refreshForMomentModel:(id)arg1;
- (void)recycleItems;
- (void)expandShowMoreButton;
- (void)themeChanged:(id)arg1;
- (void)layoutSubviews;
- (id)initWithWidth:(double)arg1 userInfo:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

