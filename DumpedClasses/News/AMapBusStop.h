//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSArray, NSString;

@interface AMapBusStop : AMapSearchObject
{
    NSString *_uid;
    NSString *_adcode;
    NSString *_name;
    NSString *_citycode;
    AMapGeoPoint *_location;
    NSString *_timestamp;
    NSArray *_buslines;
    NSString *_sequence;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@property(copy, nonatomic) NSString *sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSArray *buslines; // @synthesize buslines=_buslines;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (_Bool)ajo_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;

@end

