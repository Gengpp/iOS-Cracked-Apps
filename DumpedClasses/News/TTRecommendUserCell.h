//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreCellBase.h"

@class TTRecommendUserCellView;

@interface TTRecommendUserCell : ExploreCellBase
{
    TTRecommendUserCellView *_recommendUserCellView;
}

+ (Class)cellViewClass;
@property(retain, nonatomic) TTRecommendUserCellView *recommendUserCellView; // @synthesize recommendUserCellView=_recommendUserCellView;
- (void).cxx_destruct;
- (void)didEndDisplaying;
- (void)willDisplay;
- (id)createCellView;

@end

