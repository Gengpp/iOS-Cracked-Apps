//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface CTInternationalFlightsListMoreAirportCell : UITableViewCell
{
    UILabel *_airportNameLabel;
    UILabel *_airportDistanceLabel;
    UILabel *_flightsLeavingAirportLabel;
    UILabel *_showMoreFlightsLabel;
    UILabel *_priceIconLabel;
    UILabel *_priceAmountLabel;
    UILabel *_lowestPriceTagLabel;
    UIImageView *_iconView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) UILabel *lowestPriceTagLabel; // @synthesize lowestPriceTagLabel=_lowestPriceTagLabel;
@property(readonly, nonatomic) UILabel *priceAmountLabel; // @synthesize priceAmountLabel=_priceAmountLabel;
@property(readonly, nonatomic) UILabel *priceIconLabel; // @synthesize priceIconLabel=_priceIconLabel;
@property(readonly, nonatomic) UILabel *showMoreFlightsLabel; // @synthesize showMoreFlightsLabel=_showMoreFlightsLabel;
@property(readonly, nonatomic) UILabel *flightsLeavingAirportLabel; // @synthesize flightsLeavingAirportLabel=_flightsLeavingAirportLabel;
@property(readonly, nonatomic) UILabel *airportDistanceLabel; // @synthesize airportDistanceLabel=_airportDistanceLabel;
@property(readonly, nonatomic) UILabel *airportNameLabel; // @synthesize airportNameLabel=_airportNameLabel;
- (void).cxx_destruct;
- (void)setupCellSubVieWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

