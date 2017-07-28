//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDate<Optional>, NSNumber<Optional>, TTAdCanvasResourceModel<Optional>;

@interface TTAdCanvasProjectModel : JSONModel
{
    NSNumber<Optional> *_ad_id;
    TTAdCanvasResourceModel<Optional> *_resource;
    NSNumber<Optional> *_end_time;
    NSDate<Optional> *_clearTime;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSDate<Optional> *clearTime; // @synthesize clearTime=_clearTime;
@property(retain, nonatomic) NSNumber<Optional> *end_time; // @synthesize end_time=_end_time;
@property(retain, nonatomic) TTAdCanvasResourceModel<Optional> *resource; // @synthesize resource=_resource;
@property(retain, nonatomic) NSNumber<Optional> *ad_id; // @synthesize ad_id=_ad_id;
- (void).cxx_destruct;
- (void)updateClearTime;

@end

