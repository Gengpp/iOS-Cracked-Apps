//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreArticleCellView.h"

#import "TTSharedViewTransitionFrom.h"

@class NSString, TTRNView;

@interface ExploreArticleTitleRightPicCellView : ExploreArticleCellView <TTSharedViewTransitionFrom>
{
    TTRNView *_rnview;
}

+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
+ (struct CGSize)picSizeWithCellWidth:(double)arg1;
@property(retain, nonatomic) TTRNView *rnview; // @synthesize rnview=_rnview;
- (void).cxx_destruct;
- (unsigned long long)cellSubStyle;
- (unsigned long long)cellStyle;
- (id)animationFromImage;
- (id)animationFromView;
- (_Bool)titleAndSourceHeightLargerThanPicH;
- (double)titleAndSourceHeight;
- (void)refreshUI;
- (void)refreshWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

