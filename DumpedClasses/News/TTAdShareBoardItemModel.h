//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional>, NSArray<Optional><TTAdImageModel>, NSDate<Optional>, NSNumber<Optional>, NSString<Optional>;

@interface TTAdShareBoardItemModel : JSONModel
{
    NSNumber<Optional> *_ID;
    NSString<Optional> *_log_extra;
    NSArray<Optional> *_track_url_list;
    NSNumber<Optional> *_display_after;
    NSNumber<Optional> *_expire_seconds;
    NSString<Optional> *_title;
    NSArray<Optional><TTAdImageModel> *_image_list;
    NSString<Optional> *_label;
    NSNumber<Optional> *_display_type;
    NSNumber<Optional> *_label_style;
    NSString<Optional> *_type;
    NSNumber<Optional> *_predownload;
    NSDate<Optional> *_startTime;
    NSDate<Optional> *_endTime;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSDate<Optional> *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate<Optional> *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSNumber<Optional> *predownload; // @synthesize predownload=_predownload;
@property(retain, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber<Optional> *label_style; // @synthesize label_style=_label_style;
@property(retain, nonatomic) NSNumber<Optional> *display_type; // @synthesize display_type=_display_type;
@property(retain, nonatomic) NSString<Optional> *label; // @synthesize label=_label;
@property(retain, nonatomic) NSArray<Optional><TTAdImageModel> *image_list; // @synthesize image_list=_image_list;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber<Optional> *expire_seconds; // @synthesize expire_seconds=_expire_seconds;
@property(retain, nonatomic) NSNumber<Optional> *display_after; // @synthesize display_after=_display_after;
@property(retain, nonatomic) NSArray<Optional> *track_url_list; // @synthesize track_url_list=_track_url_list;
@property(retain, nonatomic) NSString<Optional> *log_extra; // @synthesize log_extra=_log_extra;
@property(retain, nonatomic) NSNumber<Optional> *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (void)updateDate;
- (unsigned long long)displayType;

@end

