//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface CalendarEventInformationModel : CTBusinessBean
{
    _Bool _isAllDay;
    NSString *_beginTime;
    NSString *_endTime;
    NSString *_address;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) _Bool isAllDay; // @synthesize isAllDay=_isAllDay;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
