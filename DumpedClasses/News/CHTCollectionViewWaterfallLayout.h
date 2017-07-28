//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSMutableArray, NSMutableDictionary;

@interface CHTCollectionViewWaterfallLayout : UICollectionViewLayout
{
    long long _columnCount;
    double _minimumColumnSpacing;
    double _minimumInteritemSpacing;
    double _headerHeight;
    double _footerHeight;
    unsigned long long _itemRenderDirection;
    double _minimumContentHeight;
    id <CHTCollectionViewDelegateWaterfallLayout> _delegate;
    NSMutableArray *_columnHeights;
    NSMutableArray *_sectionItemAttributes;
    NSMutableArray *_allItemAttributes;
    NSMutableDictionary *_headersAttribute;
    NSMutableDictionary *_footersAttribute;
    NSMutableArray *_unionRects;
    struct UIEdgeInsets _headerInset;
    struct UIEdgeInsets _footerInset;
    struct UIEdgeInsets _sectionInset;
}

@property(retain, nonatomic) NSMutableArray *unionRects; // @synthesize unionRects=_unionRects;
@property(retain, nonatomic) NSMutableDictionary *footersAttribute; // @synthesize footersAttribute=_footersAttribute;
@property(retain, nonatomic) NSMutableDictionary *headersAttribute; // @synthesize headersAttribute=_headersAttribute;
@property(retain, nonatomic) NSMutableArray *allItemAttributes; // @synthesize allItemAttributes=_allItemAttributes;
@property(retain, nonatomic) NSMutableArray *sectionItemAttributes; // @synthesize sectionItemAttributes=_sectionItemAttributes;
@property(retain, nonatomic) NSMutableArray *columnHeights; // @synthesize columnHeights=_columnHeights;
@property(nonatomic) __weak id <CHTCollectionViewDelegateWaterfallLayout> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double minimumContentHeight; // @synthesize minimumContentHeight=_minimumContentHeight;
@property(nonatomic) unsigned long long itemRenderDirection; // @synthesize itemRenderDirection=_itemRenderDirection;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) struct UIEdgeInsets footerInset; // @synthesize footerInset=_footerInset;
@property(nonatomic) struct UIEdgeInsets headerInset; // @synthesize headerInset=_headerInset;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double minimumColumnSpacing; // @synthesize minimumColumnSpacing=_minimumColumnSpacing;
@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
- (void).cxx_destruct;
- (unsigned long long)nextColumnIndexForItem:(long long)arg1 inSection:(long long)arg2;
- (unsigned long long)longestColumnIndexInSection:(long long)arg1;
- (unsigned long long)shortestColumnIndexInSection:(long long)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)commonInit;
- (double)itemWidthInSectionAtIndex:(long long)arg1;
- (long long)columnCountForSection:(long long)arg1;

@end

