//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class Article, NSArray, NSString, SSThemedButton, TTArticleDetailMenuTitleView, UITableView;

@interface TTArticleDetailMenuViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    TTArticleDetailMenuTitleView *_titleView;
    UITableView *_tableView;
    NSArray *_modelArray;
    double _screenWidth;
    double _screenHeight;
    double _paddingForPad;
    SSThemedButton *_finishedButton;
    id <TTArticleDetailMenuDelegate> _delegate;
    Article *_article;
}

@property(retain, nonatomic) Article *article; // @synthesize article=_article;
@property(nonatomic) __weak id <TTArticleDetailMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSThemedButton *finishedButton; // @synthesize finishedButton=_finishedButton;
@property(nonatomic) double paddingForPad; // @synthesize paddingForPad=_paddingForPad;
@property(nonatomic) double screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) NSArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TTArticleDetailMenuTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

