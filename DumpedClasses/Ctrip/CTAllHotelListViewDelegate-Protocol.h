//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTUserOperationCollector.h"

@class CTTableView, FilterSimpleDataModel, HotelFilterConditionModel, HotelRecommendFilterItem, NSIndexPath, NSString;

@protocol CTAllHotelListViewDelegate <CTUserOperationCollector>

@optional
- (void)selectRecommendFilterItem:(HotelRecommendFilterItem *)arg1;
- (void)selectSearchObject:(FilterSimpleDataModel *)arg1;
- (void)hotelListServiceFinishedSuccessfully;
- (void)didGotoH5GuidePage:(NSString *)arg1;
- (void)clickListTopViewBtn:(id)arg1;
- (void)sendGetOverseasNearHotel;
- (void)clickDeleteAction:(HotelFilterConditionModel *)arg1;
- (void)searchMoreHotel:(id)arg1;
- (void)pullUpToAddData:(CTTableView *)arg1;
- (void)pullDownToRefreshData:(CTTableView *)arg1;
- (void)btnRefreshClicked:(id)arg1;
- (void)btnAreaClicked:(id)arg1;
- (void)btnFilterClicked:(id)arg1;
- (void)btnPriceStarClicked:(id)arg1;
- (void)btnSortClicked:(id)arg1;
- (void)didSelDirectSearchNoResultCell:(id)arg1;
- (void)didSelCell:(id)arg1;
- (void)allHotelListViewCellDidSelectRowAtIndexPath:(NSIndexPath *)arg1;
@end
