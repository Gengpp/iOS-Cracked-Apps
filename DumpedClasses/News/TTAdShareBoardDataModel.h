//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional><TTAdShareBoardItemModel>, NSDate<Optional>, NSNumber<Optional>;

@interface TTAdShareBoardDataModel : JSONModel
{
    NSArray<Optional><TTAdShareBoardItemModel> *_ad_item;
    NSNumber<Optional> *_request_after;
    NSNumber<Optional> *_close_button_switch;
    NSNumber<Optional> *_close_expire_time;
    NSDate<Optional> *_requestTime;
    NSDate<Optional> *_closeShowTime;
}

@property(retain, nonatomic) NSDate<Optional> *closeShowTime; // @synthesize closeShowTime=_closeShowTime;
@property(retain, nonatomic) NSDate<Optional> *requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) NSNumber<Optional> *close_expire_time; // @synthesize close_expire_time=_close_expire_time;
@property(retain, nonatomic) NSNumber<Optional> *close_button_switch; // @synthesize close_button_switch=_close_button_switch;
@property(retain, nonatomic) NSNumber<Optional> *request_after; // @synthesize request_after=_request_after;
@property(retain, nonatomic) NSArray<Optional><TTAdShareBoardItemModel> *ad_item; // @synthesize ad_item=_ad_item;
- (void).cxx_destruct;
- (void)readShowCloseTime:(id)arg1;
- (void)updateShowCloseTime;
- (void)updateDate;

@end

