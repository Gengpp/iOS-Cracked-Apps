//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray<WDWendaCellDataStructModel>, NSNumber, NSString, WDTipsStructModel;

@interface WDWendaCategoryBrowResponseModel : TTResponseModel
{
    NSNumber *_login_status;
    NSNumber *_total_number;
    NSNumber *_has_more;
    NSString *_message;
    NSNumber *_has_more_to_refresh;
    NSString *_extra;
    NSArray<WDWendaCellDataStructModel> *_data;
    WDTipsStructModel *_tips;
}

@property(retain, nonatomic) WDTipsStructModel *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSArray<WDWendaCellDataStructModel> *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSNumber *has_more_to_refresh; // @synthesize has_more_to_refresh=_has_more_to_refresh;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *has_more; // @synthesize has_more=_has_more;
@property(retain, nonatomic) NSNumber *total_number; // @synthesize total_number=_total_number;
@property(retain, nonatomic) NSNumber *login_status; // @synthesize login_status=_login_status;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

