//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, SSThemedLabel, UICollectionView;

@interface TTPersonalHomeRecommendFollowView : SSThemedView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isSpread;
    NSArray *_recommends;
    NSString *_userID;
    UICollectionView *_collectionView;
    SSThemedLabel *_recommendLabel;
}

@property(nonatomic) __weak SSThemedLabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool isSpread; // @synthesize isSpread=_isSpread;
@property(retain, nonatomic) NSArray *recommends; // @synthesize recommends=_recommends;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateFollowWithUserID:(id)arg1 isFollow:(_Bool)arg2;
- (void)setupSubview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

