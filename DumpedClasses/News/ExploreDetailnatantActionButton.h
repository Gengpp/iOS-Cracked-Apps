//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class DetailActionRequestManager, ExploreOriginalData, NSNumber;

@interface ExploreDetailnatantActionButton : UIButton
{
    _Bool _isDigButton;
    DetailActionRequestManager *_actionManager;
    ExploreOriginalData *_article;
    NSNumber *_adID;
}

@property(retain, nonatomic) NSNumber *adID; // @synthesize adID=_adID;
@property(retain, nonatomic) ExploreOriginalData *article; // @synthesize article=_article;
@property(retain, nonatomic) DetailActionRequestManager *actionManager; // @synthesize actionManager=_actionManager;
@property(nonatomic) _Bool isDigButton; // @synthesize isDigButton=_isDigButton;
- (void).cxx_destruct;
- (void)refresh;
- (void)refreshWithArticle:(id)arg1 adID:(id)arg2;
- (void)actionButtonClicked;
- (id)initIsDigButton:(_Bool)arg1;
- (void)dealloc;

@end

