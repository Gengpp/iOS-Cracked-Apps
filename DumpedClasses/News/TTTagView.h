//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSMutableArray, NSString, TTTagViewConfig, UICollectionView, UIView;

@interface TTTagView : SSThemedView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    unsigned long long _rowNumber;
    TTTagViewConfig *_config;
    UICollectionView *_tagCollectionView;
    UIView *_headerView;
    UIView *_footerView;
    Class _clazz;
    NSMutableArray *_tagItems;
}

@property(retain, nonatomic) NSMutableArray *tagItems; // @synthesize tagItems=_tagItems;
@property(retain, nonatomic) Class clazz; // @synthesize clazz=_clazz;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UICollectionView *tagCollectionView; // @synthesize tagCollectionView=_tagCollectionView;
@property(retain, nonatomic) TTTagViewConfig *config; // @synthesize config=_config;
@property(nonatomic) unsigned long long rowNumber; // @synthesize rowNumber=_rowNumber;
- (void).cxx_destruct;
- (_Bool)intendMultiSections;
- (_Bool)isHeightRestricted;
- (struct CGSize)ajustHeight:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)insertTagItems:(id)arg1 afterItem:(id)arg2 needScroll:(_Bool)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)refreshWithTagItems:(id)arg1;
- (void)registerCellButtonClass:(Class)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVO;
- (void)addKVO;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setupCollectionViewWithFlowLayout:(id)arg1;
- (id)flowLayoutWithAlignment:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 alignment:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

