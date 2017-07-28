//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreMomentListCellBase.h"

#import "ExploreMomentListCellCommentListItemViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class ArticleMomentCommentModel, ExploreMomentListCellCommentListItemView, ExploreMomentListCellDiggUsersItemView, ExploreMomentListCellHeaderItem, NSString, UIView;

@interface ExploreMomentListCell : ExploreMomentListCellBase <UIActionSheetDelegate, ExploreMomentListCellCommentListItemViewDelegate>
{
    ExploreMomentListCellHeaderItem *_headerItem;
    ExploreMomentListCellDiggUsersItemView *_diggUsersItemView;
    ExploreMomentListCellCommentListItemView *_commentListItemView;
    UIView *_lineView;
    ArticleMomentCommentModel *_needDeleteCommentModel;
}

+ (double)heightForModel:(id)arg1 cellWidth:(double)arg2 sourceType:(unsigned long long)arg3;
@property(retain, nonatomic) ArticleMomentCommentModel *needDeleteCommentModel; // @synthesize needDeleteCommentModel=_needDeleteCommentModel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) ExploreMomentListCellCommentListItemView *commentListItemView; // @synthesize commentListItemView=_commentListItemView;
@property(retain, nonatomic) ExploreMomentListCellDiggUsersItemView *diggUsersItemView; // @synthesize diggUsersItemView=_diggUsersItemView;
@property(retain, nonatomic) ExploreMomentListCellHeaderItem *headerItem; // @synthesize headerItem=_headerItem;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)momentCellCommentViewWriteCommentButtonClicked:(id)arg1 rectInKeyWindow:(struct CGRect)arg2;
- (void)momentCellCommentView:(id)arg1 commentButtonClicked:(id)arg2 rectInKeyWindow:(struct CGRect)arg3;
- (void)momentCellCommentViewShowMoreLabelClicked:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)headerItemCommentButtonClicked:(id)arg1;
- (void)showMomentDetailView;
- (void)themeChanged:(id)arg1;
- (void)refreshWithModel:(id)arg1 indexPath:(id)arg2;
- (void)_layoutViews;
- (void)layoutSubviews;
- (struct CGRect)_lineViewFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

